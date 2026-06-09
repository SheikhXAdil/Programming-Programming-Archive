#include <iostream>
using namespace std;


int gcd (int a, int b) {
  int r, i;
  while(b!=0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}

void program()
{
    int n, k;
    bool sortedCheck = true;

    cin >> n >> k;
    
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (i == 0)
            continue;

        if (arr[i] < arr[i - 1])
            sortedCheck = false;
        
    }

    if (k > 1 || sortedCheck) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;

    

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