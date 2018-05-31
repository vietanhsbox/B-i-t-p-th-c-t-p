#include<conio.h>
#include<stdio.h>
int main() {
	int so, a, b, c, sosanh;
	scanf_s("%d", &so);
	if (so >= 100 && so <= 999) {

		c = so % 10;
		so = so / 10;
		b = so % 10;
		so = so / 10;
		a = so;
		if (a<b) {
			sosanh = a, a = b, b = sosanh;
		};
		if (a<c) {
			sosanh = a, a = c, c = sosanh;
		};
		if (b<c) {
			sosanh = b, b = c, c = sosanh;
		};
		printf("%d%d%d", a, b, c);
	}
	else {
		printf("nhap sai");
	}
	_getch();
	return 0;



}