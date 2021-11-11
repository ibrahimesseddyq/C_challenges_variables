#include <stdio.h>

int main() {
    int lon;
    float cir;
    int lar;
    printf("entrer le longueur : ");
    scanf("%d",&lon);
    printf("entrer le largeur : ");    
    scanf("%d",&lar);
    cir=2*(lon+lar);
    printf("resultat est : %f",cir);
    
    return 0;
}
