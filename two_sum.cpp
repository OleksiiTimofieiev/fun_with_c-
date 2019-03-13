#include <iostream>
#include <vector>

using namespace std;



int		main(void)
{
	vector<int> data = {1,2,3,4,4,8,7};

	vector<int> test = twoSum(data, 8);

	cout << test[0] << ' ' << test[1] << endl;

	return (0);
}