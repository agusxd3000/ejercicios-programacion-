//cuarto ejercicio

#include <stdio.h>

struct listado{
    int factura;
    int dia;
    int mes;
    char *nombre;
    int plata;
}lista[10];
int temp=0;



int main() {

for(int i=0;i<10;i++){
    printf("ingrese nro de factura %d:\n",i+1);
    scanf("%d",&lista[i].factura);
    printf("ingrese el dia de la factura %d:\n",i+1); 
    scanf("%d",&lista[i].dia);
    printf("Y el nro del mes de dicha factura %d\n",i+1);
    scanf("%d",&lista[i].mes);
    printf("Ingrese el nombre de la factura nro%d:\n",i+1);
    scanf("%s",&lista[i].nombre);
    printf("ingrese el valor economico facturado de la factura%d:\n",i+1);
    scanf("%d",&lista[i].plata);
    printf("\n");
}

  for (int i=1;i<10;i++){
        for (int j=0; j < 10-i ;j++) {

          if (lista[j].plata > lista[j+1].plata){
            temp=lista[j].plata;
            lista[j].plata=lista[j+1].plata;
            lista[j+1].plata=temp;
          }
}
}
printf("la factura con mayor ganancia es la nro %d",lista[0].plata);


}
