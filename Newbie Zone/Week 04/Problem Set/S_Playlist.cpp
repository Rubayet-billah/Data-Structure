#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    map<int, int> last;
    int cnt = 0;
    int i = 1, j = 1;
    while (j <= n)
    {

        i = max(i, last[v[j]] + 1);
        last[v[j]] = j;
        cnt = max(cnt, j - i + 1);
        j++;
    }

    cout << cnt << "\n";
    return 0;
}