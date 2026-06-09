#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {

        int l = 0, r = s.length() - 1;

        while (l < r)
        {

            while (!(this->isAlphaNum(s[l])) && l < r)
                l++;
            while (!(this->isAlphaNum(s[r])) && l < r)
                r--;


            if (this->toLower(s[l]) != this->toLower(s[r]))
                return false;

            l++;
            r--;
        }
        return true;
    }

    bool isAlphaNum(char c)
    {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }

    char toLower(char c)
    {
        if (c >= 'A' && c <= 'Z')
            return c + 32;
        return c;
    }
};

int main()
{

    Solution s;

    bool ans = s.isPalindrome("Was it a car or a cat I saw?");
    cout << ans << endl;
    ans = s.isPalindrome("tab a cat");
    cout << ans;

    return 0;
}