#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    // ms.insert(2);
    // ms.insert(2);
    ms.insert(3);
    ms.insert(3);

    auto it = ms.lower_bound(2);
    cout<<*it<<'\n';


    // for(int x:ms) {
    //     cout<<x<<' ';
    // }

    return 0;
}