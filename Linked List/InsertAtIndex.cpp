#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void InsertFront(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    newNode->next = head;
    head = newNode;
}
void InsertIndex(Node *&head, int idx, int val)
{
    if (idx == 1)
    {
        InsertFront(head, val);
        return;
    }
    if (head == NULL)
    {
        cout << "Insertion Not Possible" << endl;
        return;
    }
    Node *newNode = new Node(val);
    Node *curr = head;
    Node *prev = NULL;
    int c = 1;
    while (curr && c != idx)
    {
        prev = curr;
        curr = curr->next;
    }
    if (c != idx)
    {
        cout << "Insertion Not Possible" << endl;
    }
    else
    {
        prev->next = newNode;
        newNode->next = curr;
    }
}
void display(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    InsertFront(head, 1);
    InsertFront(head, 2);
    InsertFront(head, 3);
    InsertFront(head, 4);
    InsertIndex(head, 2, 5);
    display(head);
}