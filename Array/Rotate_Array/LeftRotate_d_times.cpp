#include<bits/stdc++.h>
using namespace std;

void leftRotateOne(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
        
    }
    arr[n-1]=temp;
}
void leftRotate(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        leftRotateOne(arr,n);
    }
}

int main(){
    int n=5;
int arr[5]={1,2,3,4,5
};
leftRotate(arr,n,2);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}


/*
//best approche
void leftRotate(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }// temp[]={1,2}

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }//arr[]={3,4,5,4,5}

    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }//arr[]={3,4,5,1,2}
}
*/
/*
 void rotateArr(int arr[], int d, int n){
        // code here
        while(d>=n){
            d%=n;
        }

        reverse(arr,arr+n);
        reverse(arr,arr+n-d);
        reverse(arr+n-d,arr+n);
    }
*/
/*

   void rotateArr(int arr[], int d, int n){
        // code here
  d=d%n;
     vector<int>v(arr , arr+n);
      rotate(v.begin() , v.begin()+d   , v.end());

      for(int i=0 ; i< n ;i++)
      {
          arr[i]=v[i];
      }
    }
*/