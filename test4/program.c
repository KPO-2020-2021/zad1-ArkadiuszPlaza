#include <stdio.h>


double Dodaj(double,double);/*język cen nie przepisuje domyślnie ilości argumentów przez co nie rozpoznaje funkcji*/


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
