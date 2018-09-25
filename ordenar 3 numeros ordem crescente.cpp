#include <stdio.h>	
int main()                            
{
    int val1, val2, val3, c;                          
  
    printf( "Insira o primeiro valor:\n" );  
    scanf( " %d", &val1 );
	printf( "Insira o segundo valor:\n" );  
    scanf( " %d", &val2 );
    printf( "Insira o terceiro valor:\n" );  
    scanf( " %d", &val3 );
    if (val1 < val2){
    	if (val2 < val3){
    		printf("Valores por ordem crescente:\n");
    	    printf("%d\n", val1);
    	    printf("%d\n", val2);
    	    printf("%d\n", val3);
		}
		else {
			c = val3;
			val3 = val2;
			val2 = c;
			if (val1 < val2){
				printf("Valores por ordem crescente:\n");
    	        printf("%d\n", val1);
    	        printf("%d\n", val2);
    	        printf("%d\n", val3);
			}
			else {
				c = val2;
				val2 = val1;
				val1 = c;
				printf("Valores por ordem crescente:\n");
    	        printf("%d\n", val1);
    	        printf("%d\n", val2);
    	        printf("%d\n", val3);
			}
		}
	}
	else {
		c = val2;
		val2 = val1;
		val1 = c;
		if (val2 < val3){
			printf("Valores por ordem crescente:\n");
    	    printf("%d\n", val1);
    	    printf("%d\n", val2);
    	    printf("%d\n", val3);
		}
		else {
			c = val3;
			val3 = val2;
			val2 = c;
			if (val1 < val2){
				printf("Valores por ordem crescente:\n");
    	        printf("%d\n", val1);
    	        printf("%d\n", val2);
    	        printf("%d\n", val3);
				
			}
			else {
				c = val2;
				val2 = val1;
				val1 = c;
				printf("Valores por ordem crescente:\n");
    	        printf("%d\n", val1);
    	        printf("%d\n", val2);
    	        printf("%d\n", val3);
			}
		}
	}
	
  return 0;
}


