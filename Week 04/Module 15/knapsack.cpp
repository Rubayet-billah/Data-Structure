#include <bits/stdc++.h>
using namespace std;
int val[1005], weight[1005];

int sum = 0;
int knapsack(int i, int max_weight)
{
    if (i < 0 || max_weight <= 0)
    {
        return 0;
    }
    if (weight[i] < max_weight)
    {
        // amar kache 2 ta option ache
        // hoy bag e rakhbo , nahoy rakhbo na
        int op1 = knapsack(i - 1, max_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, max_weight);
        return max(op1, op2);
    }
    else
    {
        // ektai option ache
        // bag e rakhte parbo na
        return knapsack(i - 1, max_weight);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    int max_weight;
    cin >> max_weight;
    cout << knapsack(n - 1, max_weight);
    return 0;
}