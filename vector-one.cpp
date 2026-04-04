#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // vector declaration
    vector<int> vec;

    // 2d vector declaration
    vector<vector<int>> a(5, vector<int>(5));

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            a[i][j] = 10;
        }
    }

    // for(int i=0;i<5;i++) {
    //     for(int j=0;j<5;j++) {
    //         cout<<a[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }

    // push back
    vec.push_back(5);
    vec.push_back(10);
    vec.push_back(15);
    vec.push_back(20);

    // cout<<vec.front()<<'\n';
    // cout<<vec.empty()<<'\n';
    // vec.pop_back()
    // vec.erase(vec.begin(), vec.begin()+1);

    vec.erase(vec.begin()+1);


    for(int x:vec) cout<<x<<' ';

    return 0;
}