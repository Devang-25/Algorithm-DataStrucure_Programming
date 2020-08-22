#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    ll T;
    cin >> T;
    
    for(ll cas = 1; cas <= T; cas++){
        string n;
        cin >> n;
        
        string A(n.size(), ' ');
        string B(n.size(), ' ');
        bool have_B = false;
        
        for(ll i = 0; i < n.size(); i++){
            if(n[i] == '4'){
                A[i] = '3';
                B[i] = '1';
                have_B = true;
            } else {
                A[i] = n[i];
                if(have_B){
                    B[i] = '0';
                }
            }
        }
        cout << "Case #" << cas << ": " << A << " " << B << endl; 
    }
}