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

void sort_linked_list(Node *&head)
{
    // Node *previousNode = head;
    // Node *nextNode = head->next;
    // while (nextNode->next != NULL)
    // {
    //     if (previousNode->val > nextNode->val)
    //     {
    //         previousNode->next = nextNode->next;
    //         nextNode->next = previousNode;
    //     }
    //     else{

    //     }
    //     previousNode = nextNode;
    //     nextNode = nextNode->next;
    // }
}

void print_list(Node *temp)
{

    // base case
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
    sort_linked_list(head);
    print_list(head);

    return 0;
}