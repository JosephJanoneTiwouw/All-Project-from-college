#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

enum TransmissionType{automatic, manual};

class Car{
	char brand[25];
	TransmissionType transmission;
	int year;
	int cylinder;
	char policenumber[11];
	char color[15];
	
	public:
		void setCar(char *brand, TransmissionType transmission, 
		int year, int cylinder, char *policenumber,char *color){
		strcpy(this->brand, brand);
		this->transmission = transmission;
		this->year = year;
		this->cylinder = cylinder;
		strcpy(this->policenumber, policenumber);
		strcpy(this->color, color);
		}
		void showCarInfo(){
			cout<<"Brand\t: 		"<<brand<<endl;
			cout<<"Transmission\t: 	";
			switch(transmission){
				case 0: cout<<"Automatic\n"; break;
				case 1: cout<<"Manual\n"; break;
			}
			cout<<"Year\t:			 "<<year<<endl;
			cout<<"Cylinder\t: 		"<<cylinder<<endl;
			cout<<"Police Number\t: "<<policenumber<<endl;
			cout<<"Color\t: 		"<<color<<endl;
			
		}
};

int main(){
	Car m;
	m.setCar((char*)"Toyota Rush", manual, 2016, 1500,(char*)"BP 3632 HA", (char*)"Black");
	m.showCarInfo();
	return 0;
}
