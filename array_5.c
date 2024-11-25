#include <stdio.h>

int main(){
    int arr[10] = {2, 3, 12, 55, 12, 34, 69, 56, 89, 100};

    int i;

    for (i = 0; i <10; i++)
    {
        printf("roll : %d %d\n", i+1, arr[i]);
    }
    
   return 0;
}