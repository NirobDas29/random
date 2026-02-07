#include<bits/stdc++.h>
using namespace std;
int partion(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i=low;
    int j =high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j]> pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;

}
void qs(int arr[], int low ,int high)
{
    if(low<high)
    {
        int pi = partion(arr,low,high);
        qs(arr,low,pi-1);
        qs(arr,pi+1,high);
    }
}
int main()
{
    
    int n;
    
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    qs(arr,0,n-1);
    cout<<"sorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}