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
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void remove_duplicate(Node *&head, Node *&tail)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    Node *i = temp;
    while (i->next != NULL)
    {
        Node *j = i->next;
        while (j != NULL)
        {
            if (i->val == j->val)
            {
                Node *deleteNode = j;
                i->next = j->next;
                j = j->next;
                if (tail == deleteNode)
                {
                    tail = i;
                }
                delete deleteNode;
            }
            else if (i->val == j->next->val)
            {
                Node *deleteNode = j->next;
                j->next == j->next->next;
                j = j->next;
                if (tail == deleteNode)
                {
                    tail = j;
                }
            }
        }
        i = i->next;
    }
}

void print_list(Node *temp)
{

    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    print_list(temp->next);
}

void fun(Node *&temp, Node *&b)
{
    Node *i = temp;
    i->next = b->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    // while (true)
    // {
    //     int val;
    //     cin >> val;
    //     if (val == -1)
    //     {
    //         break;
    //     }
    //     insert_at_tail(head, tail, val);
    // }
    // remove_duplicate(head, tail);
    // print_list(head);
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    Node *i = a;
    i->next = b->next;
    // fun(a, c);

    cout << a->val << " " << a->next->val << endl;
    // output: 10 30

    return 0;
}