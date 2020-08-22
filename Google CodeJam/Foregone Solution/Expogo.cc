#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    
    int testcase;

    cin >> testcase;

    for(int i = 0; i < testcase; i++){

        int X, Y;

        cin >> X >> Y;

        int startPoint[0][0];
        int goalPoint[X][Y];

        for(int i = 0; i < X; i++){
            if(startPoint[i] == goalPoint[X]){
                    cout << "start point matches goal point" << endl;
                } else {
                    cout << "start point doesnt matches goal point" << endl;
                }
        }

        for(int j = 0; j < Y; j++){
                if(startPoint[j] == goalPoint[Y]){
                    cout << "start point matches goal point" << endl;
                } else {
                    cout << "start point doesnt matches goal point" << endl;
                }
            }
    }

    return 0;
}