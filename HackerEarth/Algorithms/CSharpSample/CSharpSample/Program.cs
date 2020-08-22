using System;

namespace CSharpSample
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");

            Array arr = new Array[1, 2, 3];

            Array arr2 = new Array[4,5, 6];

            for (int i = 0; i < 3; i++) {

                Array arr3 = new Array[3];

                arr3[0] = 1;

            }

        }
    }
}
