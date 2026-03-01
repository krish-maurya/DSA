#include <bits/stdc++.h>
using namespace std;

void f(int i, int num)
{
    if (i<1)
    {
        return;
    }
    else
    {
        f(i - 1, num);
        cout << "krish" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    f(n, n);
}
