#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q1, q2;
    int ch;
    while (cin >> ch) {
        if (ch == 1) {
            int x; cin >> x;
            q2.push(x);
            while (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }
            swap(q1, q2);
        } 
        else if (ch == 2) {
            if (q1.empty()) cout << "Stack is Empty\n";
            else q1.pop();
        } 
        else if (ch == 3) {
            if (q1.empty()) cout << "Stack is Empty\n";
            else cout << q1.front() << "\n";
        } 
        else if (ch == 4) {
            if (q1.empty()) cout << "Stack is Empty\n";
            else {
                queue<int> temp = q1;
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
