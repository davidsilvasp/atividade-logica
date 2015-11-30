#include <stdio.h>
  
int main() {
  
    float A, B, C, D, E, F, M;
      
    scanf("%f %f %f %f", &A, &B, &C, &D);
   
    M = (A * 2 + B * 3 + C * 4 + D * 1) / (2 + 3 + 4 + 1);
      
    if(M >= 7.0) {
         
        printf("Media: %.1f\n", M);
        printf("Aluno aprovado.\n");
         
    } else {
        if(M >= 5.0 && M <= 6.9) {
            printf("Media: %.1f\n", M);
            printf("Aluno em exame.\n");
            scanf("%f", &E);
            printf("Nota do exame: %.1f\n", E);
            F = (M + E) / 2;
            if(F >= 5.0) {
                printf("Aluno aprovado.\n");
            } else {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n", F);
             
        } else {
            printf("Media: %.1f\n", M);
            printf("Aluno reprovado.\n");
        }
    }
  
    return 0;
}
