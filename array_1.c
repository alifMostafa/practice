#include <stdio.h>
#define size 4
int main(){
    int math[size] = {50, 80, 90, 40};
    int eng[size] = {60, 100, 81, 45};

    int i=0;
    while(i!=size){
        printf("roll %d: %d\n", i+1, (math[i]+eng[i])/2);
        i++;
    }
    
    return 0;
}