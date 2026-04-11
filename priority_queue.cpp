#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> q;
    // priority_queue<int, vector<int>, greater<int>> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);

    q.emplace(3);
    q.emplace(1);
    q.emplace(2);
    q.emplace(4);

    q.pop();

    while(!q.empty()) {
        cout<<q.top()<<' ';
        q.pop();
    }

    return 0;
}