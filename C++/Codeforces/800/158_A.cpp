#include <iostream>
using namespace std;

int main()
{

    int n;
    int k;
    int count = -1;

    cin >> n >> k;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        if(arr[k - 1] > 0 && arr[i] == arr[k - 1]) {
            count = i;
            break;
        } else if(arr[k - 1] == 0 && arr[i] > 0) {
            count = i;
            break;
        }

    }  

    cout << count + 1;
    

   return 0;
}