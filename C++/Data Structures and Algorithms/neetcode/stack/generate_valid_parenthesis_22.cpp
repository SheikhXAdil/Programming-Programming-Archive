#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> res;

        this->backtracking(0, 0, n, res, "");
        return res;
    }

    void backtracking(int openN, int closedN, int n, vector<string> &res, string stk)
    {
        cout << n << " " << openN << " " << closedN << " " << stk << endl;

        if (openN == n && closedN == n)
        {
            res.push_back(stk);
            return;
        }

        if (openN < n)
        {
            this->backtracking(openN + 1, closedN, n, res, stk + "(");
        }

        if (closedN < openN)
        {
            this->backtracking(openN, closedN + 1, n, res, stk + ")");
        }
    }
};

int main()
{

    Solution s;

    int count = 3;

    vector<string> ans = s.generateParenthesis(count);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}