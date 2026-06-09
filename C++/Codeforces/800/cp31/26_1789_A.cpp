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
    int n;

    cin >> n;
    
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(i != j && gcd(arr[i], arr[j]) <= 2) {
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