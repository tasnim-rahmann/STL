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

    set<int> st1;
    st1 = st;

    

    for(auto it:st1) {
        cout<<it<<" ";
    }
    cout<<'\n';

    // auto it = st.lower_bound(3);
    // auto it = st.upper_bound(3);
    // cout<<*it<<'\n';

    return 0;
}