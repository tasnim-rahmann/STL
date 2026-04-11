#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> st;
    // set<int, greater<int>> st;
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    st.insert(5);

    // cout<<st.size()<<'\n';
    // cout<<st.max_size()<<'\n';

    // st.clear();

    // set<int>:: iterator it;
    // it = st.begin();
    // advance(it, 2);
    // st.erase(it);

    // for(it=st.begin(); it!=st.end(); it++) {
    //     cout<<*it<<' ';
    // }

    // st.erase(2);

    // auto it = st.find(20);

    // if(it!=st.end()) cout<<"YES\n";
    // else cout<<"NO\n";

    for(auto it:st) {
        cout<<it<<" ";
    }

    return 0;
}