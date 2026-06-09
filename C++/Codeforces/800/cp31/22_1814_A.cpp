// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// for _ in range(int(input())):
// 	n, k = map(int, input().split())
// 	for x in range(2):
// 		if n - x * k >= 0 and (n - x * k) % 2 == 0:
// 			print("YES")
// 			break
// 	else:
// 		print("NO")

void program()
{
    int n, k;

    cin >> n >> k;

    for (int x = 0; x < 2; x++)
    {
        if (n - x * k >= 0 && (n - x * k) % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
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