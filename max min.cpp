#include <stdio.h>

int main(){
	int a, b;
	
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so nguyen thu hai: ");
	scanf("%d", &b);
	
	int max = ( a > b ) ? a : b;
	int min = ( a < b ) ? a : b;
	
	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
	return 0;
}