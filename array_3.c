#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int math[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &math[i]);
    }

    int eng[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &eng[i]);
    }

    for(int i=0; i<n ;i++){
        printf("%d\n", math[i]+eng[i]);
    }

    return 0;
}