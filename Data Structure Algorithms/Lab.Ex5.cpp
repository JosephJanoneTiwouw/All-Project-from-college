#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node {
    char name[20];
    char jurusan[20];
    int nim;
    float gpa;
    struct node*link;
}NODE;
NODE*nodePtr;
NODE * temp;
NODE * head=NULL;
NODE *nextNode;
NODE *next;
NODE *previous;
void createNode(){
    nodePtr=(NODE*)malloc (sizeof (NODE));
	printf ("\nEnter Student name =");
	fflush(stdin);
	gets(nodePtr->name); 
    printf ("Enter Student major =");
    fflush(stdin);
	gets(nodePtr->jurusan);
    printf("Enter student NIM =");
    scanf("%d", &nodePtr -> nim);
    printf("Enter student GPA =");
    scanf("%f", &nodePtr -> gpa);
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
void randominsert(){
    int posisi;
        printf("insert position : ");
        scanf("%d",&posisi);     
        nodePtr = (NODE*) malloc (sizeof (NODE));
        printf("Studen's name : ");
        fflush(stdin);
        gets(nodePtr->name);
        printf("Studen's Major : ");
        fflush(stdin);
        gets(nodePtr->jurusan);
        printf("Student's NIM : ");
        scanf("%d", &nodePtr -> nim);
        printf("Student's Gpa : ");
        fflush(stdin);
        scanf("%f", &nodePtr -> gpa);
        nodePtr->link = NULL;
        
        temp = head;
        for(int i=1 ; i<posisi-1 ; i++){
            temp = temp->link;
        }
        nodePtr->link = temp->link;
        temp->link= nodePtr;
}
void randomdelete(){
    int posisi;
        printf("Delete Position : ");
        scanf("%d",&posisi);
        temp = head;
        for (int i=1;i<posisi-1;i++){
            temp = temp->link;
        }
        next = temp->link;
        temp->link = next->link;
        free (next);
}
void Searchnim(){
    int search;
        printf("Search NIM = ");
        scanf("%d", &search);
        temp = head;
        while (temp!=NULL){
            if (temp->nim == search){
            printf("\nName    = %s\n",temp->name);
            printf("Major     = %s\n",temp->jurusan);
            printf("NIM       = %d\n",temp->nim);
            printf("GPA       = %f\n",temp->gpa);
            }
            temp = temp->link;
        }
}
void Searchname(){
    char search[20];
        printf("Search Name = ");
        fflush(stdin);
        gets(search);
        temp = head;
        while (temp!=NULL){
            if (strcmp (temp->name, search)==0){
            printf("\nName    = %s\n",temp->name);
            printf("Major     = %s\n",temp->jurusan);
            printf("NIM       = %d\n",temp->nim);
            printf("GPA       = %f\n",temp->gpa);
            }
            temp = temp->link;
        }
}
void SearchGPA(){
    float search;
        printf("Search GPA = ");
        scanf("%d", &search);
        temp = head;
        while (temp!=NULL){
            if (temp->gpa == search){
            printf("\nName    = %s\n",temp->name);
            printf("Major     = %s\n",temp->jurusan);
            printf("NIM       = %d\n",temp->nim);
            printf("GPA       = %f\n",temp->gpa);
            }
            temp = temp->link;
        }
}
void display(){
    temp = head;   
while (temp!=NULL){  
    printf("\nName : %s",temp->name);
     printf("Major : %s",temp->jurusan);
     printf("\nNIM : %d\n",temp->nim);
    temp = temp->link;
}
}
int main (){
    int jumNode, pilihan, ps1, ps2, ps3;
    printf ("Enter student number = ");
    scanf ("%d", &jumNode);
    for (int i=1;i<=jumNode;i++){
        createNode();
    }
    do
	{
		printf ("\n======== MENU =======\n");
		printf ("1. Insert student's data\n");
		printf ("2. Delete student's data\n");
		printf ("3. Display data\n");
		printf ("4. search\n");
        printf ("5. Exit\n");
		printf ("Enter your choosen number =");
		scanf ("%d",&pilihan);
		if (pilihan ==1){
            randominsert();
		}
        else if (pilihan ==2){
                randomdelete();
            }
        else if (pilihan ==3){
            printf("Displaying Information : \n");
			display();
		}
       else if (pilihan == 4){
            printf("1. Search data by NIM\n2. Search data by Name\n3. Search by GPA");
            printf("Input your choice :");
            scanf ("%d",&ps3);
            if (ps3 == 1){
                Searchnim();
            }
            else if (ps3 == 2){
                Searchname();
            }
            else if (ps3 == 3){
                SearchGPA();
            }
        }
	}while (pilihan!=5);
	printf ("Thank you");
	
    }
