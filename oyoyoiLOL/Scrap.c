#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int s;
	printf("Введите год рождения>> ");
	scanf("%d", &s);
	if (s <= 26)
	{
		s += 2000;
	}
	if (s > 26 && s <= 99)
	{
		s += 1900;
	}
	printf("ваш возраст: %d лет", 2026 - s);
}