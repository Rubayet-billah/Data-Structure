#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        int N;
        cin >> N;
        int cnt = 0;
        for (int i = 0; i < N; ++i)
        {
            int b;
            cin >> b;
            cnt += b;
        }
        cout << (cnt % 2 == N % 2 ? "YES\n" : "NO\n");
    }
    return 0;
}