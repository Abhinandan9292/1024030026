#include <iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<r;i++){
        int rowsum=0;
        for(int j=0;j<c;j++){
            rowsum+=arr[i][j];
        }
        cout<<rowsum<<" ";
    }
    cout<<endl;

    for(int j=0;j<c;j++){
        int colsum=0;
        for(int i=0;i<r;i++){
            colsum+=arr[i][j];
        }
        cout<<colsum<<" ";
    }
    cout<<endl;

    return 0;
}
