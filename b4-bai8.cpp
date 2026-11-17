#include <stdio.h>

int main()
{
	int n, i, donvi, chuc;
	
	printf("Cac so thoa yeu cau la: ");
	for (i = 10; i <= 99; i++)
	{
		donvi = i % 10;
		chuc = i / 10;
		if (chuc*donvi == 2*(chuc + donvi))
			printf("%d", i);
	}
	return 0;
}

