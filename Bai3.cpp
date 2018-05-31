#include<conio.h>
#include<stdio.h>
int main() {
	int n;
	float i, j, tien;
	printf("nhap so m:");
	scanf_s("%d", &n);
	i = (float)1500 / 200;
	j = (float)(1500 * 1000) / 200;
	j = (float)(j + 8000) / 1000;

	if (n <= 1000 && n>0) {
		printf("so tien phai tra: 10000");

	}
	if (n>1000 && n <= 29999) {
		tien = 10000 + i * (n - 1000);
		printf("%.f", tien);
	}
	if (n >= 30000) {
		tien = 10000 + 29000*i+(30000-n)*j;
		printf("%.f", tien);
	}
	_getch();
	return 0;
}