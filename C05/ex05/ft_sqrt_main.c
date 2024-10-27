#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	index;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	index = 2;
	if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}

int    main(void)
{
	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 20286016, ft_sqrt(20286016));
	printf("sqrt of %d is %d\n", 1120795600, ft_sqrt(1120795600));
	printf("sqrt of %d is %d\n", 484440100, ft_sqrt(484440100));
	printf("sqrt of %d is %d\n", 1046643418, ft_sqrt(1046643418));
	printf("sqrt of %d is %d\n", 1944104464, ft_sqrt(1944104464));
	printf("sqrt of %d is %d\n", 231739964, ft_sqrt(231739964));
	printf("sqrt of %d is %d\n", 1454436, ft_sqrt(1454436));
	printf("sqrt of %d is %d\n", 1411303165, ft_sqrt(1411303165));
	printf("sqrt of %d is %d\n", 259564321, ft_sqrt(259564321));
	printf("sqrt of %d is %d\n", 416153106, ft_sqrt(416153106));
        return (0);
}

/*
sqrt of -2282 is 0
sqrt of 0 is 0
sqrt of 1 is 1
sqrt of 2 is 0
sqrt of 1640045925 is 0
sqrt of 2147395600 is 46340
sqrt of 2147483646 is 0
sqrt of 20286016 is 4504
sqrt of 1120795600 is 0
sqrt of 484440100 is 22010
sqrt of 1046643418 is 0
sqrt of 1944104464 is 44092
sqrt of 231739964 is 0
sqrt of 1454436 is 1206
sqrt of 1411303165 is 0
sqrt of 259564321 is 16111
sqrt of 416153106 is 0
*/