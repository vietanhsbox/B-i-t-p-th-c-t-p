#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
	float check1, check2, check3, ngay, thang, nam;
	check1 = scanf_s("%f", &ngay);
	check2 = scanf_s("%f", &thang);
	check3 = scanf_s("%f", &nam);
	if (check1 == 0 || check2 == 0 || check3 == 0 || ngay != (int)ngay || thang != (int)thang || nam != (int)nam || ngay<1 || ngay>31 || thang<1 || thang>12 || nam<1)
	{
		printf("khong hop le!");
		
	}
	else {
		if ((int)nam % 400 == 0 || ((int)nam % 4 == 0 && (int)nam % 100 != 0)) {
			if (thang = 2) {
				if (ngay >= 30) {
					printf("khong hop le!");
					
				}

			}
			if (thang == 4 || thang == 6 || thang == 7 || thang == 8 || thang == 9 || thang == 11) {
				ngay>30;
				printf("khong hop le!");
				
			}

			printf("nam nhuan");
			
		}
		
		else {
			if (thang == 2) {
				if (ngay >= 29) {
					printf("khong hop le!");
					
				}
			}
			else {
				printf("nam khong nhuan");
			}
		}

	}
	_getch();
	return 0;

}