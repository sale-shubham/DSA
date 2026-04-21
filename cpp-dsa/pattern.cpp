#include <bits/stdc++.h>
using namespace std;

void simplepattern(int n)
{
    cout << "hello111111" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    cout << "Pattern 2" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    cout << "Pattern 3" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    cout << "Pattern 2" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    cout << "Pattern 5" << endl;

    for (int i = 1; i <= n; i++) //   1
    {                            // j= 1;  j<=4
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    cout << "Pattern 6" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//    *       4 space 1 star 4 space
//   ***      3 space 3 star 3 space
//  *****     2 space 5 star 2 space
// *******    1 space 7 star 1 space
//*********   0 space 9 star 0 space
// row 5

void pattern7(int n)
{
    //  cout << "Pattern 7" << endl;

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    //   cout<< endl;
}

void pattern8(int n)
{
    //  cout << "Pattern 8" << endl;

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < ((n - i) * 2) - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    cout << "pattern 9" << endl;
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    cout << "pattern 10" << endl;
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    cout << "pattern 11" << endl;

    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;
        for (int j = 0; j < i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }

        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        // left pattern
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }

        // space
        for (int j = 0; j < 2 * (n - 1 - i); j++)
        {
            cout << " ";
        }
        int right = i;
        // right  pattern
        for (int j = 0; j < i; j++)
        {

            cout << right;
            right = right - 1;
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;

    simplepattern(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    return 0;
}