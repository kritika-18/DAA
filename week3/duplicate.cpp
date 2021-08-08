#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int mid, int low, int high){
    int i,j,k,a[100];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            a[k]=arr[i];
            i++;
            k++;
        }
        else{
            a[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        a[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high){
        a[k]=arr[j];
        k++;
        j++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=a[i];
    }
}

void mergeSort(int arr[], int low, int high){
    int mid;
    if(low<high){
        mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}

void duplicates(int arr[],int size){
    mergeSort(arr,0,size-1);
    
    int flag=0;
    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]) flag++;
    }
    
    if(flag==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    int t,arr[100]; 
    cin>>t;  //number of test cases
    for(int i=0;i<t;i++){
        int n;
        cin>>n;  //size of the array
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
      
      duplicates(arr,n);
    }
}