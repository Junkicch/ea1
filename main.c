#include <stdio.h>

 main() {
   float a,b;
  
   //a = Valor de B;
   printf("\ncoloque o Valor de A:");
   scanf("%f",&b); //IN

   //b = Valor de A;
   printf("\ncoloque o Valor de B:");
   scanf("%f",&a); //IN

    float TROCA = a/b;
    printf("então A/B: %f", TROCA);//OUT
    return 0;
 }