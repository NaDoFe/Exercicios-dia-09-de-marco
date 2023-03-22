#include <stdio.h>
#include <conio.h>
//ALUNO: NATHAN DONIZETI DOS REIS FERNANDES
/* 5) Ler dois valores para as variaveis A e B, e efetuar as trocas dos valores de forma que 
a variavel A passe a possuir o valor da variavel B e a variavel B passe a possuir o valor da variavel A. Apresentar os valores trocado.*/

main()
{
	float A1, B1, A2, B2;
	
    printf ("\n\n Exercicio numero 5 do dia 09 de marco"); // titulo do projeto
    
    printf ("\n\n Insira o valor de A: "); // Entre com o valor de A
    scanf ("%f", &A1); // Armazena o valor mencionado acima
    
    printf ("\n\n Insira o valor de B: "); // Entre com o valor de B
    scanf ("%f", &B1); // Armazena o valor mencionado acima
    
    A2 = B1; // Aqui eu faço a inversão de valores, do A para o B
    B2 = A1; // Aqui eu faço a inversão de valores, do B para o A
    
	printf ("\n\n Trocando o valor de A se resulta no valor de %.0f.", A2); // Aqui está o resultado da inversão dos valores de A para B
	
	printf ("\n\n Trocando o valor de B se resulta no valor de %.0f.", B2); // Aqui está o resultado da inversão dos valores de B para A
	 
    getch ();

}
