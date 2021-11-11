
#include <stdio.h>

int main()
{
    int km=0;
    int mile=0;
    int metre=0;
    printf("Entrer la distance en mile :");
    scanf("%d",&mile);
    km = mile / 1.609;
    metre = km*1000;
    
    printf("la distance en metre est : %d",metre);
}
