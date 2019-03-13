#include <iostream>
#include <vector>

using namespace std;

int		maximum_product_of_the_three(vector<int> & nums)
{
	sort(nums.begin(), nums.end());

	int n = nums.size();

	int p1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
	int	p2 = nums[0] * nums[1] * nums[n - 1];

	return max(p1,p2);
}

int		main(void)
{
	vector<int> data = {2,1,5,1,1,1,0};

	int test = maximum_product_of_the_three(data);

	cout << test << endl;

	return (0);
}