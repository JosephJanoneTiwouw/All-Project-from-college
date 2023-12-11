//Nama File         : FINAL TEST                            
//Nama              : Joseph Janone Tiwouw          

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

typedef struct node {
	char nama[30], NIM[30], jurusan[30];
	int no_antrian;
	struct node* next; 
}NODE;

NODE *Front = NULL; 
NODE *Rear = NULL; 
void enqueue (){
	NODE * newNode;
	
	newNode=(NODE*)malloc(sizeof (NODE));
	printf ("Masukkan Nama ="); fflush(stdin);
	gets (newNode->nama);
	printf ("Masukkan NIM =");fflush(stdin);
	gets (newNode->NIM);
	printf ("Masukkan jurusan =");fflush(stdin);
	gets (newNode->jurusan);
	printf("Input Nomor Antrian        = ");
    scanf("%d",&newNode -> no_antrian);
	newNode->next = NULL;
	printf("\n");
	if (Rear == NULL){
		Front = Rear = newNode;
		Rear->next = Front;
	}else {
		Rear->next = newNode;
		Rear = newNode;
		Rear->next = Front;
	}
	printf ("Data telah berhasil ditambahkan dalam antrian....\n\n");
}	       
void dequeue (){
	
	NODE *temp= Front;
	if (Front == NULL && Rear == NULL){ 
		printf ("Queue Kosong\n");
	}
	else if (Front == Rear){
		Front = Rear = NULL;
		free (temp);
	}else{
		Front = Front->next;
		Rear->next = Front;
		free (temp);
	}
	printf ("Data telah selesai diremove...\n");
}
void display (){
	NODE *temp = Front;
	if (temp==NULL){
		printf ("Data antrian kosong....\n");
	}
	else{
		do {
			printf ("Nama = %s\n",temp->nama);
			printf ("NIM = %s\n",temp->NIM);
			printf ("Jurusan = %s\n\n",temp->jurusan);
			printf ("Nomor Antrian = %d\n\n",temp->no_antrian);
			temp= temp->next;
		}while (temp!=Rear->next);
	}
}    
int main (){
	
	int pilihan;
do{
	
	printf ("1. Tambah Antrian Baru dan menampilkan nomor antrian\n");
	printf ("2. Hapus antrian dan tampilkan informasi antrian paling belakang\n");
	printf ("3. Tampilkan semua data antrian\n");
	printf ("4. Exit\n");
	printf ("Masukkan pilihan anda =\n\n");
	scanf ("%d",&pilihan);
	if (pilihan==1){
		enqueue();
	}else if (pilihan==2){
		dequeue (); 
	}else if (pilihan==3){
		display();
	}
}while (pilihan!=4);
printf ("Thank you for using this program\n");
}
               
                                  

