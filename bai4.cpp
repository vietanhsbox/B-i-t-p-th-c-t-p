#include<conio.h>
#include<stdio.h>

int main() {
	int n, i, j;
	printf("nhap chieu cao tam giac:\t");
	scanf_s("%d", &n);
	printf("\n");
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf("  ");
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("* ");

		}
		printf("\n");

	}
	_getch();
	return 0;
}