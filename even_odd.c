#include <stdio.h>
int main()
{
    //-----------//
    //   input   //
    //-----------//
    int n;
    scanf("%d", &n);


    //-----------//
    //   check   //
    //-----------//
    if(n%2==0){

        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }

    return 0;
}
