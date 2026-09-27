#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	printf("ЗАДАНИЕ 1\n");
	printf("123\n\n ");
	printf("ЗАДАНИЕ 2\n");
	printf("1\n2\n3\n\n ");
	printf("ЗАДАНИЕ 3\n");
	printf("1\n\t2\n\t\t3\n\n ");
	printf("ЗАДАНИЕ 4\n");
	printf("%1d\n%2d\n%3d\n%4d\n\n ", 1, 2, 3, 4);
	printf("ЗАДАНИЕ 5\n");
	printf("%10.3f\n\n ", 12.234657);
	printf("ЗАДАНИЕ 6\n");
	printf("%10.5f\n\n ", 12.234657);
	printf("ЗАДАНИЕ 7\n");
	printf("Остаток от деления %d на %d равен %d\n\n ", 5, 2, 5 % 2);
	printf("ЗАДАНИЕ 8\n");
	printf("деление %.0f на %.0f равно %.1f\n\n ", 7.0, 5.0, 7.0 / 5.0);
	printf("ЗАДАНИЕ 9\n");
	printf("умножение %.0f на %.0f равно %.0f\n\n ", 2000.0, 4.0, 2000.0 * 4.0);
	printf("ЗАДАНИЕ 10\n");
	printf("%d разделить на %d равно %d\n ", 5, 2000000, 5 / 2000000);
	printf("%f разделить на %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%g разделить на %g равно %g\n ", 5., 2000000., 5. / 2000000);
	printf("%e разделить на %e равно %e\n ", 5., 2000000., 5. / 2000000);
}
