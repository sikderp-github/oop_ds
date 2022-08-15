#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;

    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
void display(Node *n)
{
    while(n != NULL)
    {
        cout<<n->value;
        if(n->Next != NULL)
        {
            cout<<" -> ";
        }
        n = n->Next;
    }
    cout<<endl<<endl;
}
void insertAtHead(Node* &head, int val)
{
    Node *newNode = new Node(val);

    newNode->Next = head;

    head = newNode;
}
void insertAtTail(Node* &head, int val)
{
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head =newNode;
        return;
    }

    Node *temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}
int countLength(Node* &head)
{
    int count =0;
    Node *temp = head;
    while(temp !=NULL)
    {
        count++;
        temp =temp->Next;
    }
    return count;
}
int main()
{
    Node *head = NULL;

    int value;
    cout<<"Choice 1: Insert at Head "<<endl<<"Choice 2: Insert at Tail "<<endl<<"Choice 0: Exit"<<endl;
    cout<<endl;
    cout<<"Next Choice : ";
    int choice;
    cin>>choice;
    while(choice != 0)
    {
        cout<<"Enter your value : ";
        cin>>value;
    switch(choice)
    {
    case 1:
        insertAtHead(head, value);
        break;
    case 2:
        insertAtTail(head, value);
        break;
    default:
        break;
    }
    cout<<"Next Choice: ";
    cin>>choice;
    }
    cout<<endl;
    cout<<"Linked list :"<<endl;
    display(head);

    cout<<"length of the list :"<<countLength(head)<<endl;

    return 0;
}

