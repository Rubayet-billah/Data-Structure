#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

void print_on_and_off_bits(int n)
{
    for (int k = 31; k >= 0; k--)
    {
        if (check_kth_bit_on_or_off(n, k))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << __builtin_popcount(39) << "\n"; // count the no of 1 bits in the number
    cout << __lg(39) << "\n";               // return the position of the MSB

    return 0;
}