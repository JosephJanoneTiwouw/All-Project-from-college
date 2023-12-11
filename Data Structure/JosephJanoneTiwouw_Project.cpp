//Nama File         : FINAL PROJECT                           
//Nama       		: Joseph Janone Tiwouw                              
//Pararel           : A                                                                                  
//Desc              : Final Project

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

typedef struct node
{
    char judul[25], penyanyi[25], pengarang[25], durasi[10];
    int track;
    struct node *link;
}STACK_NODE;

typedef struct
{
    int bnm;
    STACK_NODE *qwert;
}STACK_first;

STACK_first *create()
{
    STACK_first *asd;
    asd = (STACK_first*)malloc (sizeof(STACK_first));
    asd -> bnm = 0;
    asd -> qwert = NULL;

    return asd;
}

STACK_NODE *NextD;

void push(STACK_first *first, int i)
{
    int judul[25], pengarang[25], penyanyi[25];
    NextD = (STACK_NODE*)malloc(sizeof(STACK_NODE));
    printf("Input Judul Lagu      = ",i);
    fflush(stdin);
    fgets(NextD -> judul,25,stdin);
    printf("Input Nama Penyanyi   = ");
    fflush(stdin);
    fgets(NextD -> penyanyi,25,stdin);
    printf("Input Nama Pengarang  = ");
    fflush(stdin);
    fgets(NextD -> pengarang,25,stdin);
    printf("Input Durasi          = ");
    fgets(NextD -> durasi,10,stdin);
    fflush(stdin);
    printf("Input No track        = ");
    scanf("%d",&NextD -> track);
    printf("\n");
    NextD -> link = first -> qwert;
    first -> qwert = NextD;
    (first -> bnm) ++;
}

void pop(STACK_first *first)
{
    first -> qwert = first -> qwert -> link;
    first -> bnm --;
}

void output(STACK_first *first)
{
    while(first -> bnm != 0)
    {
        printf("Judul        = %s",first -> qwert -> judul);
        printf("Penyanyi     = %s",first -> qwert -> penyanyi);
        printf("Pengarang    = %s",first -> qwert -> pengarang);
        printf("Durasi       = %s",first -> qwert -> durasi);
        printf("No Track     = %d\n",first -> qwert -> track);
        printf("\n");
        first -> qwert = first -> qwert -> link;
        first -> bnm --;
    }
}
void display1(STACK_first *first)
{
    while(first -> bnm != 0)
    {
        printf("Judul Lagu        = %s",first -> qwert -> judul);
        printf("Nama Penyanyi        = %s",first -> qwert -> penyanyi);
        printf("Nama Pengarang       = %s",first -> qwert -> pengarang);
        printf("Durasi        = %s",first -> qwert -> durasi);
        printf("NoTrack = %d",first -> qwert -> track);
        printf("\n");
        first -> qwert = first -> qwert -> link;
        first -> bnm --;
    }
}

int main()
{
    STACK_first *first;
    int a,z;
    first = create();
    do
    {
        printf("1. Push New Data Music\n");
        printf("2. Display Current Music Playing\n");
        printf("3. Next Music\n");
        printf("4. Previous Music\n");
        printf("5. Display All Music\n");
        printf("6. Exit\n");
        printf("masukkan pilihan =");
        scanf("%d",&z);

        if(z == 1)
        {
            printf("Input berapa banyak data yang akan di push = ");
            scanf("%d",&a);

            for(int i = 1; i <= a; i++)
            {
                push(first,i);
            }
        }

        else if (z == 2)
        {
            printf("\nDisplay current music playing\n");
            printf("=======================================================");
            printf("\n");
            output(first);
            printf("=======================================================");
            printf("\n");
        }
		else if(z == 3)
        {
            pop(first);
        }
        //first -> qwert = first -> qwert -> link;
        //first -> bnm --;
        else if (z == 5)
        {
        	display1(first);
		}

    }while (z != 6);
    {
        printf(" Exit ");
    }
}
