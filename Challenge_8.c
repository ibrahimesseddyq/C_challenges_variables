#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int somme;
    float moyen;
    printf("Saisir a:");
    scanf("%d",&a);
    printf("Saisir b:");
    scanf("%d",&b);
    printf("Saisir c:");
    scanf("%d",&c);
    printf("Saisir d:");
    scanf("%d",&d);
    somme = a + b + c + d;
    moyen = somme/4;
    printf("somme : %d",somme);
    printf("moyen : %f",moyen);

    
}
