#include <bits/stdc++.h>
using namespace std;

void f(int i, int num)
{
    if (i > num)
        return;

    f(i + 1, num);
    cout << i << endl;
}
// sumation of first n numbers
void sum(int i, int s)
{
    if (i < 1)
    {
        cout << s;
        return;
    }
    sum(i - 1, s + i);
}
// sumation of first n numbers
int sumFUNCTION(int n)
{
    if (n == 0)
        return 0;

    return n + sumFUNCTION(n - 1);
}
// factorial of n
int factorial(int n)
{
    if (n == 1)
        return 1;

    return n * factorial(n - 1);
}
// reverse a array using recursion

void reArray(int *arr, int l, int r)
{
    if (l >= r)
        return;

    swap(arr[l], arr[r]);
    reArray(arr, l + 1, r - 1);
}

void REVERSEARRAY(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    REVERSEARRAY(i + 1, arr, n);
}

// int main()
// {
//     int arr[] = {1, 5, 2, 3, 4, 7};
//     int n = size(arr);
//     REVERSEARRAY(0, arr, n);

//     for (auto el : arr)
//         cout << el << " ";

//     return 0;
// }

// reverse a string using recursion

bool plaigdrom(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;

    if (s[i] != s[s.size() - i - 1])
        return false;

    return plaigdrom(i + 1, s);
}

// int main()
// {
//     string s;
//     cin >> s;

//     cout << plaigdrom(0, s) << endl;
//     for (auto el : s)
//         cout << el << " ";

//     return 0;
// }

// multipel function calls

// fibonacaci
int fibo(int n)
{
    if (n <= 1) return n;

    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;
    fibo(n);
    return 0;
}