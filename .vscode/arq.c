#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){


int x;

printf("porfavor digite um numero:\n ");
scanf("%d",&x);

while (x>=0){
    printf("%d",x);
    x++;

    if (x>= 10){
        break;
    
    }
}









    return 0;
}