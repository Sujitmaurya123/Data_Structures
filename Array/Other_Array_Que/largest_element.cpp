#include<bits/stdc++.h>
using namespace std;
int getLargest(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
    }
    return res;
}

int main(){
int n=5;
int arr[n]={5,8,20,10,5};
int k=getLargest(arr,n);

cout<<"Largest element index is :"<<k<<endl;
cout<<"value is :"<<arr[k]<<endl;
    return 0;
}