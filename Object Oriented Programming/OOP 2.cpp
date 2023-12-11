#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

class Balok{
	int panjang;
	int lebar;
	int tinggi;
	
	public:
		Balok(){
			panjang = 4;
			tinggi	= 3;
			lebar	= 2;
		}
		void getpanjangtinggilebar
		(int panjang, int tinggi, int lebar){
		this->panjang = panjang;
		this->tinggi = tinggi;
		this->lebar = lebar;
		}
		void display(){
			cout<<"panjang 	= "<<panjang<<endl;
			cout<<"tinggi 	= "<<tinggi<<endl;
			cout<<"lebar	= "<<lebar<<endl;
		}
		void volumecalculation(){
			int volume = panjang * tinggi * lebar;
			cout<<"volume	= "<<volume<<endl;
		}
		void luascalculation(){
			int luas = 3 *(panjang * tinggi + lebar * tinggi + panjang * lebar);
			cout<<"luas		= "<<luas<<luas<<endl;
		}
};

int main(){
	Balok D;
	D.getpanjangtinggilebar(4, 3, 2);
	D.display();
	D.volumecalculation();
	D.luascalculation();
}

