#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution{
    public:
    
    string Run(int n){

        string n_in_roman_alphabet = ToRoman(n);//  to_string();
        return n_in_roman_alphabet;
    }

    string ToRoman(int number){
     
    if (number < 1) return std::string();
    if (number >= 1000) return std::sprintf("M{0}", ToRoman(number - 1000)); //string.Format("M{0}", ToRoman(number - 1000));
    if (number >= 900) return string.Format("CM{0}", ToRoman(number - 900));
    if (number >= 500) return string.Format("D{0}", ToRoman(number - 500));
    if (number >= 400) return string.Format("CD{0}", ToRoman(number - 400));
    if (number >= 100) return string.Format("C{0}", ToRoman(number - 100));
    if (number >= 90) return string.Format("XC{0}", ToRoman(number - 90));
    if (number >= 50) return string.Format("L{0}", ToRoman(number - 50));
    if (number >= 40) return string.Format("XL{0}", ToRoman(number - 40));
    if (number >= 10) return string.Format("X{0}", ToRoman(number - 10));
    if (number >= 9) return string.Format("IX{0}", ToRoman(number - 9));
    if (number >= 5) return string.Format("V{0}", ToRoman(number - 5));
    if (number >= 4) return string.Format("IV{0}", ToRoman(number - 4));
    if (number >= 1) return string.Format("I{0}", ToRoman(number - 1));
    throw new ArgumentOutOfRangeException("String doesn't match Roman numerals.");
    }
};

int main() {
    
    Solution sol;
    sol.Run(5);

}