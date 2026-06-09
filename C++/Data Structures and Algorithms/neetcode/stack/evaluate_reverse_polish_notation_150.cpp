#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {

        stack<int> expStack;
        int ans, firstVal, secondVal;

        for (int i = 0; i < tokens.size(); i++)
        {
            string current = tokens[i];

            if (!(current == "+" || current == "*" || current == "-" || current == "/"))
            {
                expStack.push(stoi(current));
            }
            else if (current == "+")
            {
                int firstVal = expStack.top();
                expStack.pop();
                int secondVal = expStack.top();
                expStack.pop();
                ans = firstVal + secondVal;
                expStack.push(ans);
            }
            else if (current == "*")
            {
                int firstVal = expStack.top();
                expStack.pop();
                int secondVal = expStack.top();
                expStack.pop();
                ans = firstVal * secondVal;
                expStack.push(ans);
            }
            else if (current == "-")
            {
                int firstVal = expStack.top();
                expStack.pop();
                int secondVal = expStack.top();
                expStack.pop();
                ans = secondVal - firstVal;
                expStack.push(ans);
            }
            else if (current == "/")
            {
                int firstVal = expStack.top();
                expStack.pop();
                int secondVal = expStack.top();
                expStack.pop();
                ans = secondVal / firstVal;
                expStack.push(ans);
            }
        }

        ans = expStack.top();
        return ans;
    }
};

int main()
{

    Solution s;

    vector<string> strs = {"4", "13", "5", "/", "+"};

    int ans = s.evalRPN(strs);
    cout << ans << endl;

    return 0;
}