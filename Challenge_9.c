#include <stdio.h>
#include <math.h>
int main()
{
    float x1;
    float x2;
    float y1;
    float y2;
    float distance;
    printf("Saisir x1:");
    scanf("%f",&x1);
    printf("Saisir x2:");
    scanf("%f",&x2);
    printf("Saisir y1:");
    scanf("%f",&y1);
    printf("Saisir y2:");
    scanf("%f",&y2);
    distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("Distance : %f",distance);
    
}
