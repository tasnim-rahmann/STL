#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multimap<int, int> mp;
    mp.insert({0, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});
    mp.insert({5, 50});

    for(auto it:mp) {
        cout<<it.first<<' '<<it.second<<'\n';
    }

    // same as map

    return 0;
}