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
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int get_max(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        return 0;
    }
    int max = head->val;
    while (temp != NULL)
    {
        if (temp->val > max)
        {
            max = temp->val;
        }
        temp = temp->next;
    }
    return max;
}
int get_min(Node *head)
{
    Node *temp = head;
    if (head == NULL)
    {
        return 0;
    }
    int min = head->val;
    while (temp != NULL)
    {
        if (temp->val < min)
        {
            min = temp->val;
        }
        temp = temp->next;
    }
    return min;
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
    int max = get_max(head);
    int min = get_min(head);
    cout << max - min;

    return 0;
}