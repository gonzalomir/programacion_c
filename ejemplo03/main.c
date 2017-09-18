#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>    // Libreria necesaria para usar tipos de datos booleanos

bool esPrimo(int n){
    bool res=true; //Declarar e inicializar res
    int i;  //Declarar i
    if(n>=2){
      for(i=2;i<=(n/2);i++){
          if(n%i==0){
              res=false;
              break;
          }
      }
    }else{
      res=false;
    }
    return res;
}

int main()
{
  int i=1,contador=0;
  while(contador<10){
    if(!esPrimo(i)){    // Llamar a la funcion propia que verifica si un numero es primo
      printf("%d ",i);
      contador++;
    }
    i++;
  }
  return 0;
}
