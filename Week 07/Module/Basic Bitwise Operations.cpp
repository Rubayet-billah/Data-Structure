#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

void print_on_and_off_bits(int n)
{
    for (int k = 7; k >= 0; k--)
    {
        cout << check_kth_bit_on_or_off(n, k) << " ";
    }
}

int turn_on_kth_bit(int n, int k)
{
    return ((1 << k) | n);
}

int turn_off_kth_bit(int n, int k)
{
    return (n & (~(1 << k)));
}

int toggle_kth_bit(int n, int k)
{
    return ((1 << k) ^ n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // cout << check_kth_bit_on_or_off(45, 4) << "\n";
    // cout << check_kth_bit_on_or_off(45, 4) << "\n";
    // print_on_and_off_bits(35);
    // cout << turn_off_kth_bit(45, 3) << "\n";
    cout << toggle_kth_bit(52, 2) << "\n";

    return 0;
}