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
    public partial class JackpotWheel
    {
        public bool enableText = false;
        public string dispString = "yo my g";
        List<string> results = new List<string>();

        public async void BeginSpin()
        {
            if (results.Count > 0)
            {
                results = new List<string> ();
            }
            Console.WriteLine("Picking random task");
            dynamic currElement;
            Random rand = new Random();
            dynamic taskData = await Http.GetFromJsonAsync<dynamic>("sample-data/RStasks.json");
            currElement = taskData!;
            JsonElement temp = new JsonElement();

            //Pick a category
            while (currElement.TryGetProperty("options", out temp) || currElement.TryGetProperty("range", out temp))
            {
                results.Add(currElement.GetProperty("question").ToString());
                if (currElement.TryGetProperty("options", out temp))
                {
                    currElement = currElement.GetProperty("options");
                    int lenOfArray = currElement.GetArrayLength();
                    currElement = currElement[rand.Next(lenOfArray)];
                    results.Add(currElement.GetProperty("answer").ToString());
                }
                else if (currElement.TryGetProperty("range", out temp))
                {
                    currElement = currElement.GetProperty("range");
                    int minValue = currElement.GetProperty("min").GetInt16();
                    int maxValue = currElement.GetProperty("max").GetInt16();
                    int numb = rand.Next(minValue, maxValue);
                    numb = ((int)(numb / 10)) * 10;
                    results.Add(numb.ToString());
                }
            }
            Console.WriteLine("Task sucessfully picked.");
            enableText = true;
            StateHasChanged();
        }
    }
}