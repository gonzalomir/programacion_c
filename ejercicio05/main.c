#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define PI 3.1416

int menu(){
  int res=-1;
  printf("--- Menu principal --- \n");
  printf("[1] Saludo \n");
  printf("[2] Generar Serie de impares \n");
  printf("[3] Generar Serie de pares \n");
  printf("[4] Volumen de un cilindro \n");
  printf("[5] Vocal Si o No? \n");
  printf("[0] Salir \n");
  scanf("%d",&res);
  return res;
}

void genImpar(int n){
  int i,impar;
  for(i=0;i<n;i++){
    impar=2*i+1;
    printf("%d ",impar);
  }
  printf("\n");
}

void genPar(int n){
  int i,par;
  for(i=0;i<n;i++){
    par=2*i;
    printf("%d ",par);
  }
  printf("\n");
}

void volumenCilindro(float r,float h){
  float v;
  v=PI*h*pow(r,2);
  printf("El volumen es: %.4f \n",v);
}

void esVocal(char c){
  bool esVocal=false;/*
  switch(c){
    case 'a':
      esVocal=true;
      break;
    case 'e':
      esVocal=true;
      break;
    case 'i':
      esVocal=true;
      break;
    case 'o':
      esVocal=true;
      break;
    case 'u':
      esVocal=true;
      break;
  }*/

  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
    esVocal=true;
  }

  if(esVocal){
    printf("%c es vocal \n",c);
  }else{
    printf("%c no es vocal \n",c);
  }
}

int main()
{
  int aux,num;
  float radio,altura;
  char caracter;
  do{
    aux=menu();
    system("cls");
    switch(aux){
      case 1:
        printf("Hola mundo cruel \n");
        break;
      case 2:
        printf("¿Cuantos impares quieres generar? \n");
        scanf("%d",&num);
        genImpar(num);
        break;
      case 3:
        printf("¿Cuantos pares quieres generar? \n");
        scanf("%d",&num);
        genPar(num);
        break;
      case 4:
        printf("Ingrese un radio: ");
        scanf("%f",&radio);
        printf("Ingrese una altura: ");
        scanf("%f",&altura);
        volumenCilindro(radio,altura);
        break;
      case 5:
        printf("Introduzca una letra \n");
        scanf("%s",&caracter);
        esVocal(caracter);
        break;
      case 0:
        printf("Hasta luego \n");
        break;
      default:  // Opcion por defecto
        printf("Opcion invalida \n");
    }
  }while(aux!=0);
  return 0;
}
