#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int key){
    if(low>high){
        return -1;
    }
    
    int mid=low+(high-low)/2;
    if(arr[mid]==key){
        return mid;
    }
            
    else if (arr[mid]>key){
            
        return binarySearch(arr,low,mid-1,key);
    }
    else{
            
        return binarySearch(arr,mid+1,high,key);
    }
    
    
}

void countCopies(int arr[],int size,int key ){
    int ind=binarySearch(arr,0,size-1,key);
    if (ind==-1) {
        
        cout<<"Key not found"<<endl;
    }
    
    int count=1;
    int low=ind-1;
    int high=ind+1;
    while (low>=0 && arr[low]==key){
        count++;
        low--;
    }
    while(high<size && arr[high]==key){
        count++;
        high++;
    }    
    cout<<count<<endl;

    
    
}

int main(){
    int t,arr[100]; 
    cin>>t;  //number of test cases
    for(int i=0;i<t;i++){
        int n,key;
        cin>>n;  //size of the array
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
       cin>>key;  //element to be searched
      
       countCopies(arr,n,key);
       
    }
}