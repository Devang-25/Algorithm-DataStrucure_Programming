#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ll = long long;

int main(){
    
    int T;
    cin >> T;
    
    for(ll tc = 1; tc <= T; tc++){

        int N;
        cin >> N;
        int arr[N][N];

        for(int i = 0; i < N; i++) {
          for(int j = 0; j < N; ++j) {
            cin >> arr[i][j];
            }
        }

        int trace = 0;
        for (int i = 0; i < N; i++) {
            trace += arr[i][i];
            
        }

        int r = 0; // number of rows with repeated elements
      for (int row = 0; row < N; row++) {
        std::set<int> elements; // set of unique elements
        for (int col = 0; col < N; col++) {
          if (elements.count(arr[row][col]) > 0) { // whether set already has this element 
            r++;
            break;
          }
          elements.insert(arr[row][col]); // add to set
        }
      }

      int c = 0; // number of rows with repeated elements
      for (int col = 0; col < N; col++) {
        std::set<int> elements; // set of unique elements
        for (int row = 0; row < N; row++) {
          if (elements.count(arr[row][col]) > 0) { // whether set already has this element 
            c++;
            break;
          }
          elements.insert(arr[row][col]); // add to set
        }
      }
      
      cout << "Case #" << tc << ": " << trace << " " << r << " " << c << endl;
    }
}