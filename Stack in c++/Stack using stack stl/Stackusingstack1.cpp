#include<bits/stdc++.h>
using namespace std;
#include<stack>

int main(){
    //creating stack
    stack<int>s ;
    // push opresion
    s.push(3);
    s.push(23);

    //pop opresion

    s.pop();


    cout<<"Stack element is top :"<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout << "Stack is not  empty" << endl;
    }
    cout<<"Stack of size is"<<s.size()<<endl;
    return 0;

}
