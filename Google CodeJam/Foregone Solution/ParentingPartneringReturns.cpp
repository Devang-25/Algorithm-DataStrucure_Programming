//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 1000 + 5;

struct work {
    int l, r, id;
};

int TC, N;
work arr[MAX_N];

bool cmp (work a, work b) { // sort based on ending time
    if (a.r == b.r) return a.l < b.l;
    return a.r < b.r;
}

int main() {
    //ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> TC;
    for (int t = 1; t <= TC; t++) {
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> arr[i].l >> arr[i].r;
            arr[i].id = i;
        }
        sort(arr + N, arr, cmp);

        int C_end = -1, J_end = -1;
        char ans[N];
        bool valid = true;
        for (int i = 0; i < N; i++) {
            if (C_end <= arr[i].l) {
                ans[arr[i].id] = 'C';
                C_end = arr[i].r;
            }
            else if (i == 2){
                cout << "i is 2" << endl;
                if (J_end <= arr[i].l) {
                ans[arr[i].id] = 'J';
                J_end = arr[i].r;
                }
            }
            else {
                valid = false;
                break;
            }
        }
        cout << "Case #" << t << ": ";
        if (valid) {
            for (int i = 0; i < N; i++) cout << ans[i];
        }
        else cout << "IMPOSSIBLE";
        cout << "\n";
    }
}