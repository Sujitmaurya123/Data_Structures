/*
i/p  arr[]={2,8,3,9,6,5,4}
    getSum(0,2)
    getSum(1,3)
    getSum(2,6)
o/p 13 20 27
*/
 
 
 #include<bits/stdc++.h>
using namespace std;

int getSum(int prefix_sum[],int l,int r){
    if(l!=0){
       return  prefix_sum[r]-prefix_sum[l-1];
    }
    else{
       return prefix_sum[r];
    }
    
}

int main(){
    // int n=7;
    // int arr[n]={2,8,3,9,6,5,4};
    // int prefix_sum[n];
    // prefix_sum[0]=arr[0];
    // for(int i=0;i<n;i++){
    //     prefix_sum[i]=prefix_sum[i-1]+arr[i];
    // }

    int prefix_sum[]={2,10,13,22,28,33,37};
int sk=getSum(prefix_sum,2,6);
cout<<sk<<endl;
return 0;
}