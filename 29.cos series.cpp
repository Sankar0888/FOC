#include <stdio.h>
#include <math.h>
  
#define PI 3.14159265
  
int main ()
{
double x, ret, val;
  
x = 60.0;
val = PI / 180.0;
ret = cos( x * val );
printf("The cosine of %lf is ", x);
printf("%lf degrees\n", ret);
      
x = 90.0;
val = PI / 180.0;
ret = cos( x*val );
printf("The cosine of %lf is ", x);
printf("%lf degrees\n", ret);
      
return(0);
}
