using static mostghosteweb.Classes.QuizUtils;
namespace mostghosteweb.Pages
{
    public partial class Quiz
    {
        bool displayText = true;
        string displayTextString = "";
        Scoring scoring = new Scoring(3);
        Question question;
        protected override void OnInitialized()
        {
            List<Answer> Answers = new List<Answer>();
            //Constructs new question for test
            List<int> temp = new List<int>();
            temp.Add(100);
            temp.Add(50);
            temp.Add(10);

            Answers.Add(new Answer("hate 'em", temp));

            temp = new List<int>();
            temp.Add(0);
            temp.Add(30);
            temp.Add(100);
            Answers.Add(new Answer("love 'em", temp));

            temp = new List<int>();
            temp.Add(5);
            temp.Add(100);
            temp.Add(0);
            Answers.Add(new Answer("What the hell are dogs?", temp));

            question = new Question("What do you think about dogs?", Answers);
            base.OnInitialized();
        }
        public void displayWinner()
        {
            displayTextString = scoring.ReturnBiggestScoreIndex().ToString();
        }
    }
}
