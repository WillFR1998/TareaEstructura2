#include <stdio.h>
#include <stdlib.h>
int main() {
 int num1,num2,num3,num4,num5,x,h,i,j,k, num, cont=0, suma=0;
int primero [10][10],segundo[10][10], multiplicar[10][10];

   printf("Ingrese las dimensiones de la Matriz A\n");
   scanf("%d%d", &num1,&num2);
   printf("Ingrese los valores de la Matriz A \n");

   for ( num5=0; num5<num1; num5++)
   for ( x=0; x<num2; x++)
   scanf("%d",&primero[num5][x]);
   
     printf("Ingrese las dimensiones de la Matriz B\n");
     scanf("%d%d",&num3,&num4);


        if(num2 !=num3) 
          printf("las matrices no se pueden multiplicar por no tener la misma dimensión\n");
           else{
       printf ("INgrese los valores de la Matriz B\n");

            for(num5=0;num5<num3; num5++)
            for(x=0; x<num4; x++)
            scanf("%d",&segundo[num5][x]);

               for(num5=0; num5<num1; num5++)
                 {
               for(x=0;x<num4; x++)
                 {
               for( h=0; h<num3; h++)
                 {
                suma=suma + primero[num5][h]*segundo[h][x];
             }
           
          multiplicar[num5][x]=suma;
          suma=0;
         }
        }

    printf ("resultados\n");
      for(num5=0; num5<num1; num5++)
      {
      for (x=0; x<num4; x++)
        printf("%d\t", multiplicar[num5][x]);

      printf("\n");
        
}

for(i=0; i<num1; i++){
	for(j=0; j<num1; j++){
		num=multiplicar [i][j];
		
		for(k=1; k<=num; k++){
			
			if((num%2)==0){
			
			cont=cont+1;
			
		}
		
		}
		
		if(cont<=2){
			
			printf("Es primo\n");
			
		}else{
			printf ("No Es Primo\n");
		}
		
		cont=0;
		k=0;
		num=0;
	}
	
	
}


}
 return 0;
} 
