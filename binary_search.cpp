#include <iostream>
#include <vector>

bool	binarySearch(std::vector<int> haystack, int needle)
{
	int		left = 0;
	int		right = haystack.size() - 1;

	while ( left <= right )
	{
		int	mid = left + ((right - left) / 2);

		if (haystack[mid] == needle)
			return true ;
		else if ( needle < haystack[mid] )
			right = mid - 1;
		else
			left = mid + 1;
	}
	return false ;
}

int		main(void)
{
	std::vector<int> array = {1,2,3,4,5,6,7,8,9};

	bool found = binarySearch(array, 2);

	if (found)
		std::cout << "found\n" << std::endl;
	else
		std::cout << "not found" << std::endl;

	return (0);
}
