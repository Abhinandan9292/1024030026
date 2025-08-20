#include <iostream>
using namespace std;

struct triplet{
    int row;
    int col;
    int val;
};

void transpose(){
    int r,c,n;
    cin>>r>>c>>n;
    triplet t[n];
    for(int i=0;i<n;i++){
        cin>>t[i].row>>t[i].col>>t[i].val;
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<n;j++){
            if(t[j].col==i){
                cout<<t[j].col<<" "<<t[j].row<<" "<<t[j].val<<endl;
            }
        }
    }
}

void addition(){
    int r1,c1,n1;
    cin>>r1>>c1>>n1;
    triplet a[n1];
    for(int i=0;i<n1;i++) cin>>a[i].row>>a[i].col>>a[i].val;

    int r2,c2,n2;
    cin>>r2>>c2>>n2;
    triplet b[n2];
    for(int i=0;i<n2;i++) cin>>b[i].row>>b[i].col>>b[i].val;

    int i=0,j=0;
    while(i<n1 && j<n2){
        if(a[i].row<b[j].row || (a[i].row==b[j].row && a[i].col<b[j].col)){
            cout<<a[i].row<<" "<<a[i].col<<" "<<a[i].val<<endl;
            i++;
        }
        else if(a[i].row>b[j].row || (a[i].row==b[j].row && a[i].col>b[j].col)){
            cout<<b[j].row<<" "<<b[j].col<<" "<<b[j].val<<endl;
            j++;
        }
        else{
            cout<<a[i].row<<" "<<a[i].col<<" "<<a[i].val+b[j].val<<endl;
            i++; j++;
        }
    }
    while(i<n1){cout<<a[i].row<<" "<<a[i].col<<" "<<a[i].val<<endl;i++;}
    while(j<n2){cout<<b[j].row<<" "<<b[j].col<<" "<<b[j].val<<endl;j++;}
}

void multiplication(){
    int r1,c1,n1;
    cin>>r1>>c1>>n1;
    triplet a[n1];
    for(int i=0;i<n1;i++) cin>>a[i].row>>a[i].col>>a[i].val;

    int r2,c2,n2;
    cin>>r2>>c2>>n2;
    triplet b[n2];
    for(int i=0;i<n2;i++) cin>>b[i].row>>b[i].col>>b[i].val;

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i].col==b[j].row){
                cout<<a[i].row<<" "<<b[j].col<<" "<<a[i].val*b[j].val<<endl;
            }
        }
    }
}

int main(){
    int choice;
    cin>>choice;
    if(choice==1){transpose();}
    else if(choice==2){addition();}
    else if(choice==3){multiplication();}
    return 0;
}
