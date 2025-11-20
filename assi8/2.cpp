#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int v) { data = v; left = right = NULL; }
};

Node* insertNode(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->data) root->left = insertNode(root->left, key);
    else root->right = insertNode(root->right, key);
    return root;
}

Node* searchRec(Node* root, int key) {
    if (!root || root->data == key) return root;
    if (key < root->data) return searchRec(root->left, key);
    return searchRec(root->right, key);
}

Node* searchNonRec(Node* root, int key) {
    while (root) {
        if (root->data == key) return root;
        if (key < root->data) root = root->left;
        else root = root->right;
    }
    return NULL;
}

Node* findMin(Node* root) {
    while (root && root->left) root = root->left;
    return root;
}

Node* findMax(Node* root) {
    while (root && root->right) root = root->right;
    return root;
}

Node* inorderSuccessor(Node* root, Node* x) {
    if (x->right) return findMin(x->right);
    Node* succ = NULL;
    while (root) {
        if (x->data < root->data) {
            succ = root;
            root = root->left;
        } else if (x->data > root->data) {
            root = root->right;
        } else break;
    }
    return succ;
}

Node* inorderPredecessor(Node* root, Node* x) {
    if (x->left) return findMax(x->left);
    Node* pred = NULL;
    while (root) {
        if (x->data > root->data) {
            pred = root;
            root = root->right;
        } else if (x->data < root->data) {
            root = root->left;
        } else break;
    }
    return pred;
}

int main() {
    Node* root = NULL;
    vector<int> a = {20, 8, 22, 4, 12, 10, 14};
    for (int x : a) root = insertNode(root, x);

    Node* r1 = searchRec(root, 10);
    Node* r2 = searchNonRec(root, 14);

    Node* mn = findMin(root);
    Node* mx = findMax(root);

    Node* x = searchRec(root, 12);
    Node* succ = inorderSuccessor(root, x);
    Node* pred = inorderPredecessor(root, x);

    cout << "Search Rec 10: " << (r1 ? r1->data : -1) << endl;
    cout << "Search Non-Rec 14: " << (r2 ? r2->data : -1) << endl;
    cout << "Min: " << mn->data << endl;
    cout << "Max: " << mx->data << endl;
    cout << "Successor of 12: " << (succ ? succ->data : -1) << endl;
    cout << "Predecessor of 12: " << (pred ? pred->data : -1) << endl;
}
