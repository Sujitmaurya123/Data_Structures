/*
i/p  arr[]={1,4,20,3,10,5}
sum=33
o/p  YES

using window sliding methord -->O(n)

*/

#include<bits/stdc++.h>
using namespace std;

bool isSubSum(int arr[],int n,int sum){
  int curr_sum=arr[0];
  int s=0;
  for(int e=1;e<n;e++){
    //clean the prev window 
    while(curr_sum>sum&&s<e-1){
        curr_sum-=arr[s];
        s++;
    }
    if(curr_sum==sum){
        return true;
    }
    if(e<n){
        curr_sum+=arr[e];
    }
  }
  return (curr_sum==sum);

}
int main(){
    int arr[]={1,4,20,3,10,5};
    bool sk=isSubSum(arr,6,33);
   if(sk==1){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
    return 0;
}