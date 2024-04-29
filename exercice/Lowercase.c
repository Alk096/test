#include<stdio.h>
int main(){
	char nom[30];
	int i;
	printf("Nom: ");
	scanf("%s",&nom);
	for(i=0;nom[i]!='\0';i++){
		if(nom[i]>='A' && nom[i]<='Z')
			printf("%c",nom[i]-'A'+'a');
		else
			printf("%c",nom[i]);
	}
}
