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

int main()
{
    Node *root = input_tree();
    int givenLevel;
    cin >> givenLevel;
    vector<int> v;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    int level;
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *tempNode = p.first;
        level = p.second;
        if (givenLevel == level)
        {
            v.push_back(tempNode->val);
        }
        if (tempNode->left)
            q.push({tempNode->left, level + 1});
        if (tempNode->right)
            q.push({tempNode->right, level + 1});
    }
    if (givenLevel > level)
    {
        cout << "Invalid";
        return 0;
    }
    else
    {
        for (auto it : v)
        {
            cout << it << " ";
        }
    }

    return 0;
}