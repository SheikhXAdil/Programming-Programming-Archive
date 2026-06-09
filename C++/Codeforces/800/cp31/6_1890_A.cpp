#include <iostream>
#include <map>
using namespace std;


void program()
{
    int n;
    map<int, int> map;

    cin >> n;
    
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        map[arr[i]]++;
    }

    if (map.size() >= 3) {
        cout << "no" << endl;
        return;
    }

    if (abs(map.begin()->second - map.rbegin()->second) <= 1) {
        cout << "yes" << endl;
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