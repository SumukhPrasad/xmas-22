#include <stdio.h>

int main() {
     char luminanceIndex[7] = "@&%*=-.";
     int w = 13;
     for (size_t t = 2; t < 5; t++) {
          for (size_t i = t-1; i < (2*t); i++) {
               int lSize = (2*i)-1;
               for (size_t j = 0; j < (w-lSize)/2; j++) printf(" ");
               for (size_t j = 0; j < lSize; j++) {
                    printf("%c", luminanceIndex[i-1]);
               }
               printf("\n");
          }
     }
     for (size_t i = 0; i < 2; i++) {
          for (size_t j = 0; j < (w-3)/2; j++) printf(" ");
          for (size_t j = 0; j < 3; j++) {
               printf(".");
          }
          printf("\n");
     }
     
}