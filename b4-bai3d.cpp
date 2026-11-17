#include <stdio.h>

int main(){
	int n, min, max, donvi;
	printf("Nhap n: ");
	scanf("%d", &n);
	min = n % 10;
	max = min;
	n = n / 10;

	while (n>0)
	{
		donvi = n % 10;
		n = n / 10;
		if (donvi < min) min = donvi;
		if (donvi > max) max = donvi;
	}
	printf("So NN = %d, So LN = %d", min, max);
	return 0;
}

