#include<bits/stdc++.h>
using namespace std;



int sum(int *arr,int size,int key){
   sort(arr, arr+size);
   int i=0,j=size-1;
   while(i<j){
       if((arr[i]+arr[j])==key) {
           cout<<arr[i]<<" "<<arr[j]<<endl;
           return 1;
        } 
        
        else if((arr[i]+arr[j])<key) i++;
        else j--;
        
    }
    return -1;
   
}

int main(){
    int t; 
    cin>>t;  //number of test cases
    for(int i=0;i<t;i++){
        int n,key;
        cin>>n;  //size of the array
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>key;
        if(sum(arr,n,key)==-1){
            cout<<"No such pair exist"<<endl;
        }
    }
}