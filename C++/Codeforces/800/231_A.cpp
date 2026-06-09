#include <iostream>
using namespace std;

int main()
{

    int n;
    int x, y, z;
    int count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        
        cin >> x >> y >> z;

        if((x && y) || (x && z) || (y && z))
            count++;

    }

    cout << count;
    

   return 0;
}