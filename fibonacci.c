#include <stdio.h>

int    fibonacci_target(int n, int target)
{
	int    ret;

	ret = 0;
	if (n == target) {
		ret++;
	} else if ((n == 1 && target == 0) || (n == 0 && target == 1)) {
		return 0;
	} else {
		ret += fibonacci_target(n-1, target) + fibonacci_target(n-2, target);
	}
	return ret;
}

int    main()
{
	int    count;
	int    n;

	scanf("%d", &count);
	while (count)
	{
		scanf("%d", &n);
		printf("%d %d\n", fibonacci_target(n,0), fibonacci_target(n,1));
		count--;
	}
	return (0);
}
