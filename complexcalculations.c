#include <stdio.h>

int main (void)
{
	double a, A1, A2, A3, A4, A5;
	/*Eisagete ena dekadiko arithmo*/
	int b;
	/*Eisagete enan akeraio arithmo*/
	scanf("%lf %d",&a,&b);
	printf("%lf %d", a, b);
    A1 = a + b;
	A2 = a - b;
	A3 = a * b;
	A4 = a / b;
	A5 = (int) a % b;
	printf("Apotelesma prosthesis: %lf\n", A1);
	printf("Apotelesma afairesis: %lf\n", A2);
	printf("Apotelesma pollaplasiasmoy: %lf\n", A3);
	printf("Apotelesma diairesis: %lf\n", A4);
	printf("Apotelesma upoloipou: %lf", A5);
	return 0;
}
