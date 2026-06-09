#include <iostream>
using namespace std;

void program()
{
    int first, second, both;

    cin >> first >> second >> both;

    int minPress = min(first, second);
    
    int player;

    if (both % 2 == 0) {
        player = 1;
    } else {
        player = 2;
    }

    first -= minPress;
    second -= minPress;

    if (first > 0) {
        cout << "First" << endl;
        return;
    }
    if (second > 0) {
        cout << "Second" << endl;
        return;
    }

    if(player == 2) {
        cout << "First" << endl;
        return;
    }

    if(player == 1) {
        cout << "Second" << endl;
        return;
    }
    
    

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