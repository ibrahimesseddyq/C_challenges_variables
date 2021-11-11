#include <stdio.h>

int main()
{
    float km=0;
    float mile=0;
    float metre;
    printf("Entrer la distance en metre :");
    scanf("%f",&metre);
    km = metre/ 1000;
    mile = km * 1.609;
    printf("la distance en mile est : %f",mile);
}
