#include <iostream>

using namespace std;

int main() {
	int N, M, index;
	int ans;
	// Reading input from STDIN
	cin >> N >> M;	
	int arr[N];

	for(int i = 0; i < N; i++){
		cin >> index;
		arr[i] = index;

		if(arr[i] == M){
			ans = i + 1;
		}
	}
	cout << ans << endl;
}
