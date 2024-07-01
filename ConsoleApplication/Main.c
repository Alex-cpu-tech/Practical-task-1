#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double t1, t2, t3;

    // Виводимо повідомлення для користувача
    printf("Введіть три значення: ");

    // Зчитуємо вхідні дані
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    // Обчислюємо сумарну продуктивність
    double total_rate = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);

    // Знаходимо час, за який гості разом з'їдять пиріг
    double total_time = 1.0 / total_rate;

    // Виводимо результат, округлений до 2 знаків після коми
    printf("%.2f\n", total_time);

    return 0;
}
