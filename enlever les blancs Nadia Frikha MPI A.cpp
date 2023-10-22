//Ecriture d'un programme en C qui permet d'enlever les blancs d'une chaine de caractères 

#include<stdio.h>
#include<string.h>
int main(){
	int j=0;
	//declaration d'une chaine de caracteres 
	char c[]="Hello       World";
	char ch[j]; 
	for(int i=0; i<=strlen(c); i++){ //parcourir la chaine c
		if ((c[i]==' ')||(c[i]=='\n')||(c[i]=='\t')){ //tester si un caractere c[i] est un blanc
			if ((c[i-1]==' ')||(c[i]=='\n')||(c[i]=='\t')) //tester si un caractere c[i-1] qui precede c[i] est un blanc
				continue; //si vrai on n'insere pas le caractere c[i] dans la chaine ch et on passe au caractere qu le suit
			
			else{	
				ch[j]=c[i]; //si non on insere le caractere c[i] dans la chaine ch
				j++;		
			}
		}
		else{	
			ch[j]=c[i]; //si le caractere n'est pas un blanc, on l'insere dans ch
			j++;		
		}
	}
	printf("%s",ch);
}

	

	
