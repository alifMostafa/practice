#include <stdio.h>
int main(){
    int a,b;
    char signCH;
    scanf("%d%c%d", &a, &signCH, &b);

    if(signCH=='+'){
        printf("%d%c%d = %d\n", a, signCH, b, a+b);
    }
    if(signCH=='-'){
        printf("%d%c%d = %d\n", a, signCH, b, a-b);
    }
    if(signCH=='*'){
        printf("%d%c%d = %d\n", a, signCH, b, a*b);
    }
    if(signCH=='/'){
        printf("%d%c%d = %d\n", a, signCH, b, a/b);
    }

    return 0;
}
