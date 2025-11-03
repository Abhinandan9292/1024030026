#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;
    int x;
    while (cin >> x) q.push(x);

    int n = q.size();
    int half = n / 2;
    queue<int> first;
    for (int i = 0; i < half; i++) {
        first.push(q.front());
        q.pop();
    }

    vector<int> ans;
    while (!first.empty()) {
        ans.push_back(first.front());
        first.pop();
        ans.push_back(q.front());
        q.pop();
    }

    for (auto &i : ans) cout << i << " ";
    cout << "\n";

    return 0;
}
