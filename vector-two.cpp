#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);

    // v.insert(v.begin(), 20);
    // v.insert(v.begin()+3, 3, 10);

    // swap two vector
    // swap(a, v);

    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());

    // iterator
    vector<int>::iterator it;
    // it = v.begin()+2;
    // cout<<*it<<'\n';

    for(it=v.begin(); it!=v.end(); it++) {
        cout<<*it<<' ';
    }

    // for(int i=0;i<v.size();i++) cout<<v[i]<<' ';
    // cout<<'\n';

    return 0;
}