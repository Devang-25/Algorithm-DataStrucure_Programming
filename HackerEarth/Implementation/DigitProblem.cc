#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    string X;
    int K;
    cin >> X >> K;

    //int newArr[X];
    //cout << sizeof(newArr) << endl;

    //int nums[10] = {0};
    
    for(int i = 0; i < K; i++) {
        
        int yoo = X[i]; 

        cout << yoo << endl;

        if(X[i] <= 9){
            
            //X[i] = 9;
            //cout << X[i] << endl;
        }
    }

    return 0;
}
