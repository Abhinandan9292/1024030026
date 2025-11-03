#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;
    int ch;
    while (cin >> ch) {
        if (ch == 1) {
            int x; cin >> x;
            int sz = q.size();
            q.push(x);
            for (int i = 0; i < sz; i++) {
                q.push(q.front());
                q.pop();
            }
        } 
        else if (ch == 2) {
            if (q.empty()) cout << "Stack is Empty\n";
            else q.pop();
        } 
        else if (ch == 3) {
            if (q.empty()) cout << "Stack is Empty\n";
            else cout << q.front() << "\n";
        } 
        else if (ch == 4) {
            if (q.empty()) cout << "Stack is Empty\n";
            else {
                queue<int> temp = q;
                while (!temp.empty()) {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << "\n";
            }
        } 
        else if (ch == 0) break;
    }

    return 0;
}
