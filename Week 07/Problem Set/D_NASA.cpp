#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define haa cout << "Yes\n";
#define naa cout << "No\n";
#define endl cout << "\n";
#define nl "\n"

const int maxN = (1LL << 15);
vector<int> allPalindromes;

bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - i - 1])
            return false;
    return true;
}

void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
        if (isPalindrome(i))
            allPalindromes.push_back(i);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), cnt(maxN + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < allPalindromes.size(); j++)
        {
            int curr = (a[i] ^ allPalindromes[j]);
            ans += cnt[curr];
        }
    }

    cout << (ans / 2) << '\n';
}

int main()
{
    fast;
    markPalindrome();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}