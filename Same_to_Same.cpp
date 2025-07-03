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

string is_similar(Node *head, Node *head2)

{
    Node *temp = head;
    Node *temp2 = head2;

    while (temp != NULL || temp2 != NULL)
    {
        if (temp->val != temp2->val)
        {
            return "NO";
        }

        temp = temp->next;
        temp2 = temp2->next;
    }
    return "YES";
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
    if (get_size(head) != get_size(head2))
    {
        cout << "NO";
        return 0;
    }

    string isSame = is_similar(head, head2);

    cout << isSame;

    return 0;
}