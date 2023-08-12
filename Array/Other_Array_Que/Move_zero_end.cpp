#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){
int n=6;
int arr[6]={10,8,0,0,12,0};
moveZero(arr,n);
for(auto s:arr){
    cout<<s<<" ";
}
    return 0;
}