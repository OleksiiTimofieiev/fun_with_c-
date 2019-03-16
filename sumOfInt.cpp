#include <iostream>

int addNums(int n) {
    int res = 0;
    int i = 0;
    
    while (i <= n)
        res = res + i++;
    return (res);
    
}

int 	main()
{
	int res = addNums(10);

	std::cout << res << std::endl;

	return (0);
}