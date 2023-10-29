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
void insertFront(int val, Node *&head)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    return;
}
void DeleteFirst(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *curr = head;
    head = curr->next;
    delete curr;
}
void display(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main()
{
    Node *head = NULL;
    insertFront(10, head);
    insertFront(20, head);
    insertFront(30, head);
    DeleteFirst(head);
    display(head);
}