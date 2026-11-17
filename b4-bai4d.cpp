#include <stdio.h>

int main()
{
	int n, i, s;

	printf("Nhap n: ");
	scanf("%d", &n);

	s = 1;	
	for (i = 2; i <= n; i++)
		s = s * i;

	printf("%d! = %d", n, s);
	return 0;
}
