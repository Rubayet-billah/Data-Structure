#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    while (true)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            temp->next = newNode;
            break;
        }
    }
}

void print_linked_list(Node *p)
{
    Node *ptr = p;
    while (ptr)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 100);
    insert_at_tail(head, 200);
    print_linked_list(head);

    return 0;
}