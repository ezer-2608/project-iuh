#include <stdio.h>

int main() {
	int n, sogoc, sodao, donvi;
	printf("Nhap n: ");
	scanf("%d", &n);

	sogoc = n; sodao = 0;
	while (sogoc > 0)
	{
		donvi = sogoc % 10;
		sodao = sodao*10 + donvi;
		sogoc = sogoc / 10;
	}
	if (sodao == n) printf("doi xung");
	else printf("Khong doi xung");
	
	return 0;
}

