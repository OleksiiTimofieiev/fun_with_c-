#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
	vector<pair<int, int> > nums2;

	for (int i = 0; i < nums.size(); ++i) // to save the initial positions
	{
		pair<int, int> tmp(nums[i], i);
		nums2.push_back(tmp);
	}

	sort(nums2.begin(), nums2.end());

	int i = 0;
	int j = nums2.size() - 1;

	while (i < j)
	{
		if ( (nums2[i].first + nums2[j].first) == target)
		{
			vector<int> t{nums2[i].second, nums2[j].second};
			return t;
		}
		else if ((nums2[i].first + nums2[j].first) > target)
			--j;
		else
			++i;
	}
}

int		main(void)
{
	vector<int> data = {1,2,3,4,4,8,7};

	vector<int> test = twoSum(data, 8);

	cout << test[0] << ' ' << test[1] << endl;

	return (0);
}