#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n){
    int res=-1,largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1||arr[i]>arr[res]){
                res=i;
            }
        }
    }
        return res;
}
int main(){
int n=5;
int arr[5]={5,20,12,20,8};
int index=secondLargest(arr,n);
cout<<"Second largest element index is :"<<index<<endl;

cout<<"value is :"<<arr[index]<<endl;
    return 0;
}