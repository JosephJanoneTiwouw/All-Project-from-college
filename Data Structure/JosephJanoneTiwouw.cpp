#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Mahasiswa{
	char jurusan[50];
	char nama[50];
	float gpa;
	char darah;
	struct node*link;
};

struct Elemen{
	Mahasiswa mhs;
	Elemen *next;
};

struct List{
	Elemen *first;
	Elemen *last;
};

void addFirst(char jurusan[], char nama[], float gpa, char darah, List *L);
void addAfter(Elemen *prev, char jurusan[], char nama[], float gpa, char darah, List *L);
void showData(List *L);

Elemen *searchData(char darah, List *L);
Mahasiswa inputMahasiswa();
char *searchDarah();

int main(){
	char option;
	
	List L;
	L.first = NULL;
	
	Mahasiswa data;
	Elemen *prev;
	
	int menu = 0;
	int pos = 0;
	
	do{
		system("cls");
		printf("+++ LINKED LIST +++\n");
		printf("1. Menampilkan Semua data mahasiswa FIK\n");
		printf("2. Menampilkan Data mahasiswa FIK dengan golongan darah AB\n");
		printf("3. Menampilkan Data mahasiswa jurusan SI dengan nilai rata-rata tertinggi\n");
		printf("4. Keluar\n");
		
		printf("Pilih Menu : ");
		scanf("%d", &menu);
//				fflush(stdin)

	switch(menu){
			case 1:
			showData(&L);
				break;
			case 2:
				prev = searchData(searchDarah, &L);
				if(prev != NULL){
				}
			case 3: 
				printf ("Masukkan GPA ="); fflush(stdin);
				scanf ("%f",&nodePtr->gpa);
				
			case 4:
				printf("Keluar");
				break;	
				
			default:
				printf("Invalid Input!!");
				break;	
		}
		printf("\n");
		
	   printf("Press any key to continue…\n");
	   getch();
	
	}while(menu!=9);
	
	return 0;
}

void addFirst(char jurusan[], char nama[], float gpa, char darah, List *L){
	Elemen *baru = new Elemen;
	
	strcpy(baru->mhs.jurusan, jurusan);
	strcpy(baru->mhs.nama, nama);
	strcpy(baru->mhs.gpa, gpa);
	strcpy(baru->mhs.darah, darah);
	
	if(L->first == NULL){
		L->first = baru;
		baru->next = NULL;
		L->last = baru;
	}else{
		baru->next = L->first;
		L->first = baru;
	}
	
	
	baru = NULL;
	printf("\nBerhasil ditambahkan!");
}
void tampilkanSI(){
	temp = head;
	while (temp!=NULL){
		if (strcmp(temp->jurusan,"SI")==0&&temp->gpa>=3.5){
		printf ("Nama = %s\n",temp->nama);
		printf ("Jurusan = %s\n",temp->jurusan);
		printf ("Umur = %d\n",temp->umur);
		printf ("GPA = %f\n",temp->gpa);
	}
	temp = temp->link;
	}
	printf ("Masukkan GPA ="); fflush(stdin);
		scanf ("%f",&nodePtr->gpa);
}

		
void addAfter(Elemen *prev, char jurusan[], char nama[], float gpa, char darah, List *L){
	Elemen *baru = (Elemen*) malloc (sizeof(Elemen));
	
	strcpy(baru->mhs.jurusan, jurusan);
	strcpy(baru->mhs.nama, nama);
	strcpy(baru->mhs.gpa, gpa);
	strcpy(baru->mhs.darah, darah);
	
	baru->next = prev->next;
	prev->next = baru;
	
	if(baru->next == NULL){
		L->last = baru;
	}
	
	baru = NULL;
	printf("\nBerhasil ditambahkan!");
}

void showData(List *L){
	Elemen *pnow = L->first;
	if(pnow == NULL){
		printf("\nAnda belum menambahkan data!\n");
	}else{
		printf("\nIsi Data");
		int no = 0;
		while(pnow != NULL){
			no++;
	    	printf("\n\nMahasiswa ke-%d", no);
	    	printf("\nJurusan : %s", pnow->mhs.gpa);
	    	printf("\nNama : %s", pnow->mhs.nama);
	    	printf("\nGPA : %s", pnow->mhs.gpa);
	    	printf("\nGolongan Darah : %s", pnow->mhs.darah);
			pnow = pnow->next;
		}
	}
}

Elemen *searchData(char darah[], List *L){
	int no = 0;
	Elemen *pnow = L->first;
	Elemen *result = NULL;
	if(pnow == NULL){
		printf("\nAnda belum menambahkan data!\n");
	}else{
		while(pnow != NULL){
			no++;
			if(strcmp(pnow->mhs.darah, darah) == 0){
				result = pnow;
				pnow = NULL;
			}else{
				pnow = pnow->next;
			}
		}
	}
	
	if(result == NULL){
		printf("Data tidak ditemukan!");
	}else{
		printf("Data ditemukan pada posisi ke-%d!",no);
	}
	
	return result;
}

Mahasiswa inputMahasiswa(){
	Mahasiswa data;
	
	printf("\nJurusan : ");
	scanf("%s",&data.jurusan);
	
	printf("Nama : ");
	scanf("%s",&data.nama);
	
	printf("GPA : ");
	scanf("%s",&data.gpa);
	
	printf("Golongan Darah : ");
	scanf("%s",&data.darah);
	
	return data;
}

char *searchDarah(){
	Mahasiswa data;
	printf("\nCari data (golongan darah) : ");
	scanf("%s",&data.darah);
	return data.darah;
}

return 0;
