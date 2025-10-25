//Binary Search
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    int strt=0,nd=n-1;
    while(strt<=nd)
    {
        int mid=(strt+nd)/2;
        if(arr[mid]==key){ return mid; }
        else if(arr[mid]<key){ strt= mid+1; }
        else if(arr[mid]>key){ nd= mid-1; }
    }
    return -1;
}
int main(){
    cout<<"enter number of elements: ";
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter unsorted elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int key;
    cout<<"enter the finding number: ";
    cin>>key;

    cout<<"the index number: "<<binarySearch(arr.data(),n,key)<<endl;
    return 0;
}
