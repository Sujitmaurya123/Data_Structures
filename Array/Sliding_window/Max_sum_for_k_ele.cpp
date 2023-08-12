/*
I/P arr[]={1,8,30,-5,20,7}
k=3
o/p -> 45 (max sum of 3 elements above array elements)


using window sliding methord --->T.C=>O(n)

*/

#include<bits/stdc++.h>
using namespace std;

int MaxSum(int arr[],int n,int k){

int curr_sum=0;
int max_sum ;
for (int i = 0; i < k; i++)
{
    curr_sum+=arr[i];
     max_sum=curr_sum;
}
for(int i=k;i<n;i++){
    curr_sum+=(arr[i]-arr[i-k]);
    max_sum=max(max_sum,curr_sum);
}
return max_sum;

}
int main(){
    int arr[]={1,8,30,-5,20,7};
    int sk=MaxSum(arr,6,3);
    cout<<sk<<endl;
    return 0;
}