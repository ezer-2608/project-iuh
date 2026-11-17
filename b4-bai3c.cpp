#include <stdio.h>

int main(){
	int n, i, souoc;

	printf("Nhap n: ");
	scanf("%d", &n);

	souoc = 0;
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			souoc++;

	if (souoc == 2)
		printf("%d la so nguyen to");
	else
		printf("%d ko la so nguyen to", n);
		
	return 0;
}

