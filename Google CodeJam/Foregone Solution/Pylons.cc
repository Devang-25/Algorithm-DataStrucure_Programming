#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <cassert>

using namespace std;
using ll = long long;
using pll = pair<ll ,ll>;

vector <pll> path(const vector<vector<ll>>& G){
    vector<pll> A(G.size() * G[0].size(), make_pair(0,0));
    for(ll r = 0; r < G.size(); r++){
        for(ll c = 0; c<G[r].size(); c++){
            
            A[G[r][c]] = make_pair(r,c);
        }
    }
    return A;
}

bool OK(const vector<pll>& P, ll R, ll C){
    set<pll> PS;
    for(ll i = 0; i < P.size(); i++){
        PS.insert(P[i]);
        if(!(0<=P[i].first && P[i].first < R)){ return false; }
        if(!(0<=P[i].second && P[i].second < C)){ return false; }
    }
    if(PS.size() != R * C){ return false; }
    for(ll i = 0; i < P.size(); i++ ){
        if(P[i].first == P[i+1].first ){ return false; }
        if(P[i].second == P[i+1].second ){ return false; }

        if(P[i].first + P[i].second == P[i+1].first + P[i+1].second ){ return false; }
        if(P[i].first - P[i].second == P[i+1].first - P[i+1].second ){ return false; }  
    }
    return true;
}

vector<vector<ll>> mk(int dir, ll R, ll C){
    vector<vector<ll>> G(R, vector<ll>(C, 0));
    ll t = 0;
    for(ll r = 0; r < R; r++ ){
        for(ll c = 0; c < C; c++ ){
            G[(r * (R+dir) + 2 * c) %R][c] = t;
            t++;
        }
    }
    return G;
}

bool is_solvable(ll R, ll C){
    if(C > R){ return is_solvable(C, R);}
    for(ll step = 1; step <= R-1; step++){
        vector<vector<ll>> G = mk(step, R, C);
        if(OK(path(G), R, C)){
            return true;
        }
    }
    return false;
}

vector<vector<ll>> solve(ll R, ll C){
    if(C > R){
        auto path = solve(C, R);
        vector<pll> A;
        for(auto& rc : path){
            A.push_back(make_pair(rc.second, rc.first));
        }
        return A;
    } for(ll step = 1; step <= R-1; step++){
        vector<vector<ll>> G = mk(step, R, C);
        if(OK(path(G), R, C)){
            return path(G);
        }
    }
    assert(false);
}

void test(){
    for(ll R = 1; R <= 20; R++){
        for(ll C = 1; C <= 20; C++){
            if(!is_solvable(R, C)){
                cout << "BAD R =" << R << " C=" << C << endl;
            }
        }
    }
}

int main(){
ll T;
cin >> T;
for(ll cas = 1; cas <= T; cas++){
    ll R, C;
    cin >> R >> C;
    if(!is_solvable(R,C)){
        cout << "Case #" << cas << ": IMPOSSIBLE" << endl;
    } else {
        auto path = solve(R, C);
        cout << "Case #" << cas << ": POSSIBLE" << endl;
        for(auto& rc : path){
            cout << (rc.first+1) << " " << (rc.second + 1) << endl;
        }
    }
}
}
