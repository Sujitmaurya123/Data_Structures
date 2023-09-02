#include <bits/stdc++.h>
using namespace std;
    //Following is the Binary Tree node structure:
class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *&root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        // right part me insert karne h
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

bool searchInBST(Node * &root, int x)
{
    // Write your code here.

    //base case
    // if(root==NULL){
    //     return false;
    // }
    // if(root->data==x){
    //     return true;
    // }
    // if(root->data>x){
    //     //left part me
    //     return searchInBST( root->left,  x);
    // }else{
    //     //right part me
    //     return searchInBST(root->right, x);
    // }


// or best way 
    Node *temp=root;
    while(temp !=NULL){
        if(temp->data==x){
            return true;
        }
        if(temp->data>x){
            temp=temp->left;
        }else{
            temp=temp->right;
        }
    }
    return false;


}
void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main(){

    Node *root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout<<searchInBST(root, 27)<<endl;
    
     return 0;
}