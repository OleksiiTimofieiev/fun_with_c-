#include <iostream>

using namespace std;

bool isAnagram(string s, string t) //n2
{
	if (s.size() != t.size())
		return false ;
	if (s == "" && t = "")
		return false ;

	if (t.size() == 0)
	{
		if (s.size() == 0)
			return (true);
		else
			return (false);
	}

	std::vector<bool> matched(t.size(), false);

	for (int i = 0; i < s.size(); ++i)
	{
		for (int j = 0; j < t.size(); ++j)
		{
			if (t[j] == s[i] && !matched[j])
			{
				matched[j] = true ;
				break ;
			}
		}
	}

	for (int i = 0; i < matched.size; ++i)
	{
		if (!matched[i])
			return false ;
	}
	return true;
}

bool isAnagram(string s, string t) //nlogn
{
	if (s.size() != t.size())
		return false ;

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	return s == t;
}

bool isAnagram(string s, string t) // O(n)
{
	unordered_map<char, int> H;

	for (int i = 0; i < s.size(); ++i)
	{
		H[s[i]]++;
	}

	for (int i = 0; i < t.size(); ++i)
	{
		H[t[i]]--;
	}
	for (auto elem : H)
	{
		if (elem.second != 0)
			return (false);
	}
	return true ;
}