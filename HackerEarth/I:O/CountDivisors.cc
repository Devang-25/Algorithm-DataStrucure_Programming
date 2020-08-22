#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int l, r, k;
    int divisible = 0;

    cin >> l >> r >> k;

    for(int i = l; i <= r; i++){
        if (i % k == 0){
            divisible++;
        }
    }

    cout << divisible << endl;
    
    return 0;
}