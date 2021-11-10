
#include <stdio.h>

int main()
{
    char nom[10];
    char num[10];
    char prenom[10];
    char sex[10];
    int age = 0;
    printf("Entrer votre nom :");
    scanf("%s",nom);
    printf("Entrer votre prenom :");
    scanf("%s",prenom);   
    printf("Entrer votre numero :");
    scanf("%s",num);
    printf("Entrer votre sex :");
    scanf("%s",sex);
    printf("Entrer votre age :");
    scanf("%d",&age);
    
    printf("tu t'appele %s %s ,votre numero est %s ,tu est un %s,agee de %d\n",prenom,nom,num,sex,age);
    
    

    return 0;
}
