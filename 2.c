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
    if(n>=0){
        printf("Positive\n");
    }
    else{
        printf("Negative\n");
    }

    return 0;
}
