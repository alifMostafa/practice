#include <stdio.h>

int main(){
   int marks[10] = {30, 40, 60, 70, 30, 99, 80, 71, 77, 50};
   int i, sum = 0;
   float avg;

   for (i = 0; i <= 9; i++){
      sum += marks[i];
   }

   avg = (float)sum / 10;
   printf("Average: %f", avg);
   return 0;    
}