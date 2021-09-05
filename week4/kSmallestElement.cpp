#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;  //number of test cases
    while(t--){
        int n,k;
        cin>>n;  //size of the array
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        set<int> s(arr,arr+n);
        set<int>:: iterator i=s.begin();
        advance(i,k-1);
        cout<<*i<<endl;
    }
}