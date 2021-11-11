#include<stdio.h>

int main()
{
    float C;
    float F=0;
    printf("Entrer la temperature en Fahrenheit : ");
    scanf("%f",&F);
    C=(F-32)/1.8;
    if(C>=0 && C<15)
    	printf("froid");
    else if(C<0)
    	printf("tres froid");
    else if(C<30 && C>=15)
    	printf("chaud");
    else
    	printf("tres chaud");
    
}
