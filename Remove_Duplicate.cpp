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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void remove_duplicate(Node *&head, Node *&tail)
{
    Node *temp = head;
    if (head == NULL)
    {
        return;
    }
    Node *i = temp;
    while (i != NULL)
    {
        Node *pNode = i;
        Node *nNode = i->next;
        while (nNode != NULL)
        {
            if (i->val == nNode->val)
            {
                Node *deleteNode = nNode;
                pNode->next = nNode->next;
                nNode = pNode->next;
                if (tail == nNode)
                {
                    tail = pNode;
                }
                delete deleteNode;
            }
            else
            {
                pNode = nNode;
                nNode = nNode->next;
            }
        }
        i = i->next;
    }
}

void print_list(Node *&head, Node *tail)
{
    Node *temp = head;
    if (head == NULL)
    {
        return;
    }
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
    }
    remove_duplicate(head, tail);

    print_list(head, tail);

    return 0;
}