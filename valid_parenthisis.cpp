#include <iostream>
#include <vector>

using namespace std;

// std::string,find => finds the first occurance;

bool	isValid(string s)
{
	if (s.size() == 0) 
		return true;

	if (s.find("()") != string::npos)
	{
		int index = s.find("()");
		s.replace(index, 2, "");
		return isValid(s);
	}
	else if (s.find("{}") != string::npos)
	{
		int index = s.find("{}");
		s.replace(index, 2, "");
		return isValid(s);
	}
	else if (s.find("[]") != string::npos)
	{
		int index = s.find("[]");
		s.replace(index, 2, "");
		return isValid(s);
	}
}

int		main(void)
{
	string data = "()()(){}[]";

	bool test = isValid(data);
	// int test2 = maximum_product_of_the_three_idea_2(data);


	cout << test << endl;
	// cout << test2 << endl;


	return (0);
}