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

        if (pNode->left)
        {
            q.push(pNode->left);
        }
        if (pNode->right)
        {
            q.push(pNode->right);
        }
    }
    return root;
}

int count_leaf_nodes(Node *root)
{
    if (!root)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l + r;
}

int main()
{
    Node *root = input_tree();
    int totalNodes = count_leaf_nodes(root);
    cout << totalNodes;
    return 0;
}