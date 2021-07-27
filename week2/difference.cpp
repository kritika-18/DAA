#include<iostream>
using namespace std;

int difference(int arr[],int size,int key){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++)
            if(abs(arr[i]-arr[j])==key){
                count++;;
            }
        
    }
    return count;
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
        cout<<difference(arr,n,key);
        cout<<endl;
    }
}