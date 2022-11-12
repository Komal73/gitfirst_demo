#include<iostream>
using namespace std;

int binary(int arr[], int n, int k)
{
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        if(k> arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[7]={1,3,4,5,6,8,9};
    int ind= binary(arr, 7, 3);
    cout<<"index of the element is = "<<ind<<endl;
    return 0;
}