#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char nom[50],prenom[50];
    unsigned int num,mat;
}Etu;

void ajouter(Etu e[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Etudiant No%d\n",i+1);
        printf("Nom :");
        scanf("%s",&e[i].nom);
        printf("Prenom :");
        scanf("%s",&e[i].prenom);
        printf("Matricule :");
        scanf("%ud",&e[i].mat);
        printf("Numero :");
        scanf("%ud",&e[i].num);
    }
}

void affichage(Etu e[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Etudiant No%d\n",i+1);
        printf("Nom :%s\n",e[i].nom);
        printf("Prenom :%s\n",e[i].prenom);
        printf("Matricule :%ud\n",e[i].mat);
        printf("Numero :%ud\n",e[i].mat);
    }
}


int main(){
    Etu e[10];
    int n;
    do{
        if(n<10 || n>1){
            printf("Le nombre d\'etudiant doit etre compris entre 1 et 10.\n");
        }
        printf("Nombre d\'etudiant :");
        scanf("%d",&n);
    }while(n>10 || n<1);
    printf("\t\t\t===========Ajout d\'etudiant=============\n");
    ajouter(e,n); 
    system("cls");
    printf("\t\t\t===========Affichage d\'etudiant=============\n");
    affichage(e,n);                                
}
