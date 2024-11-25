#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int w,x,y,z;
    //i=1
    z= n%10;
    n= n/10;

    //i=2
    y= n%10;
    n= n/10;

    //i=3
    x= n%10;
    n= n/10;

    //i=4
    w= n%10;
    n= n/10;

    printf("%d %d %d %d\n", w, x, y, z);
    return 0;
}
