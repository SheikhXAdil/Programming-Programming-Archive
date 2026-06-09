#include <iostream>
using namespace std;


void program()
{
    int n;

    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int oddC = 0, evenC = 0;

    for (int i = 0; i < n; i++)
        if(arr[i] % 2 == 0)
            evenC++;
        else
            oddC++;


    if (oddC % 2 != 0 || (oddC == 1 && evenC == 1)) 
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

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