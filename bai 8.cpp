#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdint.h>
#include<ctype.h>
int main() {
	 char chuoi[100];
	printf("nhap xau: ");
	fgets(chuoi,100,stdin);
	int n = strlen(chuoi);
	for (int i = n - 1; i >= 0; i--) {
		putchar(chuoi[i]);
	}
	_getch();
	return 0;
	
}