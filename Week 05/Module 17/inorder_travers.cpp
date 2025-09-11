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

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

int main()
{
    // Node *root = new Node(3);
    // Node *a = new Node(5);
    // Node *b = new Node(1);
    // Node *c = new Node(40);
    // Node *d = new Node(50);
    // Node *e = new Node(60);

    // root->left = a;
    // root->right = b;
    // a->left = c;
    // b->left = d;
    // b->right = e;

    Node *root = input_tree();
    inOrder(root);

    return 0;
}