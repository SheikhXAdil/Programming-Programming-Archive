#include <iostream>
#include <iomanip>
using namespace std;

int count_leftBracket(string s)
{
    int i, n = s.length(), count = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '(')
            count++;
    }
    return count;
}

int count_rightBracket(string s)
{
    int i, n = s.length(), count = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == ')')
            count++;
    }
    return count;
}

void correctBrackets(string s)
{
    int n = s.length();
    int i, j, c;
    int moves = 0, tempMoves;
    string temp = "";
    string parts[n];
    int partCount = 0;
    string result = "";

    for (i = 0; i < n; i++)
    {
        c = 0;
        j = i + 1;

        temp += s[i];

        while (s[i] == s[j])
        {
            temp += s[j];
            c++;
            j++;
        }

        parts[partCount] = temp;
        partCount++;
        temp = "";

        i += c;
    }

    // for (i = 0; i < partCount; i++)
    // {
    //     cout << parts[i] << "\n";
    // }

    for (i = 0; i < partCount; i += 2)
    {
        if (i == 0 && parts[i].find(')') < parts[i].length())
        {
            i--;
            continue;
        }
        else
        {
            if (count_leftBracket(parts[i]) > count_rightBracket(parts[i + 1]))
            {
                tempMoves = count_leftBracket(parts[i]) - count_rightBracket(parts[i + 1]);
                moves += tempMoves;
                result.insert(0, tempMoves, '(');
                result.erase(i, tempMoves);
            }
            else if (count_leftBracket(parts[i]) < count_rightBracket(parts[i + 1]))
            {
                tempMoves = count_rightBracket(parts[i + 1]) - count_leftBracket(parts[i]);
                moves += tempMoves;
                result.insert(parts[i].length() - 1, tempMoves, ')');
                result.erase(i + 1, tempMoves);
            }
            else
            {
                result = result + parts[i] + parts[i + 1];
            }
        }
    }
    cout << result << "\n";
}

int main()
{
    int n, len;
    string s;
    int i;

    //

    // correctBrackets("((()))");
    // correctBrackets("()(())");
    correctBrackets(")))()()(((()((()))()()(())()");

    return 0;
}