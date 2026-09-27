#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    float X = 7.0f;
    float S = 48.0f;
    float L = 90.0f;

    float length = S * 100.0f / L;
    float cost = length * X;

    printf("Задача:\n");
    printf("Стоимость погонного метра красного шёлка стоит %.0f золотых\n", X);
    printf("Сколько заплатил Грей за ткань для своей бригантины\n");
    printf("если общая площадь парусов на ней %.0f м^2,\n", S);
    printf("а ширина ткани в рулоне %.0f см\n\n", L);

    printf("Решение:\n");
    printf("1) Ширина ткани в метрах: %.0f см / 100 = %.2f м\n", L, L / 100.0f);
    printf("2) Длина ткани: %.0f м^2 / %.2f м = %.2f м\n", S, L / 100.0f, length);
    printf("3) Стоимость: %.2f м * %.0f золотых = %.2f золотых\n\n", length, X, cost);

    printf("Ответ: Грей заплатил %.2f золотых за ткань для парусов бригантины\n", cost);

    return 0;
}