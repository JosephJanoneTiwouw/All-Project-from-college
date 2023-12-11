#include <iostream>
using namespace std;

class Area{
public:
Area (int S){
cout<<"Luas persegi = "<<S*S<<endl;
cout<<"Keliling Persegi = "<<4*S<<endl;
}
Area (double b){
cout <<"Luas dari bola = "<<4*3.14*b*b<<endl;
cout << "Keliling dari bola = "<<2*3.14*b<<endl;
}
Area (int k, double v){
cout << "Luas dari kerucut = "<<3.14*k*(k+v)<<endl;
cout << "Volume dari kerucut = "<<1/3*3.14*(k*k)*4<<endl;
}
Area (double r , int m){
cout << "Luas dari Tabung = "<<2*3.14*r*m<<endl;
cout << "Volume dari Tabung = "<<3.14*r*(r+m)<<endl;
}
Area (int p, int l, int t){
cout << "Luas dari Tabung = "<<2*(p*l+p*t+l*t)<<endl;
cout << "Volume dari Tabung = "<<p*l*t<<endl;
cout << "Keliling dari Tabung = "<<4*(p+l+t)<<endl;
}
};
int main (){
   Area P(5); 
   Area B(7);
   Area K(3,2.5);
   Area T(4.2,7);
   Area G(7,5,6);
}
