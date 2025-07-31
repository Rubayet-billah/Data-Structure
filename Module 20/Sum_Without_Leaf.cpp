#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    queue<Node *> q;
    int rootVal;
    cin >> rootVal;
    Node *root;
    if (rootVal == -1)
        root = NULL;
    else
        root = new Node(rootVal);
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *pNode = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *lNode, *rNode;
        if (l != -1)
            lNode = new Node(l);
        else
            lNode = NULL;
        if (r != -1)
            rNode = new Node(r);
        else
            rNode = NULL;

        pNode->left = lNode;
        pNode->right = rNode;

        if (lNode)
        {
            q.push(lNode);
        }
        if (rNode)
        {
            q.push(rNode);
        }
    }
    return root;
}

int getSumLevelOrder(Node *root, int sum)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // Node ber kore ana
        Node *temp = q.front();
        q.pop();
        // ber kora node niye kaj kora
        if (temp->left || temp->right)
        {
            sum += temp->val;
        }
        // node er children push kora
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return sum;
}

int main()
{
    Node *root = input_tree();
    int sum = getSumLevelOrder(root, 0);
    cout << sum;

    return 0;
}