#include <bits/stdc++.h>
using namespace std;

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

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();

        q.pop();

        if (temp == NULL)
        { // purana level complete traverse ho chuka hai
            cout << endl;
            if (!q.empty())
            { // queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

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

Node *minVal(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
Node *maxVal(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
//base case
if(root==NULL){
    return 0;
}
if(root->data==val){
    //0 child
    if(root->left==NULL&& root->right==NULL){
        delete root;
        return NULL;
    }
    // 1 child
//left child
if(root->left!=NULL && root->right ==NULL){
    Node* temp =root->left;
    delete root;
    return temp;
}
// right child
if (root->right != NULL && root->left == NULL)
{
    Node *temp = root->right;
    delete root;
    return temp;
}

// 2 child
if(root->left!=NULL && root->right !=NULL){
    int mini=minVal(root->right)->data;//    
    root->data=mini;
    root->right=deleteFromBST(root->right,mini);
    return root;
}

}
else if(root->data>val){
    //left part me jao
    root->left =deleteFromBST(root->left,val);
    return root;
}else{
    // right part me jao
    root->right=deleteFromBST(root->right,val);
    return root;
}

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

int main()
{
    Node *root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << "Printing the BST:" << endl;
    levelOrderTraversal(root);

    cout << "min value is:" << minVal(root)->data << endl;

    cout << "min value is:" << maxVal(root)->data << endl;
      
      root =deleteFromBST(root,27);

      cout << "Printing the BST:" << endl;
      levelOrderTraversal(root);

      cout << "min value is:" << minVal(root)->data << endl;

      cout << "mix value is:" << maxVal(root)->data << endl;

      return 0;
}
