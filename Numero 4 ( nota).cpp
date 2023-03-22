#include <stdio.h>
#include <conio.h>
//ALUNO: NATHAN DONIZETI DOS REIS FERNANDES
/* 4) Escrever um algoritmo que leia o nome de um aluno e as notas das três provas que ele obteve no semestre.
 No final informar o nome do aluno e a sua media (aritmetica)*/

main()
{
    char aluno [50];
    float p1, p2, p3, media;
    
    printf ("\n\n Exercicio numero 4 do dia 09 de marco"); // titulo do projeto
    
    printf ("\n\n Informe o nome do Aluno(a): "); // Entre com o numero do aluno
    scanf ("%s", &aluno); // Armazana o nome do aluno mencionado acima
        
    printf ("\n Informe a nota da 1 prova de %s: ", aluno); // Entre com o primeiro valor da nota da primeira prova
    scanf ("%f", &p1); // Armazena a nota informada acima
    
    printf ("\n Informe a nota da 2 prova de %s: ", aluno); // Entre com o segundo valor da nota da segunda prova
    scanf ("%f", &p2); // Armazena a nota informada acima
    
    printf ("\n Informe a nota da 3 prova de %s: ", aluno); // Entre com o terceiro valor da nota da terceira prova
    scanf ("%f", &p3); // Armazena a nota informada acima
    
    media = (p1+p2+p3)/3; // Comando para calcular a media das 3 notas das provas do aluno
    
    printf ("\n A media da nota de %s sera de %.3f", aluno, media); // Aqui mostra a media calculada das provas
    
    getch ();

}
