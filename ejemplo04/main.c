#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

double factorial(double n){
  double res=1;//respuesta, resultado
  double i;
  for(i=1;i<=n;i++){
    res=res*i;
  }
  return res;
}

double areaRectangulo(double base,double altura){
  double res;
  res=base*altura;
  return res;
}

double volumenEsfera(double radio){
    return (4/3)*PI*pow(radio,3);
}

int main()
{
  double radio;
  printf("%.2e \n",factorial(150)); //IEEE 754
  printf("%.2f \n",areaRectangulo(2.5,2.1));
  printf("%.3f \n",volumenEsfera(15.25));

  printf("Ingrese un radio: \n");
  scanf("%lf",&radio);
  printf("%.3f \n",volumenEsfera(radio));

  return 0;
}
