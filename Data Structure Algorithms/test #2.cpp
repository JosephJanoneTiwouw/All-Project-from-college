#include <iostream.h>

#include <conio.h>

void main()

{

int x[10];

int i,j,k,pilih,n;

char mau;

do

{

cout<<“=================================\n”;

cout<<“menu “<<endl;

cout<<“pilihan “<<endl;

cout<<“1.menampilkan data statistik”<<endl;

cout<<“2.mencari bilangan menggunakan algoritma linear search”<<endl;

cout<<“3.exit”<<endl;

cout<<“Masukkan Pilihant Anda : “;cin>>pilih;

switch (pilih)

{

case 1:

{

#include <stdio.h>

#define MAX_SIZE 100   

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;

    printf("masukan jumlah array: ");
    scanf("%d", &size);

    printf("masukan elemen: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
	max = arr[0];
    min = arr[0];
	for(i=1; i<size; i++)
    {
      
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    
    printf("Max element = %d\n", max);
    printf("Min element = %d", min);

    return 0;
}

break;

 

}

 

case 2:

{

bool ketemu;

int bil;

ketemu=false;

int jumlah;

jumlah =0;

cout<<“Masukkan Banyaknya Nilai : “;cin>>n;

for (i=1;i<=n;i++)

{

            cout<<“Data Ke -“<<i<<” : “;cin>>x[i];

   }

                        cout<<“Masukkan Bilangan yang Anda Cari : “;cin>>bil;

                                    for (i=1; i<=n;i++)

         {

                                    If (x[i]==bil)

                           {

                                                            ketemu=true;

                                    cout<<“Bilangan Tersebut Berada di Elemen”<<” “<<i<<endl;

                                                            jumlah++;

                                                }

            }

if (ketemu)

{

cout<<“Jumlah Data “<<” : “<<jumlah<<endl;

}

else

{

cout<<“Bilangan Tersebut Tidak ditemukan “<<endl;

}

break;

}

 

case 3:

cout<<“keluar “<<endl;

            goto exit;

            break;

}

cout<<“Apakah Anda Ingin Ulangi Lagi y/t ?”;cin>>mau;

}

            while (mau==’y’);

            exit:

getch();

}
