#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int grids;
    string villages;

    cin >> grids;
    cin >> villages;

    int j;

    for(int i = 0; i < villages.size(); i++){
        
        /*
        if (villages[i] == '.'){
            
            char B = 'B';
            swap<char>(villages[i], B);
            cout << "reached" << endl;
        }*/
        
        for(int j=0;j<grids;j++){
            if(villages[j]=='.')
            villages[j]='B';
        }
        
        if(grids < 3){
            if(grids==1)
            cout << "YES" << endl << villages;
            else{
                if(villages[j]=='H' && villages[j+1]=='H')
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl<<villages<<endl;
                }

            //cout << "YES" << endl;

        } else {
            for(i=1;i<grids-1;i++){
                if(villages[i]=='H'){
                    if(villages[i-1]=='H' || villages[i+1]=='H'){
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(i==grids-1)
            cout<<"YES"<<endl<<villages<<endl;
            //cout << "NO" << endl;
        }
    }

    //cout << villages << endl;

    return 0;

}