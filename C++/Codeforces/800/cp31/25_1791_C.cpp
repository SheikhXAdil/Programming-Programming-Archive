#include <iostream>
using namespace std;

void program()
{
    int n;
    string str;
    cin >> n >> str;

    int length = n, l = 0, r = n - 1;
    

    while (l < r && str[l] != str[r]) {
        length -= 2;
        l++;
        r--;
    }

    cout << length << endl;

}

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        program();
    }

    return 0;
}