#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = -1;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node();
}