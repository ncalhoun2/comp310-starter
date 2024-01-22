#include <stdio.h>

int main(){
   int numbers[] = {1, 2, 3, 4, 5};
   int sum = 0;
   for(int i = 0; i< sizeof(numbers)/ sizeof(numbers[0]); i++){
      sum += numbers[i];
   }
   double average = sum / (double) sizeof(numbers);
   printf("Sum: %d\n", sum);
   printf("Average: %f\n", average);
}