#include <iostream>
using namespace std;

void program()
{
    int n, minusC = 0, plusC = 0, steps = 0, sum = 0, mul = 1;

    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];


        if (arr[i] == -1)
            minusC++;
        if (arr[i] == 1)
            plusC++;

        sum += arr[i];
        mul *= arr[i];
    }

    if(mul == 1 && sum >= 0) {
        cout << 0 << endl;
        return;
    }

    if (sum < 0 && abs(sum) % 2 == 0) {
        steps += (abs(sum) / 2);
        plusC += (abs(sum) / 2);
        minusC -= (abs(sum) / 2);
    } else if (sum < 0) {
        steps += ((abs(sum) / 2) + 1);
        plusC += ((abs(sum) / 2) + 1);
        minusC -= ((abs(sum) / 2) + 1);
    }

    if (minusC % 2 != 0) {
        steps += 1;
        plusC += 1;
        minusC -= 1;
    }
    
    cout << steps << endl;
    

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