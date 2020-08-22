#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    string S;
    cin >> S;

    int frequency[10] = {0};
    
    for(int i = 0 ; i < S.length(); i++) {
        frequency[S[i] - '0']++;
    }

    for(int i = 0; i < 10; i++){
        cout << i << " " << frequency[i] << endl;
    }

    return 0;
}
