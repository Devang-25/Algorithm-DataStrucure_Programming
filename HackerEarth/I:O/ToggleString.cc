#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int i=0,j=0,h;
    char s[101];

    cin >> s;
    h = strlen(s);

    for(i = 0; i < h; i++){

        if(s[j] >= 97 && s[j] <= 122){
            //Uppercase
            s[j] = s[j] - 32;

        } else{
            //lowercase
            s[j] = s[j] + 32;
            j++;
        }
    }
    
    cout << s << endl;

    return 0;
}