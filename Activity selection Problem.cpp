#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v;

    for(int i = 0; i < n; i++){
        int start, nd;
        cin >> start >> nd;
        v.push_back({start, nd});
    }

    sort(v.begin(), v.end(), [&](vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    });

    int take = 1;
    int nd = v[0][1]; // finish time of first activity

    for(int i = 1; i < n; i++){
        if(v[i][0] >= nd){
            take++;
            nd = v[i][1];
        }
    }

    cout << take << "\n";
    return 0;
}
