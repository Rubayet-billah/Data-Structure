#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}
string check_similarity(Node *head, Node *head2)
{
    Node *temp = head;
    Node *temp2 = head2;
    while (temp->next != NULL && temp2->next != NULL)
    {
        if (temp->val != temp2->val)
        {
            return "NO";
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    if (temp->next != temp2->next)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

void print_forward(Node *head)
{
    Node *temp = head;
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
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    string is_similar = check_similarity(head, head2);
    cout << is_similar;

    return 0;
}