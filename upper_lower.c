#include <stdio.h>
int main()
{
    //-----------//
    //   input   //
    //-----------//
    char ch;
    printf("Enter any letter:");
    scanf("%c", &ch);


    //-----------//
    //   check   //
    //-----------//
    if('A'<=ch && ch<='Z'){
        printf("Upper Case\n");
    }
    else if('a'<=ch && ch<='z'){
        printf("Lower Case\n");
    }
    else{
        printf("Error!!!\n");
    }

    return 0;
}
