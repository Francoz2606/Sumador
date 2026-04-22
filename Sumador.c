#include <stdio.h>
#define p printf
#define s scanf
/*Hola mundo*/ 
int main(void){
    int num1, num2, suma, resta, division, multiplicacion;
    
    
        p("ingrese un valor: ");
        s("%d", &num1);
        p("ingrese otro valor: ");
        s("%d", &num2);
        suma = num1 + num2;
        p("%d + %d = %d", num1, num2, suma);
}