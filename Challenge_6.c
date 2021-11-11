#include <stdio.h>
int main()
{
    float C;
    float F=0;
    printf("Entrer la temperature en Fahrenheit : ");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("la temperature en Celsius est %f",C);
}
