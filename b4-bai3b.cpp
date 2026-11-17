#include <stdio.h>
#include <math.h>

int main(){
	int n, n_can_nguyen;

	printf("Nhap n: ");
	scanf("%d", &n);

	n_can_nguyen = int(sqrt(n));
	if (n_can_nguyen*n_can_nguyen == n)
		printf("%d la so CP.", n);
	else
		printf("%d khong la so CP.", n);
		
	return 0;
}

