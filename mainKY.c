#include <stdio.h>

void KY(int a, int b, int c, float *x1, float *x2);

int main() {
  int a,b,c;
  float x1, x2;
  printf("Vvedite koeficienti");
  scanf("%d %d %d",&a,&b,&c);
  KY(a, b, c, &x1, &x2);
  return 0;
}
