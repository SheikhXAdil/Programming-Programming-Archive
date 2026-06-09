#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << i;
            j++;
        }

        cout << "\n";
        i++;
    }

    // for character
    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            char ch = 65 + i - 1;
            cout << ch;
            j++;
        }

        cout << "\n";
        i++;
    }

    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;
    int count = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }

        cout << "\n";
        i++;
    }

    // for characters
    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;
    count = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            char ch = 65 + count - 1;
            cout << ch << " ";
            count++;
            j++;
        }

        cout << "\n";
        i++;
    }

    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << i + j - 1;
            j++;
        }

        cout << "\n";
        i++;
    }

    // for character
    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            char ch = 65 + i + j - 2;
            cout << ch << " ";
            j++;
        }

        cout << "\n";
        i++;
    }

    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << i - j + 1;
            j++;
        }

        cout << "\n";
        i++;
    }

    // for characters
    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            char ch = 65 + i - j;
            cout << ch << " ";
            j++;
        }

        cout << "\n";
        i++;
    }

    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << n - i + j;
            j++;
        }

        cout << "\n";
        i++;
    }

    // for characters
    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            char ch = 65 + n - i + j - 1;
            cout << ch;
            j++;
        }

        cout << "\n";
        i++;
    }

    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << n + 2 - i - j << " ";
            j++;
        }

        cout << "\n";
        i++;
    }

    // for characters
    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            char ch = 65 + n + 1 - i - j;
            cout << ch << " ";
            j++;
        }

        cout << "\n";
        i++;
    }

    return 0;
}