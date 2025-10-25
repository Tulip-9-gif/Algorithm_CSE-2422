#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
            int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
          flag = 1;
            }
        }
       if(flag==0){ break; }
    }
}
void AssendingPrint(int arr[],int n)
{
    cout<<"Assending order: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cout<<"enter number of elements: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    AssendingPrint(arr,n);
    return 0;
}
