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

void insert_at_head(Node *head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
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
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int cs, val;
        cin >> cs >> val;
        if (cs == 0)
        {
            insert_at_head(head, val);
        }
        else if (cs == 1)
        {
            insert_at_tail(head, tail, val);
        }

        print_linked_list(head);

        cout << endl;
    }

    return 0;
}