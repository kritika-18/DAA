#include<iostream>
using namespace std;

int count=0;
int binarySearch(int arr[],int x,int low,int high,int key){
    count;
    
    if(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            count++;
            return mid;
        }
        else if (arr[mid]>key){
            count++;
            return binarySearch(arr,x,low,mid-1,key);
        }
        else{
            count++;
            return binarySearch(arr,x,mid+1,high,key);
        }
    }
    else return -1;
    
}

int main(){
    int t; 
    cin>>t;  //number of test cases
    count;
    
    while(t--){
        int n,key;
        cin>>n;  //size of the array
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>key;  //element to be searched

        
       
        int result=binarySearch(arr,n,0,n-1,key);
        if(result>0){
            cout<<"Present "<<count<<endl;
            count=0;
        } 
        else{
            cout<<"Not Present "<<count<<endl; 
            count=0;
        }     
       
    }
}