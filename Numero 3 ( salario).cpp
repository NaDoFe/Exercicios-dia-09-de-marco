#include <stdio.h>
#include <conio.h>
//ALUNO: NATHAN DONIZETI DOS REIS FERNANDES
/*Escrever um algoritmo que leia o nome de um vendedor, o seu sal�rio fixo e ovendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha 15% 
de comiss�o sobre suas vendas efetuadas, informar o seu nome, o sal�rio fixo e sal�rio no 
final do m�s.*/

main()
{
    float s, v, sf;
    char nome [50];
    
    printf ("\n\n Exercicio numero 3 do dia 09 de marco"); // Titulo do projeto
    
    printf ("\n\n Informe o nome do Funcionario: "); // Entre com o nome do funcionario
    scanf ("%s", &nome); // Armazena o nome do funcionario mencionado acima
    
    printf ("\n Informe o salario do %s : ",nome); // Entre com o valor do salario
    scanf ("%f", &s); // Armazena o valor do salario inserido acima
    
    printf ("\n Informe qual foi o total das vendas feitas pelo(a) %s: ",nome); // Entre com o valor das vendas que foram feitas pelo funcionario
    scanf ("%f", &v); // Armazena o valor das vendas inserido acima
    
    sf = ( v*0.15 ) + s; // Comando para calcular o salario final do funcionario, no qual 15% � representado por 0.15, v � as vendas e o s � o sal�rio
    
	       
    printf ("\n O salario final do %s sera de %.3f",nome, sf); // Aqui seria o salario final
    
    
    getch ();
    
}
