#include <bits/stdc++.h>
using namespace std;
void countDigit(int n)
{
    int count = (int)log10(n) + 1;
    cout << "count " << count << endl;
}
void printDigit(int n)
{
    cout << "n = " << n << endl;
    while (n > 0)
    {
        int lastDigit = n % 10;
        cout << lastDigit << endl;
        n = n / 10;
    }
}
void sumDigit(int n)
{
    cout << "n = " << n << endl;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    cout << "sum " << sum << endl;
}
void reverseNumber(int n)
{
    cout << "n " << n << endl;
    int reverseNumber = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        n = n / 10;
    }
    cout << "reverseNumber " << reverseNumber << endl;
}
void palindrome(int n)
{
    cout << "n " << n << endl;
    int orignalNumber = n;
    int reverseNumber = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        n = n / 10;
    }
    cout << "reverseNumber " << reverseNumber << endl;
    if (orignalNumber == reverseNumber)
    {
        cout << "number is plindrome";
    }
    else
    {
        cout << "number is not  plindrome" << endl;
    }
}

void armstrongNumber(int n)
{
    cout << "n = " << n << endl;
    int originalNumber = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    cout << "sum " << sum << endl;
    if (sum == originalNumber)
    {
        cout << "number is armstrongNumber";
    }
    else
    {
        cout << "number is not  armstrongNumber";
    }
    cout << endl;
}
void printDivisors(int n)
{
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << ", ";
    //     }
    // }
    // taking large time
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << ", ";
        }
    }
    cout << endl;
    cout << endl;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << ", ";
        }
        if (n / i != i)
        {
            int j = n / i;
            cout << j << " ,";
        }
    }

    cout << endl;
}

int main()
{
    int n = 36;
    countDigit(n);
    printDigit(n);
    sumDigit(n);
    reverseNumber(n);
    palindrome(n);
    armstrongNumber(n);
    printDivisors(n);
    return 0;
}