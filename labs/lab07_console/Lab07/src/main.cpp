#include <iostream>
#include "math.h"
#include <stdio.h>
using namespace std;


// Lab 07

// Вычисление значений функции
double func(double a) {
    double b;
    b = sin(a)/a;
    return b;
}

int main() {

    // Вычисление значений функции
    for (double i = 0; i <= 4.0; i += 0.4){
        if (i == 0) continue;
        std::cout << "Answer: " << func(i) << std::endl;
    }


    // Кредитные платежи
    setlocale(LC_ALL, "Russian");
    double percentSum = 0;

    double sum;
    printf("Введите изначальную сумму = ");
    scanf("%lf", &sum);
    int months;
    printf("Введите количество месяцев = ");
    scanf("%d", &months);
    int rate;
    printf("Введите процентную ставку = ");
    scanf("%d", &rate);

    printf("-------------------------------------------------\n");
    printf("        Долг        Процент        Платёж        \n");
    printf("-------------------------------------------------\n");

    double monthlyRate = double(rate)/double(months);
    double monthlyPay = sum/months;
    int month = 1;

    for (;;) {
        double percent = sum * (monthlyRate/100.00);
        percentSum += percent;
        double monthlyPayFull = monthlyPay + percent;

        printf("%d    %lf    %lf    %lf\n", month, sum, percent, monthlyPayFull);

        if (months == month) break;

        double nextSum = (sum + percent) - (monthlyPay + percent);
        sum = nextSum;
        month++;
    }

    printf("-------------------------------------------------\n");
    printf("Всего процентов: %lf", percentSum);

    //Числа Фибоначчи
    int num1 = 0;
    int num2 = 1;
    int MAX = 0;
    int N = 3;
    int S = 1;
    int preS = 1;
    int nextNum = 0;

    cin >> MAX;
    if (MAX == 0 || MAX == 1 || MAX == 2147483647) {

        cout << "Must be more than 1 and must be less than 2147483647 (int limit)";
        return(1);
    }
    
    for (; S <= MAX;) {
        nextNum = num1 + num2;
        preS += nextNum;
        
        if (preS > MAX) {
            cout << "Flag (Max > S) triggered" << endl;
            N--;
            break;
        }
        S += nextNum;
        N++;
        num1 = num2;
        num2 = nextNum;

    }
        cout <<  "N:" << N << " S:" << S;

}
