#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    int n = 4;
    int l = 13333;
    int k = 4;
    int m = 6;

    printf("Дано:\n%11d\n%11d\nОтвет:\n%+05d.%0*d\n", n, l, n / l, m, (n % l) * 1000000 / l);

    return 0;
}