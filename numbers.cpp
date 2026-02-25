#include <bits/stdc++.h>
using namespace std;

void armStrongNumber(int num)
{
    int temp = num;
    int sum = 0;

    while (num > 0)
    {
        int last = num % 10;
        sum += last * last * last;
        num /= 10;
    }

    if (temp == sum)
    {
        cout << "Number is an Armstrong number" << endl;
    }
    else
    {
        cout << "Number is not an Armstrong number" << endl;
    }
}
void allDiviSor(int num)
{
    vector<int> ls;

    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            ls.push_back(i);
            if ((num / i) != i)
            {
                ls.push_back(num / i);
            }
        }
    }

    sort(ls.begin(), ls.end());

    for (auto it : ls)
        cout << it << " ";
}
void primeNumber(int num)
{
    int count = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            if ((num / i) != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
        cout << "Prime number";
    else
        cout << "Not a Prime Number";
}
void GDC(int num1, int num2)
{
    for (int i = min(num1, num2); i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << i;
            break;
        }
    }
}
// gcd(a,b)=gcd(a-b,b)
// gcd(a,b)=gcd(a%b,b)
void GDCALGO(int num1, int num2)
{
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
            num1 = num1 % num2;
        else
            num2 = num2 % num1;
    }
    if (num1 == 0)
        cout << num2;
    else
        cout << num1;
}
int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    GDCALGO(num1, num2);
}