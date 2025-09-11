#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define MAX 100

class Stack{
    int arr[MAX];
    int top;
public:
    Stack(){top=-1;}

    void push(int x){
        if(top>=MAX-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top==MAX-1;
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    Stack s;

    int choice,val;

    while(true){

        cout<<"1.Push 2.Pop 3.isEmpty 4.isFull 5.Peek 6.Display 7.Exit"<<endl;

        cin>>choice;

        switch(choice){
            case 1:
                cin>>val;
                s.push(val);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                cout<<s.isEmpty()<<endl;
                break;

            case 4:
                cout<<s.isFull()<<endl;
                break;

            case 5:
                cout<<s.peek()<<endl;
                break;

            case 6:
                s.display();
                break;

            case 7:
                exit(0);
        }
    }

}
