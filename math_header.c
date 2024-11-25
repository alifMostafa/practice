#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    int powerTest= pow((a+b),2);
    printf("powerTest = %d\n", powerTest);

    return 0;
}
