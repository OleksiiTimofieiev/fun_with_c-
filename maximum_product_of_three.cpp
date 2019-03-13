#include <iostream>
#include <vector>

using namespace std;

int		maximum_product_of_the_three_idea_1(vector<int> & nums)
{
	sort(nums.begin(), nums.end());

	int n = nums.size();

	int p1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
	int	p2 = nums[0] * nums[1] * nums[n - 1];

	return max(p1,p2);
}

int		maximum_product_of_the_three_idea_2(vector<int> & nums)
// {
// 	int max1, max2, max3, min1. min2;


// 	return ;
// }

int		main(void)
{
	vector<int> data = {2,1,5,1,1,1,0};

	int test1 = maximum_product_of_the_three_idea_1(data);
	// int test2 = maximum_product_of_the_three_idea_2(data);


	cout << test1 << endl;
	// cout << test2 << endl;


	return (0);
}