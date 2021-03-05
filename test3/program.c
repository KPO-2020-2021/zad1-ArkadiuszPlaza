#include <stdio.h>
#include "modul.c"


extern const double PI;/*powinna być zmiana extern na static, ale funkcja nie działa*/
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
