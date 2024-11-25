//Memory Address
#include <stdio.h>
int main(){
    int n;

    //for(int i=0; i<15 ;i++){
    //    printf("line %d: n's address = %d\n", i, &n[i]);
    //}

    printf("n's address = %d\n", &n);
    printf("n's address = %d\n", &n+1);


    return 0;
}
