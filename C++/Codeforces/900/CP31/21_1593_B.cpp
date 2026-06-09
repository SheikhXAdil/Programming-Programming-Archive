#include <iostream>
using namespace std;

int solve(string& s, string& t)
{
	int sptr = s.length() - 1;

	int ans = 0;
	while (sptr >= 0 && s[sptr] != t[1])
	{
		sptr--;
		ans++;
	}

	if (sptr < 0) return 1000;

	sptr--;

	while (sptr >= 0 && s[sptr] != t[0])
	{
		sptr--;
		ans++;
	}

	return sptr < 0 ? 1000 : ans;
}

void program()
{

    string s;

    cin >> s;

    int ans = 1000;
    string subseqs[] = { "00", "25", "50", "75" };

    for (auto e : subseqs)
			ans = min(ans, solve(s, e));

		cout << ans << '\n';


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