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
    Node *root;
    int val;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1)
            p->left = new Node(l);
        else
            p->left = NULL;
        if (r != -1)
            p->right = new Node(r);
        else
            p->right = NULL;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void leftNodeTraversal(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    if (temp->left)
        leftNodeTraversal(temp->left);
    else if (temp->right)
        leftNodeTraversal(temp->right);
    cout << temp->val << " ";
}
void rightNodeTraversal(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    if (temp->right)
        rightNodeTraversal(temp->right);
    else if (temp->left)
        rightNodeTraversal(temp->left);
}

int main()
{
    Node *root = input_tree();
    leftNodeTraversal(root->left);
    cout << root->val << " ";
    rightNodeTraversal(root->right);

    return 0;
}