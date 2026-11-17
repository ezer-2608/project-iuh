#include <stdio.h>

int main()
{
	int n, i, j, souoc, s;
	do
	{
		printf("Nhap n: ");
		scanf("%d", &n);
	} while (n <= 0 || n >= 50);
	s = 0;
	for (i = 2; i <= n – 1; i++)
	{
		for (int j = 1; j <= i; j++) {
        if (i % j == 0) {
            souc++;
        }
		if (souoc == 2)
			s = s + i;
	}
	printf("Tong cac so nt < %d la %d", n, s);
	return 0;
}

