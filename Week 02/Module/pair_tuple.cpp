#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tuple<string, int, string> tp;
    auto [name, roll, phone] = make_tuple("Rahim", 10, "01937");

    cout << name << " " << roll << "\n";

    return 0;
}