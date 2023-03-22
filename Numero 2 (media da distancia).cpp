#include <stdio.h>
#include <conio.h>
//ALUNO: NATHAN DONIZETI DOS REIS FERNANDES
/* 2) Escrever um algoritmo para determinar o consumo médio de um automóvel sendo
 fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.*/

main()
{
    float m, d, c; // variaveis
    
    printf ("\n\n Exercicio numero 2 do dia 09 de marco"); // titulo do projeto
    
    printf ("\n Descreva a distancia percorrida pelo automovel: ");  // Entre com o primeiro numero
    scanf ("%f", &d);  // armazena o primeiro numero
    
    printf ("\n Descreva o total de combustivel que foi gasto no automovel: ");  // Entre com o segundo numero
    scanf ("%f",&c);  // armazena o segundo numero
    
    m = (d/c); // comando para saber a media que foi gasta de combustivel
    
    printf ("\n O consumo medio de combustivel sera = %.4f", m);  // escreve a media ( %.4f (4 = numero de casas decimais))
    getch ();
}
