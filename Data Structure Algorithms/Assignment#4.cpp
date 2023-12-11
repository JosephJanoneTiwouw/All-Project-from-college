#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node*link;
}NODE;
NODE*nodePtr;
NODE * temp;
NODE * head=NULL;
void createNode(){
    nodePtr=(NODE*)malloc (sizeof (NODE));
	printf ("Enter Value =");
	scanf ("%d",&nodePtr->data);
	nodePtr->link= NULL;
    if (head == NULL){
        head = nodePtr;
    }
    else {
        temp = head;
        while(temp->link!=NULL){
            temp = temp->link;
        }
            temp -> link = nodePtr;
    }
}
int kelima (){
  nodePtr = head;
printf ("\nMultiples of 5 number:\n");
while (nodePtr != NULL){
if (nodePtr->data %5 == 0){
    printf("%4d", nodePtr -> data);
}
else {
    printf (" ");   
}
nodePtr = nodePtr -> link;
}  
}
int between (){
nodePtr = head;
printf ("\nNumber between 5 and 10:\n");
while (nodePtr != NULL){
if (nodePtr ->data >5 && nodePtr ->data <10){
    printf("%4d", nodePtr -> data);
}
else {
    printf ("  ");   
}
nodePtr = nodePtr -> link;
}  
}
void display(){
    printf("\nListed number: \n");
    temp = head;
while (temp!=NULL){
    printf("%4d", temp->data);
    temp = temp->link;
}
}
int main (){
int numNodes;
printf ("Input Nodes : ");
scanf ("%d", &numNodes);
for (int i = 1; i <= numNodes; i++)
{
    createNode();
}
    display();
     kelima();
     between();
}
