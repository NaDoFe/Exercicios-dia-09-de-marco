#include <stdio.h>
#include <conio.h>
//ALUNO: NATHAN DONIZETI DOS REIS FERNANDES
// 1) Fa�a um algoritmo que receba dois n�meros e ao final mostre a soma, subtra��o, multiplica��o e a divis�o dos n�meros lidos. 


main()
{
    float a,b,soma,s,m,d; // variaveis
	
	printf ("\n\n Exercicio numero 1 do dia 09 de marco"); // titulo do projeto
	
	printf ("\n Entre com o primeiro valor: "); // primeiro numero
    scanf ("%f" ,&a); // armazena o primeiro numero
    
    printf ("\n Entre com o segundo valor: "); // segundo numero
    scanf ("%f", &b); // armazena o segundo numero
    
    soma = (a+b); // comando para somar o primeiro numero com o segundo numero
    	s = (a-b); // comando para subtrair o primeiro numero com o segundo numero
    		m = (a*b); // comando para multiplicar o primeiro numero com o segundo numero
    			d = (a/b); // comando para dividir o primeiro numero com o segundo numero

    printf ("\n Somatoria = %.0f", soma); // escreve a somatoria ( %.0f (2 = numero de casas decimais))
    printf ("\n Subtracao = %.0f", s); // escreve a subtra��o
    printf ("\n Multiplicacao = %.0f", m); // escreve a multipli��o
    printf ("\n Divisao = %.3f", d); // escreve divis�o
    getch ();
    }
