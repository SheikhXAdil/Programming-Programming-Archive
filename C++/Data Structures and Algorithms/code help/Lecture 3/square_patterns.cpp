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

        while (j <= n)
        {
            cout << i;
            j++;
        }

        cout << "\n";
        i++;
    }

    // For characters
    cout << "\n"
         << "--------------------------------------"
         << "\n"
         << endl;

    i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            char ch = 65 + i - 1; // 65 = "A"
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

        while (j <= n)
        {
            cout << j;
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

        while (j <= n)
        {
            char ch = 65 + j - 1;
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

        while (j <= n)
        {
            cout << n - j + 1;
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

        while (j <= n)
        {
            char ch = 65 + n - j;
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

        while (j <= n)
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

        while (j <= n)
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

        while (j <= n)
        {
            cout << i + j - 1;
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

        while (j <= n)
        {
            char ch = 65 + i + j - 2;
            cout << ch << " ";
            count++;
            j++;
        }

        cout << "\n";
        i++;
    }

    return 0;
}