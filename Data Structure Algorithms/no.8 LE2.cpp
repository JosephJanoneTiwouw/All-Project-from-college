#include <stdio.h>

int Array[6];

void input ()
{
	for (int i=0;i<6;i++){
		printf ("Masukkan bilangan ke-%d=",i+1);
		scanf ("%d",&Array[i]);
	}
}

void swap (int* start,int * end){
	int temp = *start;
	*start = *end;
	*end = temp;
}

int partition (int lb, int ub)
{
	int pivot = Array[lb];
	int start = lb;
	int end = ub;
	
	while (start<end)
	{
		while (Array[start]<= pivot){
			start++;
		}
		while (Array[end]> pivot){
			end--;
		}
		if (start < end){
			swap (&Array[start],&Array[end]);
		}
	}
	swap  (&Array[lb], &Array[end]);
	return end;
}

void quicksort (int lb, int ub){
	int loc;
	
	if (lb< ub){
		loc = partition (lb, ub);
		quicksort (lb, loc-1);
		quicksort (loc+1, ub);
	}
}

void display ()
{
	for (int i=0;i<6;i++){
		printf ("%4d", Array[i]);
	}
	printf("\n\n");
}

void linearSearch(int dataSearch, int *A) {
	int found;
	
	for (int i=0;i<6; i++) {
		if (*(A + i) == dataSearch) {
			printf ("Data found in Array[%d]", i);
			found =1;
			break; }
			}
	
	if (found == 0 ) {
		printf ("Data is not found"); }
		
		printf("\n\n");
}

int main ()
{
	int choice=0;
	
	do 
	{
		
		int lb=0, ub=5;
		int dataSearch;
		
		printf("menu: \n");
		printf("1. Megurutkan bilangan \n");
		printf("2. Mencari bilangan \n");
		printf("3. Exit \n\n");
		
		printf("Masukkan pilihan anda: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: input ();
					quicksort (lb, ub);
					display ();
					break;
				
			case 2: input();
					printf("Masukkan data yang akan dicari: ");
					scanf("%d", &dataSearch); 
					linearSearch(dataSearch, Array);
					break;
					
		}
		
	}while(choice!=3);
	
}
