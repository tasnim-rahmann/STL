#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // list
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    // cout<<li.front()<<'\n';
    // cout<<li.back()<<'\n';

    // li.pop_back();
    // li.pop_front();

    // cout<<li.size()<<'\n';
    // li.clear(); // clear the list

    // list<int>:: iterator it;
    // for(it=li.begin(); it!=li.end(); it++) {
    //     cout<<*it<<' ';
    // }

    // insert function
    // list<int>:: iterator it;
    // it = li.begin();
    // advance(it, 2);

    // li.insert(it, 2, 50);

    for(auto it:li) {
        cout<<it<<' ';
    }

    return 0;
}