#include<bits/stdc++.h>
using namespace std;

int remDups(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return  res;
}
int main(){
int n=6;
int arr[]={10,20,20,30,30,30};
int sk= remDups(arr,n);
cout<<"Size is :"<<sk<<endl;;
for(int i=0;i<sk;i++){
    cout<<arr[i]<<" ";
}
return 0;
}