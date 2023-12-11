#include <iostream>
#include <conio.h>
using namespace std;

class mahlukhidup{
	public:
		virtual void makan(){
			cout<<"Makan"<<endl;
		}
};
class manusia: public mahlukhidup{
	public:
		void makan(){
			cout<<"cara manusia makan"<<endl;
		}
};
class hewan: public mahlukhidup{
	public:
		void makan(){
			cout<<"cara hewan makan"<<endl;
		}
};
class tumbuhan: public mahlukhidup{
	public:
		void makan(){
			cout<<"cara tumbuhan makan"<<endl;
		}
};

int main(){
	mahlukhidup mh;
	manusia budi;
	hewan anjing;
	tumbuhan venus;
	cout<<"\n\n";
	mh.makan();
	budi.makan();
	anjing.makan();
	venus.makan();
	getch();
	return 0;
}
