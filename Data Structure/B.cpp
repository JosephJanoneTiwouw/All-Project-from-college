#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

struct node 
{
    int umur, tahunLahir;
    char nama[2];
    struct node *nextptr;
}*stnode;

void createNodeList(int n);
void displayList();

int main()
{
    int n;
    printf("\n");
	printf("-------------------------------------------------------------\n");
		
    printf("\nBanyak data pelanggan yang akan di input : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\nData Pelanggan : \n");
    printf("-------------------------------------------------------------\n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    char nama[30];
    int umur,tahunLahir;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf("Data tidak ada");
    }
    else
    {
		printf("Input Nama Pelanggan 1	: ");
        fflush(stdin);
        fgets(stnode -> nama, 2, stdin);
        printf("Input Umur pelanggan 1	: ");
        scanf("%d", &stnode -> umur);
        printf("Input Tahun Lahir Pelanggan 1	: ");
        scanf(" %d",&stnode -> tahunLahir);
        umur = stnode->umur;
        tahunLahir = stnode->tahunLahir;
        stnode->nextptr = NULL;
        tmp = stnode;

        for(int i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf("Data tidak ada");
                break;
            }
            else
            {
            	printf("Input Nama Pelanggan %d	: ",i);
                fflush(stdin);
                fgets(fnNode->nama, 2, stdin);
                printf("Input Umur Pelanggan %d	: ", i);
                scanf(" %d", &fnNode -> umur);
                printf("Input Tahun Lahir Pelanggan %d	: ",i);
                scanf(" %d",&fnNode-> tahunLahir);
                umur = fnNode->umur;
                tahunLahir = fnNode->tahunLahir;
                fnNode->nextptr = NULL;
 
                tmp->nextptr = fnNode;
                tmp = tmp->nextptr; 
            }
        }
    }
}
void displayList()
{
	int n;
    struct node *tmp;
        tmp = stnode;
        for(int i=0; i<n; i++)
        
        {
            printf("Nama	= %s\n", tmp -> nama);
            printf("Umur	= %d", tmp -> umur);
            printf("Tahun Lahir	= %d\n", tmp -> tahunLahir);
            printf("\n");
            tmp = tmp->nextptr;
        }
        tmp = stnode;
        printf("-------------------------------------------------------------\n");
        printf("Data Pelanggan Lansia");
		while(tmp->umur >= 60)
        {
        		printf("Nama	= %s\n", tmp -> nama);
            	printf("Umur	= %d", tmp -> umur);
            	printf("Tahun Lahir	= %d\n", tmp -> tahunLahir);
            	printf("\n");
            	tmp = tmp->nextptr;
			/*}
			else
			{
			printf("Tidak ada pelanggan Lansia");
			}*/
		}
}
