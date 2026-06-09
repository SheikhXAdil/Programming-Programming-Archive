#include <iostream>
using namespace std;

int main()
{

    int x, y, z;
    int mid;

    int totalDistance;

    cin >> x >> y >> z;

    if((x <= y && y <= z) || (z <= y && y <= x))
        mid = y;
    else if((y <= x && x <= z) || (z <= x && x <= y))
        mid = x;
    else
        mid = z;

    totalDistance = abs(x - mid) + abs(y - mid) + abs(z - mid);

    cout << totalDistance;
    

   return 0;
}