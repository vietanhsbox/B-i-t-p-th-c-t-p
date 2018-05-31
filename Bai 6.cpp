
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
	int i, j;
	char s[500];

	void chuahoa()
	{
		
		i = 0;
		while (i<strlen(s))
		{
			if (s[i] == ' '&& s[i + 1] == ' ')
			{
				for (int j = i; j < strlen(s); j++)
					s[j] = s[j + 1];
				i--;
			}
			i++;
		}
		i = 0;
		while (s[0] == ' ') {
			for (int i = 0; i < strlen(s); i++)
				s[i] = s[i + 1];

		}
		while (s[strlen(s) - 1] == ' '&&s[strlen(s) - 1] == '\0');
		strlwr(s);
		s[0] == toupper(s[0]);
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == ' ')
				s[i] == toupper(s[i + 1]);
		}
	}
	int main()
	{
		printf("nhap vao xau:");
		gets_s(s);
		chuahoa();
		printf("sau chuyen hoa: %s", s);
		_getch();
		return 0;
	}