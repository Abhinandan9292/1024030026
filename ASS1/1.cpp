#include <iostream>
using namespace std;

int arr[100], n=0;

void create(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void display(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insert(){
    int pos,val;
    cin>>pos>>val;
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    n++;
}

void deleteElement(){
    int pos;
    cin>>pos;
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

void linearSearch(){
    int key,found=-1;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found=i;
            break;
        }
    }
    if(found!=-1){
        cout<<found<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main(){
    int choice;
    while(true){
        cin>>choice;
        if(choice==1){
            create();
        }
        else if(choice==2){
            display();
        }
        else if(choice==3){
            insert();
        }
        else if(choice==4){
            deleteElement();
        }
        else if(choice==5){
            linearSearch();
        }
        else if(choice==6){
            break;
        }
    }
    return 0;
}
