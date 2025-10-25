//Linear Search
#include<bits/stdc++.h>
using namespace std;
int linearSearch(int n,int arr[],int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"finding the no. : ";
    cin>>key;
    cout<<linearSearch(n,arr,key)<<endl;
    return 0;
}
