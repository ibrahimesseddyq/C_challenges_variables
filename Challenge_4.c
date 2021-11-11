
#include <stdio.h>

int main()
{
    float km=0;
    float mile=0;
    float metre=0;
    printf("Entrer la distance en mile :");
    scanf("%f",&mile);
    km = mile * 1.609;
    metre = km*1000;
    
    printf("la distance en metre est : %f",metre);
}
