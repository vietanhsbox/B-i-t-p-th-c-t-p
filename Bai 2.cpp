#include<conio.h>
#include<stdio.h>
#include<string.h>
int main() {
	char chuoi[100];
	int i=0,a=0,b=0;
	int n = strlen(chuoi);
	printf("nhap chuoi: ");
	gets_s(chuoi);
	for (i = 0; i <= n - 1; i++) {
		if (chuoi[i] >= 97 && chuoi[i] <= 122) {
			a++;
		}
		if (chuoi[i] >= 65 && chuoi[i] <= 90){
			b++;
		}
	}
	printf("so ki tu viet hoa: %d \n", b);
	printf("so ki tu viet thuong: %d", a);
	_getch();
	return 0;

}
