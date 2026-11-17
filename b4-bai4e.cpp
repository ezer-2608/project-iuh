#include <stdio.h>

int main()
{
	int n, i, j, igt, s;

	printf("Nhap n: ");
	scanf("%d", &n);

	s = 0;	
	for (i = 1; i <= n; i++)
	{
		igt = 1;
		for (j = 2; j <= i; j++)
			igt = igt * j;
		s = s + igt;
	}
	printf("1! + 2! + ... + %d! = %d", n, s);
	return 0;
}

