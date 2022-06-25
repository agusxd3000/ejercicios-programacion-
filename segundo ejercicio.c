//segundo ejercicio


#include <stdio.h>
#include <string.h>

typedef struct AVION_DATOS{
    
	char *codigo;
    char *ciudad_de_origen;
    char *ciudad_de_destino;
	
	
} AEROLINEA;



int main (){

    AEROLINEA vuelos[4];
    int flag_ningun_vuelo = 1; 
    int a,b;

	vuelos[0].codigo = "AR1500";
	vuelos[0].ciudad_de_origen = "Inglaterra";
	vuelos[0].ciudad_de_destino = "España";
	
	vuelos[1].codigo = "BR1511";
	vuelos[1].ciudad_de_origen = "Brasil";
	vuelos[1].ciudad_de_destino = "Inglaterra";
	
	vuelos[2].codigo = "FR1530";
	vuelos[2].ciudad_de_origen = "Chile";
	vuelos[2].ciudad_de_destino = "Brasil";

	vuelos[3].codigo = "CL1611";
	vuelos[3].ciudad_de_origen = "Chile";
	vuelos[3].ciudad_de_destino = "Argentina";
 
	char sentencia_del_usuario[100];
	printf("Ingresa ciudad en mente: ");
	scanf("%s" ,sentencia_del_usuario);
 
    	for(int i = 0; i < 4; i++){
		
		a = strcmp (sentencia_del_usuario, vuelos[i].ciudad_de_origen);
		
		b = strcmp (sentencia_del_usuario,vuelos[i].ciudad_de_destino);
		
		if(a == 0 || b == 0){
		        
			printf("\n\n%s" ,vuelos[i].codigo);
			
			if(a == 0){
			
				printf("\nParte de %s"  ,sentencia_del_usuario);
				flag_ningun_vuelo = 0;
			}	
            	                	            
			if(b == 0){
                		            	        
				printf("\nDestina a %s"  ,sentencia_del_usuario);
				flag_ningun_vuelo = 0;
			}
		}
	}
	
	if(flag_ningun_vuelo == 1){
		
		puts("Ningun vuelo destina ni parte de la ciudad ingresada...");
	}

    
}
