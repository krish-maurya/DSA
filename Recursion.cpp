#include <bits/stdc++.h>
using namespace std;

void f(int i, int num)
{
    if (i > num)
        return;

    f(i + 1, num);
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;
    f(1, n);
}
