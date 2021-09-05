#include<bits/stdc++.h>
using namespace std;


void findCommonElements(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]) i++;
        else if(arr1[i]>arr2[j]) j++;
        else{
            cout<<arr1[i]<<", ";
            i++;
            j++;
        }
    }
    

}

int main(){
    int m,n;
    cin>>m;  //size of first array
    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cin>>n;  //size of second array
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    findCommonElements(arr1,arr2,m,n);
    

}