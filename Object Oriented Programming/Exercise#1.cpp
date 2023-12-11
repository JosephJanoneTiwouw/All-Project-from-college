#include <iostream>
#include <string>

using namespace std;

class Student{
	public:
		string NIM;
		
		string Name;
		
		string GPA;
		
		void readStudent(){	
			cout<<"*******************\n";
			cout<<"NIM : ";cin>>NIM;
			cout<<"Name: ";cin>>Name;
			cout<<"GPA : ";cin>>GPA;
			cout<<"*******************\n";
	}
		void displayStudent(){	
			cout<<"*******************\n"<<endl;
			cout<<"NIM : "<<NIM<<endl;
			cout<<"Name: "<<Name<<endl;
			cout<<"GPA : "<<GPA<<endl;
			cout<<"*******************\n";
		}
		
};
class Dosen{
	public:
	string NIDN
	;
	string Name;
	
	string SKS;
	
		void readDosen(){	
			cout<<"###################\n";
			cout<<"NIDN: ";cin>>NIDN;
			cout<<"Name: ";cin>>Name;
			cout<<"SKS : ";cin>>SKS;
			cout<<"###################\n";
			}
		void displayDosen()
		
		{	
			cout<<"###################\n"<<endl;
			cout<<"NIDN : "<<NIDN<<endl;
			cout<<"Name: "<<Name<<endl;
			cout<<"SKS : "<<SKS<<endl;
			cout<<"###################\n";
		}
};

int main (){
	Student senior;
	
	senior.readStudent();
	
	senior.displayStudent();
	
	Student junior;
	
	junior.readStudent();
	
	junior.displayStudent();

	Dosen Peneliti;
	
	Peneliti.readDosen();
	
	Peneliti.displayDosen();
	
	Dosen Pengajar;
	
	Pengajar.readDosen();
	
	Pengajar.displayDosen();
return 0;}
