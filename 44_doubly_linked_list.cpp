#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }

    void insertatbeg(node *&tail, node *&head, int d)
    {
        if (head == NULL)
        {
            node *newnode = new node(d);
            head = newnode;
            tail = newnode;
        }
        else
        {
            node *newnode = new node(d);
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    void insertatend(node *&tail, node *&head, int d)
    {
        if (head == NULL)
        {
            node *newnode = new node(d);
            head = newnode;
            tail = newnode;
        }
        else
        {
            node *newnode = new node(d);
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void insertatpos(node *&tail, node *&head, int position, int d)
    {
        if (position == 1)
        {
            insertatbeg(tail, head, d);
            return;
        }
        node *temp = head;
        int count = 1;
        while (count < position - 1)
        {
            temp = temp->next;
            count++;
        }
        if (temp->next == NULL)
        {
            insertatend(tail, head, d);
            return;
        }
        node *nodetoinsert = new node(d);
        nodetoinsert->next = temp->next;
        temp->next->prev = nodetoinsert;
        temp->next = nodetoinsert;
        nodetoinsert->prev = temp;
    }

    void deletestart(node *&head)
    {
        if (head == NULL)
        {
            cout << "ENPTY LIST" << endl;
            return;
        }
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        // tail=temp->next;
        temp->next = NULL;
        delete temp;
    }

    void deleteatpos(int position, node *&head)
    {
        node *current = head;
        node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = current;
            current = current->next;
            count++;
        }
        current->prev = NULL;
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
    void deleteend(node *&tail)
    {
        node *temp = tail;
        temp->prev->next = NULL;
        temp->prev = NULL;
        tail = temp->prev;
        delete temp;
    }
    void print(node *head)
    {
        node *current = head;
        while (current != NULL)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};
int main()
{
    node *n1 = new node(5);
    node *head = n1;
    node *tail = n1;
    // n1->print(head);
    n1->insertatbeg(tail, head, 2);
    n1->insertatbeg(tail, head, 3);
    n1->deletestart(head);
    n1->deleteend(tail);
    n1->print(head);
}