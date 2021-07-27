#include<iostream>
using namespace std;

int count=0;
int linearSearch(int arr[],int size,int key){
    count;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            count++;
           return i;
        }
        
        count++;
         
    }
    return -1;
}

int main(){
    int t;
    cin>>t; //number of test cases
    count;
    while(t--){
        int arr[100];
        int n;
        cin>>n;  //number of elements in array
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int element; 
        cin>>element; //element which is to be searched
        
        
        int result=linearSearch(arr,n,element);
        if(result>0){
            cout<<"Present "<<count<<endl;
            count=0;
        }
        else{
            cout<<"Not present "<<count<<endl;
            count=0;
        }
        
    }
}