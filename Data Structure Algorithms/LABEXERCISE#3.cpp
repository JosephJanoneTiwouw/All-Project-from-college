#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int bil;
	struct node* link;
}NODE;
NODE * newNode;
NODE * head = NULL;

void createNode ()
{
	newNode = (NODE*)malloc (sizeof (NODE));
	printf("Masukkan bilangan = ");
	scanf("%d",&newNode->bil);
	newNode->link = NULL;
	if (head==NULL)
	{
		head = newNode;
	}
	else
	{
		newNode->link = head;
		head = newNode;
	}
}
void displayNode()
{
	newNode= head;
	while (newNode!=NULL)
	{
		printf ("%4d",newNode->bil);
		newNode = newNode->link;
		
	}
}
void displaybil ()
{
	//4a. pilihan 1
printf("Bilangan kelipatan 5 =");
	while (newNode!=NULL)
	{
		if (newNode-> bil %5==0)
		{
			printf("%4d", newNode->bil);
		}
		newNode= newNode->link;
	}
}
void displayGanjil ()
{
	int sum=0;
	newNode = head;
    printf("Bilangan Ganjil dalam Linked List = ");
    while(newNode!=NULL)
	{
        if(newNode->bil%2!=0)
		{
        printf("%d ",newNode->bil);
        sum = sum + newNode->bil;
        }
        newNode = newNode->link;
    }
        printf("\nHasil Penjumlahan Semua Bilangan Ganjil = %d\n",sum);

}
void displayTerbesar ()
{
	int terBesar=0;
	newNode = head;
	while(newNode!=NULL)
	{
        if(terBesar<newNode->bil)
		{
            terBesar = newNode->bil;
        }
            newNode = newNode->link;
    }
    printf(" Tampilan bilagan = "); 
	displayNode();
    printf("\nBilangan Terbesar adalah = %d\n",terBesar);
}
void displayTerkecil()
{
	int terKecil=50;
	newNode = head;
	while(newNode!=NULL)
	{
        if(terKecil>newNode->bil)
		{
            terKecil = newNode->bil;
        }
        newNode = newNode->link;
    }
    printf(" Tampilan bilangan= "); 
	displayNode();
    printf("\nBilangan Terkecil adalah = %d\n",terKecil);
}
int main ()
{
	int jum, pilihan;
	//1. create 5 node
printf ("Masukkan jumlah bilangan =");
scanf ("%d", &jum);
for (int i=1;i<=jum;i++)
{
	
	createNode ();
}
	//Ulangi step 2 - 4 selama pilihan !=5
	//2. Tampilkan menu pilihan
	do
{
	printf ("\nPilihlah pilihan berikut = \n");
	printf ("1. Menampilkan semua bilangan kelipatan 5 \n");
	printf ("2. Menampilkan hasil penjumalahan semua bilangan ganjil \n");
	printf ("3. Menampilkan semua bilangan terbesar \n");
	printf ("4. Menampilkan semua bilangan terkecil \n");
	printf ("5. Keluar\n");
	printf ("Masukkan pilihan anda = ");
	scanf ("%d",&pilihan);
	if (pilihan ==1)
	displaybil();
	
	
	else if (pilihan ==2)
	displayGanjil();
	
	
	else if (pilihan ==3)
	displayTerbesar();


	else if (pilihan ==4)
	displayTerkecil();

	
}while (pilihan!=5);
}
