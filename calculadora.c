#include<stdio.h>
#include<math.h>




int main(){
      
       double num1, num2, resultado ;
       int operacao;
      
          
       printf( "Digite o primeiro número: \n" );
          scanf( "%lf", &num1 );

       printf( "Digite o segundo número: \n" );
          scanf( "%lf", &num2 );

          // menu de escolha
      printf( "\n Escolha a operação:\n" );
      printf( "1 - Adição\n" );
      printf( "2 - Subtração\n" );
      printf( "3 - Multiplicação\n" );
      printf( "4 - Divisão\n" );
      printf( "5 - Exponencial (primeiro número elevado ao segundo)\n" );
      printf( "6 - Radiciação ( raiz do primeiro número, considerando o segundo número como o índice da raiz)\n");
     

      printf( " Digite o número da operação desejada: " );
         scanf("%d", &operacao );


     switch (operacao){

         case 1:
	     resultado = num1 + num2;
	     printf( "Resultado da adição: %.2lf\n", resultado );
	     break;

	 case 2:
	     resultado = num1 - num2;
	     printf( " Resultado da subtração: %.2lf\n", resultado );
	     break;

	 case 3:
	     resultado = num1 * num2;
	     printf( "Resultado da multiplicação: %.2lf\n", resultado );
	     break;
          
         case 4:
             if ( num2 != 0 ){
		     resultado = num1 / num2; 
                printf( "Resultado da divisão: %.2lf\n", resultado);
		 
	     } else {
                printf( "Erro: divisão por zero!\n" );
             } 
             break;
             
         case 5:
             resultado = pow( num1, num2 );
             printf( "Resultado da exponenciação: %.2lf\n", resultado );
             break;


	 case 6:
	     if ( num1 >= 0 ){
                resultado = pow(num1, 1.0 / num2);
                printf( "Resultado da radiciação: %.2lf\n", resultado );

	     } else{
                printf( " Erro: Raiz de número negativo!\n");
             
	     }
             break;
        defaut:
	     printf( " Operação inválida:\n" );
	     return 1;
  
    }
  
     return 0;
}
