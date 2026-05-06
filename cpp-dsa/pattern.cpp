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
void pattern13(int n)
{
    int counter = 1;

    for (int i = 0; i < n; i++)
    {
        //  cout<<"i in outer loop"<< i <<endl;
        for (int j = 0; j <= i; j++)
        {
            cout << counter << " ";
            counter += 1;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    // char ch = 'A';

    char ch = 'a';

    for (int i = 0; i < n; i++)
    {
        //  cout<<"i in outer loop"<< i <<endl;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    // char ch = 'A';
    cout << "pattern 15" << endl;

    for (int i = 0; i < n; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
            // ch += 1;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << char(ch + i) << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    char character = 'A';
    for (int i = 0; i < n; i++)
    {

        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << character << " ";
        }
        character = char(character + 1);
        cout << endl;
    }
}

void pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        // sapce
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // charcter
        char ch = 'A';

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < i)
                ch++;
            else
                ch--;
        }

        // sapce
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = n - i;
        char startchar = 'A' + n - i - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << char(startchar + j);
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    { // pattern 1
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space

        for (int j = 0; j < i * 2; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern22(int n)
{
    // cout << "pattern 22" << endl;
    for (int i = 0; i < n; i++)
    { // pattern 1
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // space

        for (int j = 0; j < 2 * (n - 1 - i); j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern23(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars;

        // top half
        if (i < n)
            stars = i + 1;
        else
            stars = 2 * n - i - 1;

        // stars
        for (int j = 0; j < stars; j++)
            cout << "*";

        // spaces
        int spaces = 2 * (n - stars);
        for (int j = 0; j < spaces; j++)
            cout << " ";

        // stars
        for (int j = 0; j < stars; j++)
            cout << "*";

        cout << endl;
    }
}

void pattern24(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern25(int n)
{
    cout << "n = " << n << endl;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 1) - 1 - j;
            int down = (2 * n - 1) - 1 - i;
            cout << n - (min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;

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
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    pattern23(n);
    pattern24(n);
    pattern25(n);
    return 0;
}