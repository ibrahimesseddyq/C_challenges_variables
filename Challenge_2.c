#include<stdio.h>

int main()
{
    float C;
    float F=0;
    printf("Entrer la temperature en celsius : ");
    scanf("%f",&C);
    F =(C * 1.8) + 32;
    printf("la degree en Fahreinheit est %f",F);
    
}
