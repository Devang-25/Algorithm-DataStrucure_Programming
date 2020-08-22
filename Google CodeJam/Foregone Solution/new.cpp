#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Parent {
    public:
    vector<vector<int> > tasks;
    int numTasks;
    char id;
    
    void assignTask(int S, int E) {
        if(0<=S && S<=E && E<=1440) {
            tasks.push_back({S, E});
            numTasks++;
        }
    }
    
    bool isAvailable(int S, int E) {
        if(numTasks==0) return true;
        else {
            for(int i=0; i<numTasks; i++) {
            if((S>=tasks[i][0] && S<tasks[i][1]) || (E>tasks[i][0] && E<=tasks[i][1]) || (S<=tasks[i][0] && E>=tasks[i][1])) return false;
            }
            return true;
        }
    }
    
    void printTasks() {
        if(numTasks==0) cout<<"empty vector"<<"\n";
        else {
            for(int i=0; i<numTasks; i++) {
                cout<<tasks[i][0]<<" "<<tasks[i][1]<<"\n";
            }
        }
    }
    
    Parent(char c) { numTasks = 0;
    id=c; }
    };
    
    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        String J;
        String C;
        
        cin >> J;
        cin >> C;
        
        Parent J(J);
        Parent C(C);
        
        J.printTasks();
        J.assignTask(100,200);
        J.assignTask(250,350);
        J.assignTask(350,400);
        J.printTasks();
        
    }