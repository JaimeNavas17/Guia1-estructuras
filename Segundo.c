#include <stdio.h>
	int main(){
		
		int vector[]={58,98,75,5,4};
		int x;
		for ( int i = 0; i < 4; i++)
		{
			printf("| %i |",vector[i]);
		}		

		printf("\n ¿Cual va a eliminar?");
		scanf("%d",&x);
		
		for (int j = 0; j< 4;j++)
		{
			if (x==vector[j])
			{
				vector[j]= 0 ;
			}
			else{
				
				}
		}
		printf("\n");
		for ( int k = 0; k < 4; k++)
		{
			printf("| %i |",vector[k]);
		}	
		
			
		return 0;
		}
