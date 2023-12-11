#include <iostream>
using namespace std;

class PANJANG{
    int P;
public:
    PANJANG(int P){
        this->P=P;
        cout<<"Constructor Kelas INDUK Pertama siap > 1"<<endl;
    }
    int GetP(){
        return P;
    }
};
class LEBAR{
    int L;
public:
    LEBAR(int L){
        this->L=L;
        cout<<"Constructor Kelas INDUK Kedua siap > 2"<<endl;
    }
    int GetL(){
        return L;
    }
};

class TINGGI{
	int T;
	public:
    TINGGI(int T){
        this->T=T;
        cout<<"Constructor Kelas INDUK Ketiga siap > 3"<<endl;
    }
    int GetT(){
        return T;
    }
};
	class TURUNAN: public PANJANG, public LEBAR, public TINGGI{
    int Luas, Volume, Keliling;
	public:
    TURUNAN (int P, int L, int T): Panjang, Lebar, Tinggi){
        Luas=P*L;
        Keliling=2*(P+L);
        cout<<"Luas= "<<Luas<<endl;
        cout<<"Volume= "<<Volume<<endl;
        cout<<"Keliling= "<<Keliling;
    }
    int GetLuasVolumeKeliling(){
        return Luas;
        return Volume;
        return Keliling;
    }
};
	int main(){
    TURUNAN A(5,4,3);
    return 0;
}
