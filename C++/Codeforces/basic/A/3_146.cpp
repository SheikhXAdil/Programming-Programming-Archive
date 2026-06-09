#include <iostream>
using namespace std;

int main()
{

    int i, j;
    string user;
    int count = 0;

    do
    {
        cin >> user;
    } while (user.length() > 100);

    // cout << "hello" << count;

    for (i = 0; i < user.length(); i++)
    {
        for (j = i; j < user.length(); j++)
        {
            if (i == j || user[j] == 0)
                continue;
            if (user[i] == user[j])
            {
                user[j] = '0';
            }
        }

        if (user[i] != '0')
            count++;
    }

    if (count % 2 == 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

    return 0;
}