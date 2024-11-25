#include <stdio.h>
int main(){

    int age[5];

    for (int i = 0; i <5 ; i++)
    {
       printf("Enter number %d : ", i+1);
       scanf("%d", &age[i]);

    }
    for (int i = 0; i <5 ; i++)
    {
       printf("\n number %d : %d ", i+1, age[i]);
       
    }
    

}