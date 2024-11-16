#include<bits/stdc++.h>
using namespace std;

void selection_Sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}

void bubble_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}   

int main()
{
    int arr[] = {5,2,1,9,3};
    bubble_sort(arr,5);
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
}