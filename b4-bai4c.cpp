#include <stdio.h>

int main()
{
	int n, i;
	float s;

	printf("Nhap n: ");
	scanf("%d", &n);

	s = 0;	
	for (i = 1; i <= n; i++)
		s = s + 1.0/i;

	printf("1 + 1/2 + ... + 1/%d = %f", n, s);
	return 0;
}

