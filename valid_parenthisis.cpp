#include <iostream>
#include <vector>

using namespace std;

// std::string,find => finds the first occurance;
// stack => FIFO model;

bool	isValid_recursive(string s)
{
	if (s.size() == 0) 
		return true;

	if (s.find("()") != string::npos)
	{
		int index = s.find("()");
		s.replace(index, 2, "");
		return isValid_recursive(s);
	}
	else if (s.find("{}") != string::npos)
	{
		int index = s.find("{}");
		s.replace(index, 2, "");
		return isValid_recursive(s);
	}
	else if (s.find("[]") != string::npos)
	{
		int index = s.find("[]");
		s.replace(index, 2, "");
		return isValid_recursive(s);
	}
}

bool	isValid_stack(string s)
{
	if (s.size() == 0) return true ;
	if (s.size() == 1) return false ;

	int n = n.size;

	stack<char> st;

	if (s[0] == ')' || s[0] == '}' || s[0] == ']')
		return (false);
	else
		st.push[0];

	for (int i = 1; i < n; ++i)
	{
		if (s[0] == ')' || s[0] == '}' || s[0] == ']')
		{
			if (st.empty())
				return (false);
			else
			{
				if (st.top() == '{' && s[i] == '}' || st.top() == '(' && s[i] == ')' || st.top() == '[' && s[i] == ']')
					st.pop();
				else
					return false;
			}
		}
		else
			st.push(s[i]);
	}

	if (st.empty())
	 return true;
	else
	 return false
}

int		main(void)
{
	string data = "()()(){}[]";

	bool test = isValid_recursive(data);
	// int test2 = maximum_product_of_the_three_idea_2(data);


	cout << test << endl;
	// cout << test2 << endl;


	return (0);
}