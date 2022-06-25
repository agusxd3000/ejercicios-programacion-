//tercer ejercicio

#include <stdio.h>

struct alumnos
{
    int dni;
    float nota1 [10];
    int cantidad;
   
}
alumno[5];

float promedio(int c);
int a;
int d;
int i;

int main() {
    
    for( int i=0; i<5; i++){
        
        printf("Ingrese el DNI del alumno nro %d: \n", i+1);
        scanf("%d",&alumno[i].dni);
        printf("Ingrese cuantas notas tuvo :");
        scanf("%d",&alumno[i].cantidad);
       
      for(a =0 ; a < alumno[i].cantidad; a++){
        printf("Ingrese la nota nro %d:\n",a+1);
        scanf("%f",&alumno[i].nota1[a]);
        }
    }
    
      

for(int i=0;i<5;i++){
    printf("El promedio del alumno con documento %d es: %.2f \n ",alumno[i].dni,promedio(i));
    
}
}

float promedio(int c){
    float total;
    for(int j=0; j < alumno[c].cantidad;j++){
    total= total + alumno[c].nota1[j];
    
    }
 total = total / alumno[c].cantidad;
    return total;
}
