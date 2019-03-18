int	findKthLargest(vector<int> & nums, int k)
{
	int len = nums.size();
	
	sort(nums.begin(), nums.end());

	return (nums[n - k]);
}

int	findKthLargest(vector<int> & nums, int k)
{
	priority_queue<int, vector<int>, greater<int> > pq;

	for (int i = 0; i < nums.size(); i++)
	{
		if (pq.size() < k)
		{
			pq.push(nums[i]);
		}
		else
		{
			int min_elem = pq.top();
			
			if (min_elem < nums[i])
			{
				pq.pop();
				pq.push(nums[i])
			}

		}
	}
	return pq.top();
}