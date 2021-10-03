#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   //1.
   int arr[10];
   //2.
   arr[0] = 0;
   //3.
   srand(time(NULL));
   int i;
   for(i = 1; i < 10; i++) {
      arr[i] = rand();
   }
   //4.
   int j;
   for(j = 0; j < 10; j++) {
      printf("value %d: %d \n", j, arr[j]);
   }
   //5.
   int arrTwo[10];
   //6.
   int* ap = arr;
   int* atp = arrTwo;
   //7.
   //using *
   int x;
   for (x = 0; x < 10; x++) {
      *(atp+x) = *(ap+(9-x));
   }
   printf("\n");
   for(j = 0; j < 10; j++) {
      printf("value %d: %d \n", j, arrTwo[j]);
   }

   //try with using []
   for (x = 0; x < 10; x++) {
      arrTwo[x] = arr[9-x];
   }
   printf("\n");
   for(j = 0; j < 10; j++) {
      printf("value %d: %d \n", j, arrTwo[j]);
   }

   return 0;
}
