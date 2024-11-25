#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int temp;
    if(a<b && a<c){
        //smaller
        printf("%d ", a);
        //middle greater
        if(b<c){
            printf("%d %d", b, c);
        }
        else{
            printf("%d %d", c, b);
        }
    }
    else if(b<a && b<c){
        //smaller
        printf("%d ", b);
        //middle greater
        if(a<c){
            printf("%d %d", a, c);
        }
        else{
            printf("%d %d", c, a);
        }
    }
    else if(c<a && c<b){
        //smaller
        printf("%d ", c);
        //middle greater
        if(a<b){
            printf("%d %d", a, b);
        }
        else{
            printf("%d %d", b, a);
        }
    }


    return 0;
}
