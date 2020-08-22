#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m, g;

    cin >> n >> m >> g;

    int t[n], b[m];

    int i, j;

    for(i = 0; i < n; i++){ cin >> t[i];}
    for(i = 0; i < m; i++){ cin >> b[i];}

    vector<int> v;

    for(i = 1; i < n; i++){
        v.push_back(t[i]- t[i - 1]);
    }

    sort(v.begin(), v.end());
    sort(b, b+m);

    int idx=-1;
     i = v.size() - 1;

    for(j=m-1;j>=0;j--){
        
        if(v[i]>=b[j]){
            idx=j;
            break;
        }
    }

    cout << idx + 1 << "\n";
    return 0;

}