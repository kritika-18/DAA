#include<bits/stdc++.h>
using namespace std;

//int comp=0,inv=0;
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
            //inv+=(mid-i);
            k++;
            j++;
        }
        //comp++;
    }
    while(i<=mid){
        a[k]=arr[i];
        i++;
        k++;
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
    //comp=0;
    int mid;
    if(low<high){
        mid=low+(high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
    
}


void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //cout<<"comparisons: "<<comp<<endl<<"inversions: "<<inv<<endl;
}

int main(){
    int t; 
    cin>>t;  //number of test cases
    //comp;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;  //size of the array
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
      
      
        mergeSort(arr,0,n-1);
        printArray(arr,n);
    }
}
