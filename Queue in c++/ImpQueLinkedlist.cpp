#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x){
        data =x;
        next=NULL;
    }
};
struct Queue
{
    Node* front;
    Node* rear;
    Queue(int x){
        front =NULL;
        rear=NULL;
    }

    void enque(int x){
        Node *temp=new Node(x);
        if(front==NULL){
            front=rear=temp;
            return ;
        }
        rear->next=temp;
        rear=temp;
    }

    void deque(){
        if(front==NULL){
            return ;
        }
        Node*temp=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete(temp);
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    Queue q(6);//6 is size hai queue ka 
    q.enque(1);
    q.enque(2);
    // q.enque(3);
    // q.display(); // Output: 1 2 3

    // q.deque();
    // q.display(); // Output: 2 3

    q.enque(4);
    q.display(); // Output: 2 3 4

    return 0;
}
