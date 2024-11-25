#include <stdio.h>
int main()
{
    //-----------//
    //   input   //
    //-----------//
    char ch;
    scanf("%c", &ch);


    //-----------//
    //   check   //
    //-----------//
    //Condition Ladder
    if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u' ||
       ch=='A' || ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
        printf("Vowel\n");
    }
    else if(('a'<=ch && ch<='z') || ('A'<=ch && ch<='Z')){
        printf("Consonant\n");
    }
    else{
        printf("Error!!!\n");
    }

    return 0;
}
