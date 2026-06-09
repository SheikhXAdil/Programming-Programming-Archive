#include <iostream>
using namespace std;

// gives the count of 1's in a string which controls till how long game goes as onle 1-character points are counted
int giveCountOf1(string s)
{

    int i, count = 0;

    for (i = 0; i < s.length(); i++)
        if (s[i] == '1')
            count++;

    return count;
}

// the program run for each test case
void program()
{

    string s;
    int i, j, position = 0, countOf1, tempCountOf1;
    int turnCount = 1, alicePoints = 0;

    // input string
    do
    {
        cin >> s;
    } while (s.length() < 1 || s.length() > 100);

    while (giveCountOf1(s) > 0)
    {
        // initialize count of consecutive 1's
        countOf1 = 0;

        for (i = 0; i < s.length(); i++)
        {
            // temporary count used to find largest consecutive 1's count

            tempCountOf1 = 0;

            // if letter is 0 then don't do anything
            if (s[i] == '1')
            {

                // count consecutive 1's
                while (s[i] == '1')
                {
                    tempCountOf1++;
                    i++;
                }

                // if current count of 1 sequence has more 1s then use this count
                if (tempCountOf1 > countOf1)
                {
                    countOf1 = tempCountOf1;

                    // get position of 1st 0 after this sequence
                    position = i;
                    tempCountOf1 = 0;
                }
            };
        }
        for (j = position - 1; j >= position - countOf1; j--)
        {
            // replace already used 1's to 2
            s[j] = '2';

            // as they take turns and we only need alice's points, we used odd turnCount
            if (turnCount % 2 == 1)
                alicePoints++;
        }

        // increment turnCount after every change
        turnCount++;
    }

    cout << alicePoints << "\n";
}

int main()
{

    int cases;
    int i, j;

    do
    {
        cin >> cases;
    } while (cases < 1 || cases > 500);

    for (i = 1; i <= cases; i++)
    {
        program();
    }
    return 0;
}