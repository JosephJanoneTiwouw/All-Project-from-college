#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Mahasiswa{
	char jurusan[50];
	char nama[50];
	char nim[50];
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

void addFirst(char jurusan[], char nama[], char nim[], char darah, List *L);
void addAfter(Elemen *prev, char jurusan[], char nama[], char nim[], char darah, List *L);

void deleteLast(List *L);

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
		printf("1. Insert Data Mahasiswa\n");
		printf("2. Delete Data Mahasiswa di posisi akhir\n");
		printf("3. Search data berdasarkan golongan darah\n");
		printf("4. Display data berdasarkan jurusan\n");
		printf("5. Keluar\n");
		
		printf("Pilih Menu : ");
		scanf("%d", &menu);
//				fflush(stdin)
		
		switch(menu){
			case 1:
				data = inputMahasiswa();
				addFirst(data.jurusan, data.nama, data.nim, data.darah, &L);
				break;
				
			case 2:
				deleteLast(&L);
				break;
				
			case 3:
				prev = searchData(searchDarah, &L);
				if(prev != NULL){
				}
			case 4:
				showData(&L);
				break;
				
			case 5:
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

void addFirst(char jurusan[], char nama[], char nim[], char darah, List *L){
	Elemen *baru = new Elemen;
	
	strcpy(baru->mhs.jurusan, jurusan);
	strcpy(baru->mhs.nama, nama);
	strcpy(baru->mhs.nim, nim);
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

void addAfter(Elemen *prev, char jurusan[], char nama[], char nim[], char darah, List *L){
	Elemen *baru = (Elemen*) malloc (sizeof(Elemen));
	
	strcpy(baru->mhs.jurusan, jurusan);
	strcpy(baru->mhs.nama, nama);
	strcpy(baru->mhs.nim, nim);
	strcpy(baru->mhs.darah, darah);
	
	baru->next = prev->next;
	prev->next = baru;
	
	if(baru->next == NULL){
		L->last = baru;
	}
	
	baru = NULL;
	printf("\nBerhasil ditambahkan!");
}

void deleteLast(List *L){
	Elemen *data = NULL;
	Elemen *prev = NULL;
	Elemen *pNow = L->first;
	
	while(pNow != NULL){
		prev = data;
		data = pNow;
		pNow = pNow->next;
	}
	
	if(prev == NULL){
		L->first = NULL;
		L->last = NULL;
	}else{
		prev->next = NULL;
		L->last = prev;	
	}
	
	free(data);
	
	printf("\nBerhasil dihapus!");
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
	    	printf("\nJurusan : %s", pnow->mhs.nim);
	    	printf("\nNama : %s", pnow->mhs.nama);
	    	printf("\nNIM : %s", pnow->mhs.nim);
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
	
	printf("NIM : ");
	scanf("%s",&data.nim);
	
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
