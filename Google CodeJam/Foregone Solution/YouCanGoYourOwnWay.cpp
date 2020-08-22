#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    
    int testCase;
    cin >> testCase;
    
    for(ll tc = 1; tc <= testCase; tc++){
        ll N;
        cin >> N;
        
        string P;
        cin >> P;

        string A(P.size(), ' ');
        for(ll i = 0; i < P.size(); i++){
            A[i] = (P[i] == 'S' ? 'E' : 'S');
        }
        cout << "Case #" << tc << ": " << A << endl;
        
    }
}