#include <iostream>
using namespace std;

class murid{
public:
    int nomorabsen;
    string nama;
    float nilai;
    void printData(){
        cout<<"Nomor Absen   \t= "<<nomorabsen<<endl;
        cout<<"Nama          \t= "<<nama<<endl;
        cout<<"Nilai         \t= "<<nilai<<endl;
    }
};
 
int main() {
    murid jontor;
    jontor.nomorabsen=17;
    jontor.nama="Jontor Joestar";
    jontor.nilai=95;
    jontor.printData();
    cout<<"\n";

    murid bambang;
    bambang.nomorabsen=14;
    bambang.nama="Bambang Pambae";
    bambang.nilai=84;
    bambang.printData();
    cout<<"\n";

    murid rudi;
    rudi.nomorabsen=56;
    rudi.nama="Rudi Tabuti";
    rudi.nilai=100;
    rudi.printData();
    return 0;
}
