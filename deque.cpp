#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);

    deque<int> dq2;
    dq2.push_back(10);

    // dq.push_front(10);
    // dq.push_back(10);

    // dq.pop_back()
    // dq.pop_front()

    // cout<<dq.size()<<'\n';

    // cout<<dq.front();
    // cout<<dq.back();

    // dq.clear();

    deque<int>:: iterator it;
    it = dq.begin();
    // dq.erase(it+2, it+5);

    // dq.insert(it+2, 3, 5);

    // swap(dq, dq2);
    

    for(int i=0;i<dq.size();i++) {
        cout<<dq[i]<<' ';
    }

    return 0;
}