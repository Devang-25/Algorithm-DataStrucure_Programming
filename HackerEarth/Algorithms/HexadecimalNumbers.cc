#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int tc, L, R, ans, gcd;

    cin >> tc;
    int arr[tc];
	
    for(int i = 0; i < tc; i++){
        
        cin >> L >> R;
        
        for(int j = L; j <= R; ++j){
            gcd += j;
            cout << "j is " << j << endl;
            cout << "gcd is " << gcd << endl;
            
            if(j % gcd == 0){//TO-DO: need to correct statement
            ans = j;
            cout << "ans is " << ans << endl;
            }
        }
    }

    if(__gcd(i,sum)>1){

    }
}
