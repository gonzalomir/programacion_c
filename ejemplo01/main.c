#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define G 9.81

int var_A;

int main()
{
    int a;    // Numeros enteros comprendidos entre -32768 a 32767
    unsigned int b; // Numeros enteros sin signo comprendido entre 0 a 65535
    long int c; // Enteros largos -2147483648 a 2147483647
    float d;    // Numeros reales 3.4x10^-38 a 3.4x10^+38 IEEE754
    double dd;  //Numeros reales mas grandes 1.7x10^-308 a 1.7x10^+308
    char caracter='a';  // caracteres
    d=5*PI; // Ejemplo de multiplicacion de una variable y una constante
    int variableCalculoArea; //CamelCase
    int variable_calculo_area; //SnakeCase

    printf("Introduzca un numero: \n");
    scanf("%i",&a);

    if(a==5){
        printf("%d es igual que 5\n",a);
    }else{
        if(a<5)
            printf("El numero %d es menor que 5\n",a);
        else
            printf("El numero %d es mayor que 5\n",a);
    }
    return 0;
}
