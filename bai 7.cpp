#include<conio.h>
#include<stdio.h>
int main() {
	int x, y, a, b;

	do
	{
		printf("Nhap a,b = ");
		scanf_s("%d%d", &a, &b);
	}
	while (a <= 0 || b <= 0);
	x = a;
	y = b;

	while (a != b)

	{

		if (a>b)

			a -= b;

		else

			b -= a;

	}

	printf("Uoc chung lon nhat la %d", a);

	printf("\nBoi chung nho nhat la %d", (x*y) / a);
	_getch();
	return 0;



}

	

	