using System.ComponentModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices.JavaScript;
using System.Security.Cryptography.X509Certificates;
using System.Text.Json;
using static System.Net.WebRequestMethods;
using System.Net.Http.Json;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace mostghosteweb.Pages
{
    public partial class Zakapalka
    {
        private int maxLevel = 20;
        private int maxPlayers = 5;
        public DiceManager BaseDicePool = new DiceManager(7, 8, 4, 6, 5, 3);

        public bool gameHasStarted = false;
        public string tekstas = "none yet";
        public string resultDisplayString = "Make a roll!";
        public string eventMsg = "No recent events.";
        public int diceSum = 0;
        public int rollTarget = 1;
        public List<Player> Players = new List<Player>();
        public DiceManager DicePool = new DiceManager();
        public DiceManager PlayerRoll = new DiceManager();
        public string? currentName;

        /// <summary>
        /// Resets game on page start
        /// </summary>
        protected override void OnInitialized()
        {
            resetGame();
            base.OnInitialized();
        }

        /// <summary>
        /// The player class stores the name and score of a player
        /// </summary>
        public class Player {
            public string name;
            public int score;

            public Player()
            {
                name = "unnamed";
                score = 0;
            }

            public Player(string name)
            {
                this.name = name;
                score = 0;
            }

            public Player(string name, int score)
            {
                this.name = name;
                this.score = score;
            }
        }

        /// <summary>
        /// The dice manager stores dice values.
        /// Has helper methods to check various values.
        /// </summary>
        public class DiceManager
        {
            public int D4Count;
            public int D6Count;
            public int D8Count;
            public int D10Count;
            public int D12Count;
            public int D20Count;

            public DiceManager()
            {
                D4Count = 0;
                D6Count = 0;
                D8Count = 0;
                D10Count = 0;
                D12Count = 0;
                D20Count = 0;
            }

            public DiceManager(int d4Count, int d6Count, int d8Count, int d10Count, int d12Count, int d20Count)
            {
                D4Count = d4Count;
                D6Count = d6Count;
                D8Count = d8Count;
                D10Count = d10Count;
                D12Count = d12Count;
                D20Count = d20Count;
            }



            /// <summary>
            /// Adds 1 to the count of this dice
            /// </summary>
            public void addD4()
            {
                D4Count++;
            }
            /// <summary>
            /// Removes 1 from the count of this dice
            /// </summary>
            public void removeD4()
            {
                D4Count--;
            }
            /// <summary>
            /// Adds 1 to the count of this dice
            /// </summary>
            public void addD6()
            {
                D6Count++;
            }
            /// <summary>
            /// Removes 1 from the count of this dice
            /// </summary>
            public void removeD6()
            {
                D6Count--;
            }
            /// <summary>
            /// Adds 1 to the count of this dice
            /// </summary>
            public void addD8()
            {
                D8Count++;
            }
            /// <summary>
            /// Removes 1 from the count of this dice
            /// </summary>
            public void removeD8()
            {
                D8Count--;
            }
            /// <summary>
            /// Adds 1 to the count of this dice
            /// </summary>
            public void addD10()
            {
                D10Count++;
            }
            /// <summary>
            /// Removes 1 from the count of this dice
            /// </summary>
            public void removeD10()
            {
                D10Count--;
            }
            /// <summary>
            /// Adds 1 to the count of this dice
            /// </summary>
            public void addD12()
            {
                D12Count++;
            }
            /// <summary>
            /// Removes 1 from the count of this dice
            /// </summary>
            public void removeD12()
            {
                D12Count--;
            }
            /// <summary>
            /// Adds 1 to the count of this dice
            /// </summary>
            public void addD20()
            {
                D20Count++;
            }
            /// <summary>
            /// Removes 1 from the count of this dice
            /// </summary>
            public void removeD20()
            {
                D20Count--;
            }

            /// <summary>
            /// Returns true if all dice values are equal to 0, true otherwise.
            /// </summary>
            /// <returns></returns>
            public bool isEmpty()
            {
                if (D4Count != 0) return false;
                if (D6Count != 0) return false;
                if (D8Count != 0) return false;
                if (D10Count != 0) return false;
                if (D12Count != 0) return false;
                if (D20Count != 0) return false;
                return true;
            }

            /// <summary>
            /// Formats the dice counts of DiceManager into a string.
            /// Format:
            /// x1 d4, x3 d6, x8 d12 etc...
            /// </summary>
            /// <returns></returns>
            public override string ToString()
            {
                int elemCount = 0;
                string retString = "";
                if (D4Count > 0)
                {
                    retString += System.String.Format("x{0} d4", D4Count);
                    elemCount++;
                }
                if (D6Count > 0)
                {
                    if (elemCount > 0)
                    {
                        retString += ", ";
                    }
                    retString += System.String.Format("x{0} d6", D6Count);
                    elemCount++;
                }
                if (D8Count > 0)
                {
                    if (elemCount > 0)
                    {
                        retString += ", ";
                    }
                    retString += System.String.Format("x{0} d8", D8Count);
                    elemCount++;
                }
                if (D10Count > 0)
                {
                    if (elemCount > 0)
                    {
                        retString += ", ";
                    }
                    retString += System.String.Format("x{0} d10", D10Count);
                    elemCount++;
                }
                if (D12Count > 0)
                {
                    if (elemCount > 0)
                    {
                        retString += ", ";
                    }
                    retString += System.String.Format("x{0} d12", D12Count);
                    elemCount++;
                }
                if (D20Count > 0)
                {
                    if (elemCount > 0)
                    {
                        retString += ", ";
                    }
                    retString += System.String.Format("x{0} d20", D20Count);
                    elemCount++;
                }

                if (elemCount == 0) return "None.";
                return retString;
            }
        }

        /// <summary>
        /// Rolls the dice from a PlayerRoll Dicemanager.
        /// Sums up all the faces and checks if the sum hit the target.
        /// If so, increases the target.
        /// </summary>
        public void rollDiceShowSum()
        {
            //Checks whether DiceManager has dice
            if (PlayerRoll.isEmpty())
            {
                eventMsg = "Select dice before rolling.";
                return;
            }
            tekstas = "";
            diceSum = 0;

            //Deals with each tier of dice in order
            for(int i=0; i < PlayerRoll.D4Count; i++)
            {
                int roll = rollDice(4);
                diceSum += roll;
                string rollText = roll.ToString();
                tekstas = tekstas + rollText + " ";
            }
            for (int i = 0; i < PlayerRoll.D6Count; i++)
            {
                int roll = rollDice(6);
                diceSum += roll;
                string rollText = roll.ToString();
                tekstas = tekstas + rollText + " ";
            }
            for (int i = 0; i < PlayerRoll.D8Count; i++)
            {
                int roll = rollDice(8);
                diceSum += roll;
                string rollText = roll.ToString();
                tekstas = tekstas + rollText + " ";
            }
            for (int i = 0; i < PlayerRoll.D10Count; i++)
            {
                int roll = rollDice(10);
                diceSum += roll;
                string rollText = roll.ToString();
                tekstas = tekstas + rollText + " ";
            }
            for (int i = 0; i < PlayerRoll.D12Count; i++)
            {
                int roll = rollDice(12);
                diceSum += roll;
                string rollText = roll.ToString();
                tekstas = tekstas + rollText + " ";
            }
            for (int i = 0; i < PlayerRoll.D20Count; i++)
            {
                int roll = rollDice(20);
                diceSum += roll;
                string rollText = roll.ToString();
                tekstas = tekstas + rollText + " ";
            }

            //Checks if dicesum hit the target
            if (diceSum == rollTarget)
            {
                resultDisplayString = System.String.Format("Success! Rolled {0}. Increasing target...", rollTarget);
                rollTarget++;
                eventMsg = $"Rolled dice. Dice sum: {diceSum}. Target hit.";
            }
            else
            {
                resultDisplayString = System.String.Format("You did not hit the target of {0}. Try again.", rollTarget);
                eventMsg = $"Rolled dice. Dice sum: {diceSum}. Target missed.";
            }

            StateHasChanged();
        }
        
        /// <summary>
        /// Rolls a n-sided dice.
        /// </summary>
        /// <param name="diceSize">Sides on the dice</param>
        /// <returns>Value of rolled dice</returns>
        public int rollDice(int diceSize)
        {
            Random rand = new Random();
            return rand.Next(1, diceSize+1);
        }

        /// <summary>
        /// Adds new player to Players list.
        /// </summary>
        public void addPlayer()
        {
            //Checks if count doesnt exceed max players
            if (Players.Count >= maxPlayers)
            {
                eventMsg = $"Already at max amount of players ({maxPlayers}).";
                return;
            }

            Players.Add(new Player("mostghoste", 0));
            eventMsg = "Added new player.";
        }

        public void removePlayer()
        {
            if (Players.Count > 0)
            {
                Players.Remove(Players.Last());
                eventMsg = "Removed player.";
            }
            else
            {
                eventMsg = "Cannot remove player, player list is empty.";
            }
        }

        /// <summary>
        /// Starts the game.
        /// </summary>
        public void startGame()
        {
            gameHasStarted = true;
            eventMsg = "Started game.";
        }

        /// <summary>
        /// Resets the game and most of the values.
        /// </summary>
        public void resetGame()
        {
            gameHasStarted = false;
            PlayerRoll = new DiceManager();
            tekstas = "none yet";
            resultDisplayString = "Make a roll!";
            rollTarget = 1;
            diceSum = 0;
            DicePool = BaseDicePool;
            eventMsg = "Reset game.";
        }

        /// <summary>
        /// Adds dice to the PlayerRoll object.
        /// </summary>
        /// <param name="diceSides"></param>
        public void addValue(int diceSides)
        {
            switch(diceSides)
            {
                case 4:
                    if (PlayerRoll.D4Count < DicePool.D4Count)
                    {
                        PlayerRoll.addD4();
                        eventMsg = "Added d4.";
                    }
                    else
                    {
                        eventMsg = "Cannot add d4, already using all available dice.";
                    }
                    break;
                case 6:
                    if (PlayerRoll.D6Count < DicePool.D6Count)
                    {
                        PlayerRoll.addD6();
                        eventMsg = "Added d6.";
                    }
                    else
                    {
                        eventMsg = "Cannot add d6, already using all available dice.";
                    }
                    break;
                case 8:
                    if (PlayerRoll.D8Count < DicePool.D8Count)
                    {
                        PlayerRoll.addD8();
                        eventMsg = "Added d8.";
                    }
                    else
                    {
                        eventMsg = "Cannot add d8, already using all available dice.";
                    }
                    break;
                case 10:
                    if (PlayerRoll.D10Count < DicePool.D10Count)
                    {
                        PlayerRoll.addD10();
                        eventMsg = "Added d10.";
                    }
                    else
                    {
                        eventMsg = "Cannot add d10, already using all available dice.";
                    }
                    break;
                case 12:
                    if (PlayerRoll.D12Count < DicePool.D12Count)
                    {
                        PlayerRoll.addD12();
                        eventMsg = "Added d12.";
                    }
                    else
                    {
                        eventMsg = "Cannot add d12, already using all available dice.";
                    }
                    break;
                case 20:
                    if (PlayerRoll.D20Count < DicePool.D20Count)
                    {
                        PlayerRoll.addD20();
                        eventMsg = "Added d20.";
                    }
                    else
                    {
                        eventMsg = "Cannot add d20, already using all available dice.";
                    }
                    break;
                default:
                    return;
            }
        }
        /// <summary>
        /// Removes dice from the PlayerRoll object.
        /// </summary>
        /// <param name="diceSides"></param>
        public void removeValue(int diceSides)
        {
            switch (diceSides)
            {
                case 4:
                    if (PlayerRoll.D4Count > 0)
                    {
                        PlayerRoll.removeD4();
                        eventMsg = "Removed d4.";
                    }
                    else
                    {
                        eventMsg = "Cannot remove d4, not enough dice.";
                    }
                    break;
                case 6:
                    if (PlayerRoll.D6Count > 0)
                    {
                        PlayerRoll.removeD6();
                        eventMsg = "Removed d6.";
                    }
                    else
                    {
                        eventMsg = "Cannot remove d6, not enough dice.";
                    }
                    break;
                case 8:
                    if (PlayerRoll.D8Count > 0)
                    {
                        PlayerRoll.removeD8();
                        eventMsg = "Removed d8.";
                    }
                    else
                    {
                        eventMsg = "Cannot remove d8, not enough dice.";
                    }
                    break;
                case 10:
                    if (PlayerRoll.D10Count > 0)
                    {
                        PlayerRoll.removeD10();
                        eventMsg = "Removed d10.";
                    }
                    else
                    {
                        eventMsg = "Cannot remove d10, not enough dice.";
                    }
                    break;
                case 12:
                    if (PlayerRoll.D12Count > 0)
                    {
                        PlayerRoll.removeD12();
                        eventMsg = "Removed d12.";
                    }
                    else
                    {
                        eventMsg = "Cannot remove d12, not enough dice.";
                    }
                    break;
                case 20:
                    if (PlayerRoll.D20Count > 0)
                    {
                        PlayerRoll.removeD20();
                        eventMsg = "Removed d20.";
                    }
                    else
                    {
                        eventMsg = "Cannot remove d20, not enough dice.";
                    }
                    break;
                default:
                    break;
            }
            StateHasChanged();
        }
    }
}