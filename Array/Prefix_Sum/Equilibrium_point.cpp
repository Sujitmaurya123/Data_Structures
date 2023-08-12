/*
i/p arr[]={3,4,8,-9,20,6};

o/p -> YES

i/p arr[]={4,2,2};
o/p -> NO

*/

#include<bits/stdc++.h>
using namespace std;

bool isEqPoint(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int l_sum=0;
    for(int i=0;i<n;i++){
        if(l_sum==(sum-arr[i])){
            return true;
        }
        l_sum+=arr[i];
        sum-=arr[i];
    }
    return false;
}

int main(){
    int arr[]={3,4,8,-9,20,6};
    bool s=isEqPoint(arr,6);
    if(s==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}