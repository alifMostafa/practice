#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x,y,z;
    //find x
    if(a<b && a<c){
        x= a;
    }
    else if(b<a && b<c){
        x= b;
    }
    else if(c<a && c<b){
        x= c;
    }



    //find z
    if(a>b && a>c){
        z= a;
    }
    else if(b>a && b>c){
        z= b;
    }
    else if(c>a && c>b){
        z= c;
    }

    //find y
    if((x==b && z==c) || (x==c && z==b)){
        y= a;
    }
    else if((x==a && z==c) || (x==c && z==a)){
        y= b;
    }
    else if((x==a && z==b) || (x==b && z==a)){
        y= c;
    }

    printf("%d %d %d\n", x, y, z);

    return 0;
}
