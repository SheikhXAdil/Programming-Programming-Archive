#include <iostream>
using namespace std;

void calculatePossibilities(int arr[8][2], int x, int y, int a, int b)
{
    arr[0][0] = x + a;
    arr[0][1] = y + b;

    arr[1][0] = x + a;
    arr[1][1] = y - b;

    arr[2][0] = x + b;
    arr[2][1] = y + a;

    arr[3][0] = x + b;
    arr[3][1] = y - a;

    arr[4][0] = x - a;
    arr[4][1] = y + b;

    arr[5][0] = x - a;
    arr[5][1] = y - b;

    arr[6][0] = x - b;
    arr[6][1] = y + a;

    arr[7][0] = x - b;
    arr[7][1] = y - a;
}

int getCommonCount(int q[8][2], int k[8][2]) {

    int count = 0;
    bool continueCheck;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if(q[i][0] == k[j][0] && q[i][1] == k[j][1]) {
                count++;
                continueCheck = true;
                break;
            }
        }

        if(continueCheck)
            continue;
    }
    


    return count;


}

void program()
{

    int a, b, qx, qy, kx, ky, commonCount;

    cin >> a >> b >> kx >> ky >> qx >> qy;

    int q[8][2];
    int k[8][2];

    calculatePossibilities(q, qx, qy, a, b);
    calculatePossibilities(k, kx, ky, a, b);

    commonCount = getCommonCount(q, k);

    if (a == b)
        commonCount /= 2;

    cout << commonCount << endl;
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