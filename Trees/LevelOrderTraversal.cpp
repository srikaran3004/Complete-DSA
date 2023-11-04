#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

void printLevelOrderLine(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    
}