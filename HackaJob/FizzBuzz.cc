#include <iostream>

using namespace std;

int main() {

    int N, M;

    cin >> N >> M;

    for(int i = N; i < M+1; i++){

        if((i % 3 == 0) && (i % 5 == 0)){
            cout << "FizzBuzz," << endl;

        } else if(i % 3 == 0){
            cout << "Fizz," << endl;

        } else if(i % 5 == 0){
            cout << "Buzz," << endl;

        } else {
            cout << i << "," << endl;
        }
    }
}