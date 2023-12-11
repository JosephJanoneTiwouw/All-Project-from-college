#include <iostream>
using namespace std;

class murid{
public:
    int nomorabsen;
    int beratbadan;
    int tinggibadan;
    void eskul1(){
        cout<<"Renang";
    }
    void eskul2(){
    	cout<<"Badminton";
	}
	void eskul3(){
		cout<<"Futsal";
	}
	void eskul4(){
		cout<<"Basket";
	}
};
 
int main(){
    murid Jontor;
    Jontor.eskul1();
    cout<<"\n";
    Jontor.eskul4();
    cout<<"\n\n";
    
    murid Budi;
    Budi.eskul2();
    cout<<"\n";
    Budi.eskul3();
    cout<<"\n\n";
    
    murid Tono;
    Tono.eskul1();
    cout<<"\n";
    Tono.eskul2();
    cout<<"\n";
    Tono.eskul4();
    
    return 0;
}
    
