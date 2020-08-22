using System;

namespace Morse
{
    class Program
    {
        static void Main(string[] args)
        {

            //string[] letters = { " ", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "1", "2", "3", "4", "5", "6", "7", "8", "9", '0' };
            char[] letters = {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
            string[] morseLetters = { "    ", ". ---", "--- ...", "--- . --- .", "--- ..", ".", ".. --- .", "--- --- .", "....", "..", ". --- --- ---", "--- . ---", ". --- ..", "--- ---", "--- .", "--- --- ---", ". --- --- .", "--- --- . ---", ". --- .", "...", "-", ".. ---", "... ---", ". --- ---", "--- .. ---", "--- . --- ---", "--- --- ..", ". --- --- --- ---", ".. --- --- ---", "... --- ---", ".... ---", ".....", "--- ....", "--- --- ...", "--- --- --- ..", "--- --- --- --- .", "--- --- --- --- ---" };
            string textToChange = "";
            string newText = "";

            Console.WriteLine("Enter text you want to change to Morse code");

            textToChange = Console.ReadLine();
            textToChange = textToChange.ToLower();

            for (int i = 0; i < textToChange.Length; i++)
            {
                for (short j = 0; j < 36; j++)
                {
                    if (textToChange[i] == letters[j])
                    {
                        newText += morseLetters[j];
                        newText += "   ";
                        break;
                    }
                }
            }

            for (int i = 0; i < textToChange.Length; i++)
            {
                for (short k = 0; k < morseLetters.Length; k++)
                {
                    if (textToChange[i].ToString() == morseLetters[k])
                    {
                        newText += letters[k];
                        //newText += "   ";
                        break;
                    }

                }
            }
            Console.WriteLine("Text in Morse Code");
            Console.WriteLine(newText);
            //Console.ReadKey();

        }
    }
}
