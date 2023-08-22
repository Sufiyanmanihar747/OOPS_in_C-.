#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    //create node
    Node(int data){
        this ->data=data;
        this ->next=NULL;
    }
};

 //insertion to Head node
    void insertToHead(Node* &head,int data){

        //create a new node
        Node *temp=new Node(data);

        //moving old's head into new node
        temp->next =head;

        //moving new next to old head
        head=temp;

    }
 //insertion to tail node
    void insertToTail(Node* &tail,int data){

        //create a new node
        Node *temp=new Node(data);
        tail->next=temp;
        tail=tail->next;

    }
 //traverse node
    void print(Node* &head){
        Node *temp=head;
        while(temp !=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
        }
        cout<<endl;
    }

int main(){

    //dynamically
    Node* node1=new Node(280);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    //inserting into head 
    Node* head=node1;
    insertToHead(head,15);
    print(head);
    insertToHead(head,155);
    print(head);

    //inserting into tail
    Node* tail=node1;
    insertToTail(tail,290);
    print(head);

}