#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int bilanganBulat;
	
	float desimal;
	
	struct node* link;
		
}NODE;

NODE * nodePtr;
int main (){
	nodePtr = (NODE*) malloc (sizeof (NODE));
	printf("Masukkan nilai= ");
	scanf("%d",&nodePtr->bilanganBulat);
	
	nodePtr->link = NULL;
	printf("Bilangan Bulat= %d\n\n", nodePtr->bilanganBulat);
	
	nodePtr = (NODE*) malloc (sizeof (NODE));
	printf("Masukkan nilai= ");
	scanf("%f",&nodePtr->desimal);
	
	nodePtr->link = NULL;
	printf("Bilangan Desimal= %f\n", nodePtr->desimal);
}
