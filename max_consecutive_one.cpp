#include <iostream>
#include <vector>

using namespace std;

int		max_consecutive_one(vector<int> & nums)
{
	int	max_len = 0;
	int n = nums.size();
	int i = 0;

	while (i < n)
	{
		if (nums[i] == 1)
		{
			int current_len = 1;
			int r = i + 1;
			while (r < n && nums[r] == 1)
			{
				++r;
				++current_len;
			}
			i = r;
			max_len = max(max_len, current_len);
		}
		else
			++i;
	}
	return max_len;
}

int		main(void)
{
	vector<int> data = {1,1,1,1,1,1,0};

	int test = max_consecutive_one(data);

	cout << test << endl;

	return (0);
}