#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    int val= ch;

    for(int i=97; i<=val ;i++){
        printf("%c\n", i);
    }

    return 0;
}
