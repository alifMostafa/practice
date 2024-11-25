#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    //Block (1)
    if(n%2==0){
        printf("Even ");
        if(n>=0){
            printf("Positive");
        }
        else{
            printf("Negative");
        }
    }
    //Block (2)
    else{
        printf("Odd ");
        if(n>=0){
            printf("Positive");
        }
        else{
            printf("Negative");
        }
    }

    printf("\n");


    return 0;
}
