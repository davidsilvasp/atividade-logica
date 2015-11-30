#include <stdio.h>
  
int main() {
  
    double A, B, C, M;
     
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
  
    M = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);
     
    printf("MEDIA = %.1lf\n", M);
  
    return 0;
}
