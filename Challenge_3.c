#include <stdio.h>

int main()
{
    int km=0;
    int mile=0;
    printf("Entrer la distance en km :");
    scanf("%d",&km);
    mile = km * 1.609;
    printf("la distance en mile est : %d",mile);
}
