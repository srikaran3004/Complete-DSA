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
void RecPrint(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    RecPrint(head->next);
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    RecPrint(head);
}