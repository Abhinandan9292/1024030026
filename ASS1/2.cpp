#include<iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#define ll long long
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        set<ll> s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(auto x : s){
            cout<<x<<" ";
        }
        cout<<endl;
    }   
    return 0;
}
