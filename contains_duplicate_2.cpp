#include <iostream>

bool	containsNearbeDublicate(std::vector<int> nums, int distance)
{
	int n = nums.size();

	unordered_map<int, int> h; // key = value, nomber = index

	for (int i = 0; i < n; ++i)
	{
		if (h.find(nums[i] != h.end)) // have found it before;
		{
			if (i - h[nums[i]] <= k)
				return (true);
			else
				h[nums[i]] = i;
		}
		else
		{
			h[nums[i]] = i;
		}
	}
	return (false);
}

int		main()
{


	return (0);
}