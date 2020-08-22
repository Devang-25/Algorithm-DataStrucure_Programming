using System;
using System.Net.Http;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Collections.Generic;

namespace StarWarsCelebration
{
    class Program
    {
        static public int Run(string character)
        {
            //
            // Write your code below; return type and arguments should be according to the problem's requirements
            //

            // Search for the person
            Task<string> task = characterSearch(character);
            var jsonResult = task.Result;
            JObject results = JsonConvert.DeserializeObject<JObject>(jsonResult);
            List<string> answer = results["results"].First["films"].ToObject<List<string>>();
            //Console.WriteLine(str.Count);
            Console.WriteLine(answer.Count);
            return answer.Count;

            //int numberOfFilms = 0;
            //return numberOfFilms;
        }

        public static async Task<string> characterSearch(string character)
        {
            var httpClient = new HttpClient();
            var response = await httpClient.GetAsync("https://challenges.hackajob.co/swapi/api/people/?search=" + character);
            var contents = await response.Content.ReadAsStringAsync();
            return contents;
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Run("Luke Skywalker");
        }
    }
}