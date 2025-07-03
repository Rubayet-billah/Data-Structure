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

int get_idx(Node *&head, int val)
{
    Node *temp = head;
    int idx = 0;
    while (temp != NULL)
    {
        if (temp->val == val)
        {
            break;
        }
        if (temp->next == NULL)
        {
            return -1;
        }
        idx++;
        temp = temp->next;
    }
    return idx;
}

int main()

{
    int t;
    cin >> t;
    while (t--)
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
        int srcVal;
        cin >> srcVal;
        int idx = get_idx(head, srcVal);
        cout << idx << endl;
    }

    return 0;
}