#include <stdio.h>
#include <math.h>
void KY(int a, int b, int c, float *x1, float *x2)
      {
	float D=pow(b,2)-4*a*c;
	if (D>=0) {
	  *x1=(-b-sqrt(D))/(2*a);
	  *x2=(-b+sqrt(D))/(2*a);
	  printf("\nRoots: ");
	  printf("x1: %f    x2: %f\n",*x1,*x2);
        }
	else printf("Kornei net");
      }
/*            
int main() {
  int a,b,c;
  float x1, x2;
  scanf("%d %d %d",&a,&b,&c);
  KY(a, b, c, &x1, &x2);
  return 0;
}*/
  
