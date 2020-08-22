#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    string X;
    int K, scannedDigits;
    cin >> X >> K;

    //int newArr[X];
    //cout << sizeof(newArr) << endl;

    //int nums[10] = {0};
    
    for(int i = 0; i < K; i++) {

        scannedDigits = X[i];
        
        if(scannedDigits <= 9){
            
            scannedDigits = 9;

        } else {
            
            break;
        }
    }

    cout << scannedDigits << endl;

    return 0;
}
