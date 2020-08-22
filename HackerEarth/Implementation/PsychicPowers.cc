#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    string binary;
    cin >> binary;

    int Acounter = 0;
    int Bcounter = 0;
    
    for(int i = 0 ; i < binary.length(); i++) {
        
        if(binary[i] == '0'){
            Acounter++;
        } else if (binary[i] == '1') {
            Bcounter++;
        } else {
            Acounter = 0;
            Bcounter = 0;
        }
    }
    
    //cout << "B counter is " << Bcounter << endl;
    //cout << "A counter is " << Acounter << endl;
    if(Acounter == 6 || Bcounter == 6){
        cout << "Sorry, sorry!" << endl;
    } else {
        cout << "Good luck!" << endl;
    }

    return 0;
}
