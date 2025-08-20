#include <iostream>
using namespace std;

void diagonal_matrix(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int val;
            cin>>val;
            if(i==j) arr[i]=val;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void tridiagonal_matrix(){
    int n;
    cin>>n;
    int arr[3*n-2];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int val;
            cin>>val;
            if(j==i-1) arr[i-1]=val;
            else if(j==i) arr[n-1+i]=val;
            else if(j==i+1) arr[2*n-1+i]=val;
        }
    }
    for(int i=0;i<3*n-2;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void lower_triangular_matrix(){
    int n;
    cin>>n;
    int arr[n*(n+1)/2];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int val;
            cin>>val;
            arr[k++]=val;
        }
        for(int j=i+1;j<n;j++){
            int temp;
            cin>>temp;
        }
    }
    for(int i=0;i<k;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void upper_triangular_matrix(){
    int n;
    cin>>n;
    int arr[n*(n+1)/2];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp;
            cin>>temp;
        }
        for(int j=i;j<n;j++){
            int val;
            cin>>val;
            arr[k++]=val;
        }
    }
    for(int i=0;i<k;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void symmetric_matrix(){
    int n;
    cin>>n;
    int arr[n*(n+1)/2];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int val;
            cin>>val;
            arr[k++]=val;
        }
        for(int j=i+1;j<n;j++){
            int temp;
            cin>>temp;
        }
    }
    for(int i=0;i<k;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int choice;
    cin>>choice;
    if(choice==1){diagonal_matrix();}
    else if(choice==2){tridiagonal_matrix();}
    else if(choice==3){lower_triangular_matrix();}
    else if(choice==4){upper_triangular_matrix();}
    else if(choice==5){symmetric_matrix();}
    return 0;
}
