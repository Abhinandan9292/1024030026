#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> q(n);
    int front = -1, rear = -1;

    while (true) {
        int ch;
        cin >> ch;

        if (ch == 1) {
            int x;
            cin >> x;
            if ((rear + 1) % n == front) {
                cout << "Queue is Full\n";
            } else {
                if (front == -1) front = 0;
                rear = (rear + 1) % n;
                q[rear] = x;
            }
        }

        else if (ch == 2) {
            if (front == -1) {
                cout << "Queue is Empty\n";
            } else {
                if (front == rear) {
                    front = rear = -1;
                } else {
                    front = (front + 1) % n;
                }
            }
        }

        else if (ch == 3) {
            if (front == -1) cout << "Queue is Empty\n";
            else cout << "Front: " << q[front] << "\n";
        }

        else if (ch == 4) {
            if (front == -1) cout << "Queue is Empty\n";
            else {
                int i = front;
                while (true) {
                    cout << q[i] << " ";
                    if (i == rear) break;
                    i = (i + 1) % n;
                }
                cout << "\n";
            }
        }

        else if (ch == 5) {
            if (front == -1) cout << "Queue is Empty\n";
            else cout << "Queue is Not Empty\n";
        }

        else if (ch == 6) {
            if ((rear + 1) % n == front) cout << "Queue is Full\n";
            else cout << "Queue is Not Full\n";
        }

        else if (ch == 0) break;
    }

    return 0;
}
