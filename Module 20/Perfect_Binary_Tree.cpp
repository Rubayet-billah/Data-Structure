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

int count_nodes(Node *root)
{
    if (!root)
        return 0;

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

int max_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (!root->left && !root->right)
    {
        return 1;
    }
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    int totalNodes = count_nodes(root);
    int treeHeight = max_height(root);
    bool isPerfect = totalNodes == (pow(2, treeHeight) - 1);
    string res = isPerfect ? "YES" : "NO";
    cout << res;
    return 0;
}