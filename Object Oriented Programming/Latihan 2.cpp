#include <iostream>
using namespace std;

class Geometri {
    protected:
        int lebar, panjang, alas, tinggi, sisi;
    public:
    void setlebar (int w){
        lebar = w;
    }
	void setpanjang (int h){
        panjang = h;
    }
	void setalas (int a){
        alas = a;
    }
	void settinggi (int t){
        tinggi = t;
    }
	void setsisi (int s){
       sisi = s;
   }
};
class bigbox: public Geometri {
public:
    int getLuas(){
        return (panjang * lebar); 
    }
    int getKeliling(){
        return (2 * (panjang + lebar));
    }
};
class Segitiga: public Geometri {
public:
    int getLuas(){
        return (0.5 * alas * tinggi);
    }
    int getKeliling(){
        cout << "Unknown" << endl;
        return 0;
    }
};
class Trapesium: public Geometri {
public:
    int getLuas(){
        return (alas * tinggi);
    }
    int getKeliling(){
        cout << "Unknown" << endl;
        return 0;
    }
};
class box: public Geometri {
public:
    int getLuas(){
        return (sisi * sisi);
    }
    int getKeliling(){
        return (4 * sisi);
    }
};

void PersegiPanjang(){
 bigbox nim;
    nim.setlebar (5);
    nim.setpanjang (7);
    cout << "\nRectangle" << endl;
    cout << "Total Luas: "<< nim.getLuas() << endl;
    cout << "Total Keliling: "<< nim.getKeliling() << endl;
}


void Triangle (){
 Segitiga segi; 
    segi.setalas (5);
    segi.settinggi (5);
    cout << "\nTriangle" << endl;
    cout << "Total Luas: "<< segi.getLuas() << endl;
    cout << "Total Keliling: "<< segi.getKeliling() << endl;
}


void Trap (){
  Trapesium segi1; 
    segi1.setalas (8);
    segi1.settinggi (3);
    cout << "\nTrapesium" << endl;
    cout << "Total Luas: "<< segi1.getLuas() << endl;
    cout << "Total Keliling: "<< segi1.getKeliling() << endl;
}


void outbox (){
    box box1;
    box1.setsisi (2);
    cout <<"\nBox" << endl;
    cout << "Total luas: " << box1.getLuas() << endl;
    cout << "Total Keliling: " << box1.getKeliling() << endl;
}

int main(){
   
   int choice;
   cout << "pilih yang akan ditampilkan : (1 / 2)" << endl;
   cout << "1. Menampilkan jumlah Area dan Keliling gambar 2D" << endl;
   cout << "2. Menampilkan data Karyawan (#ID, Nama, Gaji)" << endl;
   
   cout << "masukan pilihan :" << endl;
   cin >> choice;
   if (choice == 1){
    PersegiPanjang();
    Triangle();
    outbox ();
    Trap();
   }
   }
