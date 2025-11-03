#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, temp;
    while (cin >> temp) s += temp;

    vector<int> freq(26, 0);
    queue<char> q;

    for (char c : s) {
        freq[c - 'a']++;
        q.push(c);
        while (!q.empty() && freq[q.front() - 'a'] > 1) q.pop();
        if (q.empty()) cout << "-1 ";
        else cout << q.front() << " ";
    }
    cout << "\n";

    return 0;
}
