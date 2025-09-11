#include<bits/stdc++.h>
#define ll long long
using namespace std;

int precedence(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    return -1;
}

int main(){

    string infix,postfix;

    cin>>infix;

    stack<char> s;

    for(int i=0;i<infix.length();i++){

        char c=infix[i];

        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
            postfix+=c;

        else if(c=='(')
            s.push(c);

        else if(c==')'){
            while(!s.empty()&&s.top()!='('){
                postfix+=s.top();
                s.pop();
            }
            s.pop();
        }

        else{
            while(!s.empty()&&precedence(s.top())>=precedence(c)){
                postfix+=s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while(!s.empty()){
        postfix+=s.top();
        s.pop();
    }

    cout<<postfix<<endl;

}
