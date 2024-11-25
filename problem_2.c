#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    //Task 1
    if(1<=n  && n<=50){
        printf("Yes ");
        //Task 2
        if(n%10==0){
            printf("Yes");
        }
        else{
            printf("No");
        }

    }
    //Task 1
    else{
        printf("No");
    }

    printf("\n");

    return 0;
}
