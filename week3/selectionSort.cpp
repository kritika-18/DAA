#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selectionSort(int arr[], int n)
{
    int i, j, minIndex,swap=0,comp=0;
    for (i = 0; i < n-1; i++)
    {
        minIndex = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[minIndex])
                minIndex = j;
 
        
            comp++;
        }
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
        
        swap++;
    }
    printArray(arr,n);
    
    cout<<"Comparisons: "<<comp<<endl;
    cout<<"Swaps: "<<swap<<endl;
}

int main()
{
    int t;
    cin>>t;  //number of test cases
    while(t--){
        int n;
        cin>>n;   //size of the array
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        selectionSort(arr, n);
      
    }
  
}