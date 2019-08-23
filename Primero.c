#include <stdio.h>

	int main(){
		int tamanio;
		printf("Ingrese tamaño");
		scanf("%d",&tamanio);
		int vector[tamanio];
		int vector2[tamanio];
		
		for (int i = 0; i < tamanio; i++)
		{
			printf("Ingrese numero %d",(i+1));
			scanf("%i",&vector[i]);
			vector2[i]=vector[i];
		}
		
		printf("Vector ");
		for (int j = 0; j < tamanio; j++)
		{
			printf("| %i |",vector[j]);	
		}
		printf("\n");
		
		printf("Vector2 ");
		
		for (int k = 0; k < tamanio; k++)
		{
			printf("| %i |",copia[k]);	
		}
		printf("\n");
		
		
		return 0;
		}
