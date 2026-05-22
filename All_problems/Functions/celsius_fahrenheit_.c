#include <stdio.h>
void c_to_f(int c);
void f_to_c(int f);

int main()
{
    int cel, fah;
    printf("Enter celsius : ");
    scanf("%d", &cel);

    printf("Enter fahrenheit : ");
    scanf("%d", &fah);

    c_to_f(cel);
    f_to_c(fah);

    return 0;
}
void c_to_f(int c)
{
    float f;

    f = c * (9.0 / 5.0) + 32;
    printf("\nCelsius to fahrenheit %.2f\n", f);
}
void f_to_c(int f)
{
    float c;

    c = (f - 32) * 5 / 9;
    printf("Fahrenheit to celsius %.2f\n", c);
}