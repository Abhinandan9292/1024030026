#include <iostream>
#include <vector>
using namespace std;

void reversearray(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void matrixmultiplication(){
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    int mat1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat1[i][j];
        }
    }
    cin>>r2>>c2;
    int mat2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>mat2[i][j];
        }
    }
    int result[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j]=0;
            for(int k=0;k<c1;k++){
                result[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transposematrix(){
    int r,c;
    cin>>r>>c;
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int choice;
    cin>>choice;
    if(choice==1){
        reversearray();
    }
    else if(choice==2){
        matrixmultiplication();
    }
    else if(choice==3){
        transposematrix();
    }
    return 0;
}
