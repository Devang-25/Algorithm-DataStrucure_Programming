using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

namespace FootballSession
{
    class Program
    {
        public int userID { get; set; }

        static void Main(string[] args)
        {
            Run("Arsenal");
        }

        static public int Run(string teamKey)
        {
            //
            // Write your code below; return type and arguments should be according to the problem's requirements
            //
            int goals = 0;

            Task<string> result = GetResponseString();
            var jsonResult = result.Result;

            var data = JsonConvert.DeserializeObject<teamList>(jsonResult);
            //Console.WriteLine(dynamicResultObject.count);
            //var found = data.teams.FindAll(x => x == teamKey);
            var found = data.teams.Where(key => key.name == teamKey);

            foreach (var score in found) {
                goals = score.key
             }
            Console.WriteLine(found);



            return goals;
        }

        static public async Task<string> GetResponseString()
        {
            var httpClient = new HttpClient();

            var response = await httpClient.GetAsync("https://raw.githubusercontent.com/openfootball/football.json/198f60ce50ac427dadc16a35ef4ad65edcea3125/2014-15/en.1.json");
            var contents = await response.Content.ReadAsStringAsync();

            return contents;
        }
    }
    public class Teams
    {
        public string key { get; set; }
        public string name { get; set; }
        public string code { get; set; }
    }

    public class teamList
    {
        public List<Teams> teams { get; set; }
    }
}

