#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    string expr;

    cin>>expr;

    stack<char> s;

    bool balanced=true;

    for(int i=0;i<expr.length();i++){

        if(expr[i]=='('||expr[i]=='{'||expr[i]=='[')
            s.push(expr[i]);

        else if(expr[i]==')'||expr[i]=='}'||expr[i]==']'){

            if(s.empty()){
                balanced=false;
                break;
            }

            char top=s.top();

            if((expr[i]==')'&&top=='(')||(expr[i]=='}'&&top=='{')||(expr[i]==']'&&top=='['))
                s.pop();
            else{
                balanced=false;
                break;
            }
        }
    }

    if(balanced&&s.empty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;

}
