#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    { // node create kia hai
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data" << value << endl;
    }
};

void insertattail(node *&tail, int d)
{
    // CREATE A NEW NODE
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void insertathead(node *&head, int d)
{
    // NEW NODE CREATE
    node *temp = new node(d);
    temp->next = head;
    head = temp;
} 
void insertmiddle(node *&tail, node *&head, int position, int d)
{
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }

    node *temp = head; // traverse krna hai isliye starting me head leliya

    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at last position tail update krne ke liye
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    // creating node for d
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deletenode(int position, node *&head, node *&tail)
{
    // deleting first node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        // memory free starting node
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // deleting any middle or last node
        node *curr = head; // pointing to starting node
        node *prev = NULL; // pointing brfore starting node

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        if (curr->next == NULL)//agar last element NULL ko point kr rha hai to tail prev pr shift krdo
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *node1 = new node(10);

    // head pointed to node
    node *head = node1;
    // tail pointed to node
    node *tail = node1;

    print(head);

    insertattail(tail, 20);
    print(head);

    insertattail(tail, 30);
    print(head);

    // insertmiddle(tail, head, 2, 2);
    // print(head);

    deletenode(3, head, tail);
    print(head);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;
}