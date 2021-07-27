#include<iostream>
using namespace std;

int sumOfIndices(int arr[],int size){
    for(int i=1;i<=size;i++){
        for(int j=i+1;j<=size;j++){
            for(int k=j+1;k<=size;k++){
                if(arr[i]+arr[j]==arr[k]){
                    return  i;
                    return j;
                    return k;
                }
            }
        }
    }
    return -1;
}

int main(){
    int t,n;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int res=sumOfIndices(arr,n);
        if(res>0){
            cout<<res<<endl;
        }
        else{
            cout<<"No sequence found"<<endl;
        }
        
    }
}