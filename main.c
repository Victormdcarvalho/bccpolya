# include <stdio.h>
#include <stdlib.h>

 double num;
 double  a1, a2;
 
 double raizq(double num)
{
 		double a1 = 1.0;
        double a2 = 0.0;
        do
        {
                a2 = (a1+(num/a1))/2;
                a1= (a2 + (num/a2))/2;
                 a2 = (a1+(num/a1))/2;
                a1= (a2 + (num/a2))/2;
        } while (abs(a1 - a2) > 0);

        return a1;


}
int main ( void ) {
	
printf (" Digite um numero: ");
scanf ("%lf", &num);

if (num < 0)
{
	printf("numero invalido");
	return 0;
}


printf("%.2lf", raizq(num));
return 0;

}
