#include <stdio.h>
#include <stdlib.h>
//prototypes
void remplissage(int t[],int n);
void affichage(int t[],int n);
void insertion(int t[],int *n,int k);
void supression(int t[],int *n,int k);
void modification(int t[],int n,int k);
void tri_plus_petit_plus_grand(int t[],int n);
void tri_plus_grand_plus_petit(int t[],int n);
//main()
int main(){
	int t[20],n,o,k;
	printf("Donnez la taille du tableau: ");
	scanf("%d",&n);
	printf("\n\t\t\t=====Remplissage du tableau=====");
	remplissage(t,n);
	system("cls");
	printf("\n\t\t\t=====Affichage du tableau=====");
	affichage(t,n);
	do{
		printf("\n\t\t\t\t=====Menu=====");
		printf("\n\t\t\t1.Afficher le tableau");
		printf("\n\t\t\t2.Inserer un nombre");
		printf("\n\t\t\t3.Suprimer un nombre");
		printf("\n\t\t\t4.Modifier un nombre");
		printf("\n\t\t5.Trier du plus prtit au plus grand");
		printf("\n\t\t6.Trier du plus grands au plus petit");
		printf("\n\t\t\t7.Quitter le program\n");
		scanf("%d",&o);
		switch(o){
			case 1:{
				affichage(t,n);
				break;
			}
			case 2:{
				insertion(t,&n,k);
				break;
			}
			case 3:{
				supression(t,&n,k);
				break;
			}
			case 4:{
				modification(t,n,k);
				break;
			}
			case 5:{
				tri_plus_petit_plus_grand(t,n);
				break;
			}
			case 6:{
				tri_plus_grand_plus_petit(t,n);
				break;
			}
			case 7:{
				return 0;
				break;
			}
		}
	}while(o!=7);
	return 0;
}

//fonctions
void remplissage(int t[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("\nDonnez l\'element N�%d:",i+1);
		scanf("%d",&t[i]);
	}
}

void affichage(int t[],int n){
	int i;
	printf("\n");
	for(i=0;i<n;i++){
		printf("[%d]",t[i]);
	}
}

void insertion(int t[],int *n,int k){
	printf("Donnez la position de l\'insertion: ");
	scanf("%d",&k);
	int i=*n;
	while(i>=k-1){
		t[i+1]=t[i];
		i--;
	}
	(*n)++;
	printf("Donnez le nombre a inserer: ");
	scanf("%d",&t[k-1]);
}

void supression(int t[],int *n,int k){
	printf("Donnez la position du nombre a suprimer: ");
	scanf("%d",&k);
	int i=k;
	while(i<*n){
		t[i-1]=t[i];
		i++;
	}
	(*n)--;
}

void modification(int t[],int n,int k){
	printf("Donnez la position du nombre a modifier: ");
	scanf("%d",&k);
	printf("Donnez le nombre :");
	scanf("%d",&t[k-1]);
}

void tri_plus_petit_plus_grand(int t[],int n){
	int i,aux,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(t[i]>t[j]){
			 	aux=t[i];
			 	t[i]=t[j];
			 	t[j]=aux;
			 }
		}	
	}
}

void tri_plus_grand_plus_petit(int t[],int n){
	int i,j,aux;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(t[i]<t[j]){
				aux=t[i];
				t[i]=t[j];
				t[j]=aux;
			}
		}
	}
}


