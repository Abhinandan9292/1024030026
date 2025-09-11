#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    string str;

    cin>>str;

    stack<char> s;

    for(int i=0;i<str.length();i++)
        s.push(str[i]);

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

    cout<<endl;

}
