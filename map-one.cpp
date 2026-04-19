#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;

    mp.insert({0, 10});
    mp.insert({1, 20});
    mp.insert({2, 30});

    // cout<<mp[0]<<' '<<mp.at(0)<<'\n';

    // mp.clear();

    // cout<<mp.empty()<<'\n';

    for(auto it:mp) {
        cout<<it.first<<' '<<it.second<<'\n';
    }


    return 0;
}