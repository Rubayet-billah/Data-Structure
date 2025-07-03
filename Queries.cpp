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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
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

void delete_node(Node *&head, Node *tail, int pos)
{
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}

int get_size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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
            insert_at_head(head, tail, val);
        }
        else if (cs == 1)
        {
            insert_at_tail(head, tail, val);
        }
        else if (cs == 2)
        {
            delete_node(head, tail, val);
        }
        print_list(head);
        cout << endl;
    }

    return 0;
}