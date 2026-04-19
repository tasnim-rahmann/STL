#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;

    mp.insert({0, 10});
    mp.insert({1, 20});
    mp.insert({2, 30});

    // mp.erase(1);
    // cout<<mp.count(0)<<'\n';

    // if(mp.find(1)!=mp.end()) cout<<"YES\n";
    // mp.lower_bound(key)
    // mp.upper_bound(key)

    // swap(mp1, mp2);

    for(auto it:mp) {
        cout<<it.first<<' '<<it.second<<'\n';
    }


    return 0;
}