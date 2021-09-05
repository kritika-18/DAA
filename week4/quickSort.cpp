#include<bits/stdc++.h>
using namespace std;

//int comparison=0,noOfSwaps=0;
int partition (int arr[], int low, int high) 
{ 
    int x=rand()%(high-low+1)+low;
    swap(arr[x],arr[high]);
    int pivot = arr[high]; 
    int i = (low - 1); 
    
    for (int j = low; j <= high - 1; j++) 
    { 
       
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(arr[i], arr[j]); 
            //noOfSwaps++;
            
            
        } 
        
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
    
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        
        int p = partition(arr, low, high); 
        quickSort(arr, low, p - 1); 
        quickSort(arr, p + 1, high); 
        
    } 
    
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
    //cout<<"Comparisons: "<<comparison<<endl;
    //cout<<"No of swaps: "<<noOfSwaps+1<<endl;
} 
  

int main(){
    int t;
    cin>>t;
    //comparison;
    //noOfSwaps;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        quickSort(arr,0,n-1);
        printArray(arr,n);
    }
    
}