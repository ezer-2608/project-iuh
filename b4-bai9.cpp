#include <stdio.h>

int main()
{
	int a, b, uscln;

	printf("Nhap a va b: ");
	scanf("%d %d", &a, &b);

	if (a < b) uscln = a;
	else uscln = b;

	while (a % uscln != 0 || b % uscln != 0)
		uscln--;

	printf("USCLN cua %d va %d la %d",a, b, uscln); 
	return 0;
}

