#include <stdio.h>
#include <math.h>

int main(){
int tamanio;

printf("Ingrese el tamaño.");
		scanf("%d",&tamanio);
		float vector[tamanio];
		for (int i = 0; i < tamanio; i++)
		{
			printf("Ingrese el numero° %d",(i+1));
			scanf("%e",&vector[i]);
		}
		
		float aux=0.0;
		float media;
		for (int i = 0; i < tamanio; i++)
		{
			aux=(aux + vector[i]); 
		}
		media=(aux/tamanio);
		
		printf("\nLa media es : %e",media);

		float var=0.0;
		for (int i = 0; i < tamanio; i++)
		{
			var += pow(vector[i]-media,2);
		}
		var=(var/tamanio);
		printf("\nLa varianza es %e",var);

		float dev=sqrt(var);
		printf("\nLa desviación es %e",dev);
		
		
		
		
		
		
		return 0;
		}
