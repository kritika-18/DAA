#include<iostream>
#include<math.h>
using namespace std;

int count=0;
int jumpSearch(int arr[],int size,int key){
    count;
    int steps=sqrt(size);
    int prev=0;
    while(arr[min(steps,size)-1]<key){
        count++;
        prev=steps;
        steps+=sqrt(size);
        if(prev>=size) return -1;
    }
    while(arr[prev]<key){
        count++;
        prev++;
        if(prev==min(steps,size)) return -1;
    }
    if (arr[prev]==key) {
        count++;
        return prev;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    count;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int key;
        cin>>key;
        int res=jumpSearch(arr,n,key);
        if(res>0){
            cout<<"Present "<<count<<endl;
            count=0;
        }
        else{
            cout<<"Not present "<<count<<endl;
            count=0;
        }
    }
}