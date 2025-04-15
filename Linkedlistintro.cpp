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
    print(head);
    inserthead(head, 12);
    print(head);
    return 0;
}