//primer ejercicio
#include <stdio.h>

struct alumnos
{
    int dni;
    int nota1;
    int nota2;
}
alumno[5];

int promedio(int a, int b);


int main() {
    
    for( int i=1; i<6; i++){
        
        printf("Ingrese el DNI del alumno nro %i: \n", i);
        scanf("%i",&alumno[i].dni);
        printf("Ingrese la nota de su primer cuatrimestre:\n",i);
        scanf("%i",&alumno[i].nota1);
        printf("Ingrese la nota de su segundo cuatrimestre:\n",i);
        scanf("%i",&alumno[i].nota2);
    
    }
    for( int i=1;i<6;i++){
    int notafinal= promedio(alumno[i].nota1,alumno[i].nota2 );
    printf("\n El promedio del alumno con documento %d es: %d",alumno[i].dni, notafinal);
}
}
int promedio(int a, int b){
    
    return (a+b)/2;
}
