#include <bits/stdc++.h>
using namespace std;
int Par(vector<int> &arr,int st,int nd){
    int idx=st-1,pivot=arr[nd];
    for(int j=st;j<nd;j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[nd],arr[idx]);
    return idx;
}
void quickSort(vector<int> &arr,int st,int nd){
    if(st<nd){
        int pivIdx=Par(arr,st,nd);

        quickSort(arr,st,pivIdx-1);
        quickSort(arr,pivIdx+1,nd);
    }
}
int main() {
    vector<int> arr={12,31,35,4,32,17};
    quickSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}

