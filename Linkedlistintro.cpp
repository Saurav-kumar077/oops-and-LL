#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
 void inserthead(Node *&head, int d)
{
    // creating new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertTail(Node* &Tail ,int d){
    Node * temp =new Node(d);
    Tail -> next=temp;
    Tail=temp;
}
void insertAtPosition( Node* &Tail ,Node * &head,int position ,int d){

    if(position==1){
        inserthead(head,d);
        return;
    }
    Node *temp= head;
    int count= 1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertTail(Tail,d);
        return;
    }
    Node *NodeToInsert =new Node(d);
    NodeToInsert ->next = temp->next;
    temp ->next = NodeToInsert;

}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *Node1 = new Node(10);
    // cout<<Node1->data<<endl;
    // cout<<Node1->next<<endl;
    Node *head = Node1;
    Node *Tail = Node1;
    print(Tail);
    insertTail(Tail, 12);
    print(Tail);
    insertTail(Tail,15);
    print(Tail);
    insertAtPosition(Tail,head,4,22);
    print(head);
    return 0;
}