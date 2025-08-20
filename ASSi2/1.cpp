#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int low=0, high=n-1, found=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            found=mid;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<found<<endl;
    return 0;
}
