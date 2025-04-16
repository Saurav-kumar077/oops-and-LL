#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev; 

    //constructor
    Node(int data){
        this->data =data ;
        this->next =NULL;
        this->prev =NULL;
    }

};
void print(Node* head){
    Node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlength(Node* head){
    int length=0;
    Node *temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &Tail,int data){
    Node* temp=new Node(data);
    Tail->next=temp;
    temp->prev =Tail;
    Tail=temp;
}
void insertAtPosition(Node* &Tail,Node* &head,int position,int data){
    if(position==1){
        insertAtHead(head,data);
        return ;
    }
    Node *temp=head;
    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;   
    }
    if(temp->next==NULL){
        insertAtTail(Tail,data);
        return ;
    }
    Node* nodetoinsert =new Node(data);
    nodetoinsert->next=temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev =temp;
   

}



int main(){

    Node* node1 =new Node(10);
    Node* head =node1;
    Node* Tail=node1;
    print(head);
   // cout<<getlength(head)<<endl;
    insertAtHead(head,13);
    print(head);
    //cout<<getlength(head)<<endl;
    insertAtTail(Tail,25);
    print(head);
    insertAtPosition(Tail,head,1,29);
    print(head);
    insertAtPosition(Tail,head,5,69);
    print(head);

    return 0;

}