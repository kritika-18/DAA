#include <bits/stdc++.h>
using namespace std;
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(int arr[], int n)
{
    int comp=0,shift=0, key;
    for (int i = 1; i < n; i++)
    {
        
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            comp++;
            arr[j + 1] = arr[j];
            j = j - 1;
            shift++;
        }
        shift++;
        arr[j + 1] = key;
        
    }
    printArray(arr, n);
    cout<<"Comparison: "<<comp<<endl;
    cout<<"Shifts: "<<shift<<endl;
}

int main()
{
   int t;
   cin>>t;  //number of test cases
   while(t--){
        int n;
        cin>>n;  //size of the array
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        insertionSort(arr, n);
   }
    
}