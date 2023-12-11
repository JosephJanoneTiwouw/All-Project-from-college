#include <iostream>
#include <string>

using namespace std;

class Driver{
	public:
		string ID;
		
		string Name;
		
		string Trip;
		
		string Bonus;
		
		void readDataDriver(){	
			cout<<"*******************\n";
			cout<<"ID   : ";cin>>ID;
			cout<<"Name : ";cin>>Name;
			cout<<"Trip : ";cin>>Trip;
			cout<<"*******************\n";
	}
		void displayDriver(){	
			cout<<"******************\n"<<endl;
			cout<<"ID   : "<<ID<<endl;
			cout<<"Name : "<<Name<<endl;
			cout<<"Trip : "<<Trip<<endl;
			cout<<"*******************\n";
		}
		void displayDataDriver(){
		cout<<"Bonus = trip *30.000" <<Bonus<<endl;
		}
		
};
class Vehicles{
	public:
	string ID;
	
	string Merk;
	
	string Tipe;
	
	string JumlahRoda;
	
	string BPKB;
	
		void readDataVehicles(){	
			cout<<"###################\n";
			cout<<"ID         : ";cin>>ID;
			cout<<"Merk       : ";cin>>Merk;
			cout<<"Tipe       : ";cin>>Tipe;
			cout<<"Jumlah Roda: ";cin>>JumlahRoda;
			cout<<"###################\n";
			}
		void displayVehicles(){
		    cout<<"###################\n";
			cout<<"ID         : "<<ID<<endl;
			cout<<"Merk       : "<<Merk<<endl;
			cout<<"Tipe       : "<<Tipe<<endl;
			cout<<"Jumlah Roda: "<<JumlahRoda<<endl;
			cout<<"###################\n";
		}
};

int main (){
	Driver Gojeek;
	Gojeek.readDataDriver();
	Gojeek.displayDriver();
	Gojeek.displayDataDriver();
	
	Driver Graab;
	Graab.readDataDriver();
	Graab.displayDriver();

	Vehicles Kawaski;
	Kawaski.readDataVehicles();
	Kawaski.displayVehicles();
	
	Vehicles Jazz;
	Jazz.readDataVehicles();
	Jazz.displayVehicles();
	
return 0;
}
