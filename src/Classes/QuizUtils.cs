namespace mostghosteweb.Classes
{
    public class QuizUtils
    {
        public class Scoring
        {
            List<int> scores;
            public Scoring(int numberOfDifferentOutcomes)
            {
                scores = new List<int>();
                for (int i = 0; i < numberOfDifferentOutcomes; i++)
                {
                    scores.Add(0);
                }
            }
            public int ReturnScoreOfIndex(int index)
            {
                return scores[index];
            }

            public void SetScoreAtIndex(int index, int score)
            {
                scores[index] = score;
            }

            public void AddScoreToIndex(int index, int score)
            {
                scores[index] += score;
            }

            public int GetAmtOfScores()
            {
                return scores.Count;
            }
            public int ReturnBiggestScoreIndex()
            {
                int ind = -1;
                int maxScore = -1;
                for (int i = 0; i < scores.Count; i++)
                {
                    if (scores[i] > maxScore)
                    {
                        ind = i;
                        maxScore = scores[i];
                    }
                }
                return ind;
            }
        }
        public class Question
        {
            public string question;
            public List<Answer> answers;
            public Question()
            {
                question = null;
                answers = new List<Answer>();
            }
            public Question(string question, List<Answer> answers)
            {
                this.question = question;
                this.answers = answers;
            }
        }
        public class Answer
        {
            public string answer;
            public List<int> pointsForEachIndex;

            public Answer(string answer, List<int> pointsForEachIndex)
            {
                this.answer = answer;
                this.pointsForEachIndex = pointsForEachIndex;
            }
        }
    }
}
