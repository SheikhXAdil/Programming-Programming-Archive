#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {

        if (s.length() % 2 != 0)
            return false;

        stack<char> stack;

        for (int i = 0; i < s.length();)
        {
            char current = s[i];

            if (current == '(' || current == '{' || current == '[')
            {
                stack.push(current);
                i++;
            }
            else
            {

                if (current == ')')
                {
                    if (!stack.empty() && stack.top() == '(')
                    {
                        stack.pop();
                        i++;
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (current == '}')
                {
                    if (!stack.empty() && stack.top() == '{')
                    {
                        stack.pop();
                        i++;
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (current == ']')
                {
                    if (!stack.empty() && stack.top() == '[')
                    {
                        stack.pop();
                        i++;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }

        if (!stack.empty())
            return false;

        return true;
    }
};

int main()
{

    Solution s;

    bool ans = s.isValid("([{}])");
    cout << ans << endl;
    ans = s.isValid("[(])");
    cout << ans;

    return 0;
}