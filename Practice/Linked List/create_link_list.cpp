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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    // If the list is empty, the new node becomes both head and tail
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        // Otherwise, append the new node to the current tail's next
        // and then update the tail to the new node
        tail->next = newNode;
        tail = newNode;
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
    int n;
    cin >> n;
    Node *head = NULL; // Initialize head to NULL for an empty list
    Node *tail = NULL; // Initialize tail to NULL
    for (int i = 0; i < n; i++)
    {
        int userVal;
        cin >> userVal;
        insert_at_tail(head, tail, userVal);
    }

    print_linked_list(head);

    return 0;
}