#include <stdio.h>

///Name  : Joseph Janone Tiwouw
///Class : Data Structure and Algorithms Parallel A
1.
int main(){
	int A, n, count=0;
	printf("Nilai N adalah = " );
	
	scanf("%d", &n); //2
	
	for(A=0; A<n;A++){ //n
	
	count++; // 2
	
	}
	
	printf("maximun value dari nilai N = %d", count); //2
	
	//2 * (n*2) + 2 = 0(n)
	
	return 0
}


2.
a. n^3 + 10n^7 = -> O (n^3)

B. n^100 + 4^n = -> O (n^100)

C. n! + 2^n = -> O (n!)

D. nlog2(n) + 6n = -> O (n(logn)

E. n^5 + n = -> O (n^5)

F. 7n^2 + 15n = -> O (n^2)


3. 
A. np + n^5 + n^2 = -> O (n^7) polynomial

B. 10000 = -> O (1) constant

C. 3n^2 = -> O (n^2) quadratic

D. 5n! = -> O (n!) factorial

E. nlog2(n) = -> O (log2n) linear logarithmec

F. 5n + 18 = -> O (n) linear


4.
#include <iostream>
using namespace std;
int main()
{
      int  i, j, n;
      cout << "Masukkan jumlah baris:  ";
      cin >> n;
      for (i = 1; i <= n; i++)
      {
            for (j = 1; j <= i; j++)
            {
                  cout << "* ";
            }
            //Bagian akhir
            cout << "\n";
      }
      return 0;
}











