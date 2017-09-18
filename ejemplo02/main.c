#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=100;i++){//i++ i=i+1
        if(i%4==0 || i%7==0){   // Operador logico OR
            printf("%d ",i);
        }
    }
    /*
    printf("\n");
    for(i=14;i>=0;i--){//i-- i=i-1
        printf("%d ",i);
    }*/
    return 0;
}
