#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    list<int> li = {10, 10, 30, 40, 50};
    list<int> li2 = {1, 2, 3, 4, 5};

    // list<int>:: iterator it, it2;
    // it = li.begin();
    // it2 = li.begin();
    // advance(it, 1);
    // advance(it2, 3);

    // li.erase(it, it2);

    // li.remove(10);
    // li.reverse();
    // li.sort();

    // li.unique();

    li.merge(li2);


    for(auto it:li) cout<<it<<' ';

    return 0;
}