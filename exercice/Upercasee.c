#include<stdio.h>

int main(){
	char nom[30];
	int i;
	printf("Nom: ");
	scanf("%s",&nom);
	for(i=0;nom[i]!='\0';i++){
		if(nom[i]>='a' && nom[i]<='z')
			printf("%c",nom[i]-'a'+'A');
		else
			printf("%c",nom[i]);
	}
}

