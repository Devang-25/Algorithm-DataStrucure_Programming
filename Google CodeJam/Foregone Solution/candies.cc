#include <iostream>
#include <vector>

using namespace std;


vector<int> distributeCandies(int candies, int num_people) {
        //firstly i th person has 0 candies 
        vector<int> v(num_people ,0);
        int i = 0,n=1; //index and n number of candies
        while(candies >0){
          
          if(i+1 > num_people){ //get back to index 0
            i = 0;
          }
          if(candies < n){ //distributing last left candies to last person
              v[i]+=candies;
              break;
          }
          else v[i]+=n;
          
          candies-=n;
          n++;i++;
        }
        cout << v << endl;
        return v;
}

int main(){
    int candies, num_people;
    
    cin >> candies;
    cin >> num_people;

    distributeCandies(candies, num_people);
    
    return 0;
}