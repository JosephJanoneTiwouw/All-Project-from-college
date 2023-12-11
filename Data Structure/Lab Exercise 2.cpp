//Joseph Janone Tiwouw//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char nama[30];
	char jurusan [3];
	int umur;
	struct node* link;
}NODE;

NODE *nodePtr;
NODE *head=NULL;
NODE *temp;

void createNode (int jum){
	for (int i=0;i<jum;i++){
		nodePtr=(NODE*)malloc (sizeof(NODE));
		printf("===============\n");
		printf("Masukkan Nama =");fflush(stdin);
		gets(nodePtr->nama);
		printf("Masukkan Jurusan  (TI/SI)="); fflush(stdin);
		gets(nodePtr->jurusan);
		printf("Masukkan umur ="); fflush (stdin);
		scanf("%d",&nodePtr->umur);
		nodePtr->link=NULL;
		if(head==NULL){
			head=nodePtr;
		}else{
			temp=head;
			while(temp->link!=NULL){
				temp=temp->link;
			}
			temp->link=nodePtr;
		}
	}
}

void tampilkanALL(){
	temp=head;
	while (temp!=NULL){
		printf("===============\n");
		printf("Nama = %s\n",temp->nama);
		printf("Jurusan = %s\n",temp->jurusan);
		printf("Umur = %d\n",temp->umur);
		temp = temp->link;
	}
}
void tampilkanIT(){
	temp = head;
	while (temp!=NULL){
		if (strcmp(temp->jurusan,"TI")==0){
			printf("===============\n");
		printf ("Nama = %s\n",temp->nama);
		printf ("Jurusan = %s\n",temp->jurusan);
		printf ("Umur = %d\n",temp->umur);
	}
	temp = temp->link;
	}
}
void tampilkanSI(){
	temp = head;
	while (temp!=NULL){
		if (strcmp(temp->jurusan,"SI")==0){
		printf("===============\n");
		printf ("Nama = %s\n",temp->nama);
		printf ("Jurusan = %s\n",temp->jurusan);
		printf ("Umur = %d\n",temp->umur);
	}
	temp = temp->link;
	}
}
int main(){
	int jum,pilihan;
	printf("jumblah Siswa =");
	scanf("%d",&jum);
	createNode(jum);
	do{
			printf("==============================\n");
		printf ("1. Tampilkan semua informasi student\n");
		printf ("2. Tampilkan semua informasi student IT\n");
		printf ("3. Tampilkan semua informasi student SI\n");
		printf ("4. Keluar\n");
		printf ("Masukkan pilihan anda (1/2/3):");
		scanf ("%d",&pilihan);
		switch(pilihan){
			case 1 : tampilkanALL();
			break;
			case 2 : tampilkanIT();
			break;
			case 3 : tampilkanSI();
			break;
		}
		
	}while (pilihan!=4);
	printf("Thankyou");
}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node{
	char nama[30];
	char jurusan ; 
	char program concentration(SI/TI) ;
	int  umur ;
	float GPA ;
	struct node*link ;
}NODE;

NODE *nodePtr ;
NODE *head =NULL;
NODE *temp;
void createNode (int jum){
	for ( i=0; i<jum; i++);
	//a. Allocate Memory
	nodePtr=(NODE*)malloc (sizeof (NODE));
	//b. Fill Value;
	printf ("Masukkan nama = ");
	gets (nodePtr->nama);
	printf ("Masukkan umur = ");
	gets (nodePtr->umur);
	printf ("Masukkan GPA = ");
	gets (nodePtr->GPA);
	printf ("Program Concentration (SI/TI)");
	scanf (nodePtr->Program Concentration);
	nodePtr->link = NULL;
	//c. Set Link
	if (Head = NULL){
		head = nodePtr;
	}else{ 
	    temp = Head;
	    while (temp->link!=NULL){
	        temp = temp->link;
		 }
	    temp->link= nodePtr;
	}	
    }

}
void tampilkan all()
{
	temp = head;
	while (temp!=NULL){
		printf ("Nama = %s\n",temp->nama);
		printf ("Umur = %s\n",temp->umur);
		printf ("GPA = %s\n",temp->GPA);
		printf ("Program Concentration = %s\n",temp->Program Concentration);
		temp=  temp->link;
	}
}
void tampilkan TI()
{
	temp = head;
	if 
	    printf ("Nama = %s\n",temp->nama);
		printf ("Umur = %s\n",temp->umur);
		printf ("GPA = %s\n",temp->GPA);
		printf ("Program Concentration = %s\n",temp->Program Concentration);
    }

    }
}
int main  (){
	
	int jum, pilihan;
	
	//1. Minta input jumlah mahasiswa
	printf ("Jumlah siswa =");
	scanf ("%d",&jum);
	//2. create node
	createNode(jum);
	//3. tampilkan menu
	do{
		printf ("1. Tampilkan semua informasi student SI yang berumur 17 tahun\n");
		printf ("2. Tampilkan semua informasi student TI dengan GPA >=3.5 \n");
		printf ("3. exit\n");
		printf ("Masukkan pilihan anda (1\2\3):");
		scanf ("%d",&pilihan);
		//cek pilihan user
		switch (pilihan){
			case 1 :     tampilkanAll;
				             break
			case 2 :     tampilkanTI;
			                 break
		 }     
	}while (pilihan !=3);
	printf ("...Thank You for using this Program...")
}
