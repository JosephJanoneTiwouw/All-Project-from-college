Lab Exercise #1
Nama : Joseph Janone Tiwouw


1.	A. n	= linear

	B. n^2	= quadratic
	
	C. 7^n	= exponential
	
	D. 15.000 = constant
	
	E. logn	= logarithmec
	
	F. 2logn = linear logarithmic
	
	G. 3^2	 = quadratic
	
	H. n^5	 = polynomial
	
	
	
	
2.  A. n^5 + 3n^5  = -> O (n^7)

	B. n^100 + 4^n = -> O (n^100)
	
	C. n! + 2^n = -> O (n!)
	
	D. nlog2(n) + 6n = -> O (n(logn)
	
	
	

3.	A. n + np2 + np5 = ---> O (np7) polynomial

	B. 20,000  = -> O (1) constant
	
	C. 4n + 3  = -> O (n) linear
	
	D. n4 	   = -> O (np4) potynomial
	
	E. n! 	   = -> O (n!) factorial 
	
	F. nlog2n  = -> O (log2n) linear logarithmec
	
	
	

4.	printf("Test \n");		I- constant time
	for (i = 1; 1 <= n; i++)	n
	
	printf("%d", i);		I- constant time
		
		Runtime = 1 + (n*1)
				= O(n) Linear
				
				
5.	for (i = 1; i <= n; i++)		n
	for (j = 1; j <= n; j++)		n
	for (k = 1; k <= n; k++)		n
	
	printf("%d %d %d\n"i,j,)	1-Constan time
		Runtime = (n(n(n+1)))
				= O(np3) quadratic


6.
#include <stdio.h>
main()
{
	int bilangan;
	int baris;
	int j=1;
	int genap = 0;
	int ganjil =0;
	
	printf("jumlah yang diinginkan: ");
	scanf("%d",&baris);
	for(int i=0; i<baris; i++)
	{
		prinf("masukan bilangan ke %d: ",j++);
		scanf("%d",&bilangan);
		if(bilangan%2==0)
		{
			genap = genap + bilangan;
		}
		else
		{
			ganjil = ganjil + bilangan;
		}
	}
	printf("jadi jumlah bilangan genap adalah %d dan jumblah bilangan ganjil adalah %d", genap, ganjil);	1
	return 0;
}

runtime = 1+1+1+1+1+1+(n81)+1
		= O(n)
