#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Ukr");
	double x, y;
	double a = 12.5, b = 1.3;
	double c = 14.1, d = 2.7;
	double t1, t2;
	double ax;

	printf("Введіть x, y > ");
	scanf_s("%lf %lf", &x, &y);
	ax = a * x;
	t1 = (b * log(ax + b) / a + d * log(y * x + d) / y) / c;
	ax = sqrt((c - b) * (c + b)) * tan(ax);
	t2 = log((ax + b) / (ax - b)) / 2 / a / b;
	printf(" t1 = %lg \n ", t1);
	printf(" t2 = %lg \n ", t2);
	_getch();
	return 0;
}