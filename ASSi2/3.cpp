#include <iostream>
using namespace std;

void missingnumber_linear(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    int total=(n*(n+1))/2;
    cout<<total-sum<<endl;
}

void missingnumber_binary(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int low=0, high=n-2, missing=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==mid+1){
            low=mid+1;
        }
        else{
            missing=mid+1;
            high=mid-1;
        }
    }
    cout<<missing+1<<endl;
}

int main(){
    int choice;
    cin>>choice;
    if(choice==1){
        missingnumber_linear();
    }
    else if(choice==2){
        missingnumber_binary();
    }
    return 0;
}
