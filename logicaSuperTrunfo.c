#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
int opcao;

    printf ("***BEM VINDO AO SUPER TRUNFO*** \n");

    printf("\n");


    /*CARTA1:*/         
    

    char Estado1 = 'A';
    char Nome1[20] = "Acre"; 
    unsigned int Populacão1 = 906900;
    char Codigo1[20] = "A01";
    float Área1 = 164.123;
    long int PIB1 = 2100000;
    int Pontos1 = 15; 
    int resultado1, resultado2;
    int atributo1, atributo2;

    /*Carta 1: local para cadastrar as informações*/
    
    printf ("** CADASTRE A CIDADE 1 ** \n");

    printf ("Digite a letra do Estado 1: \n");
    scanf (" %c", &Estado1);

    printf ("Digite o nome da cidade 1: \n");
    scanf (" %s", Nome1);

    printf ("Digite quantos habitantes há na cidade 1: \n");
    scanf (" %ld", &Populacão1);

    printf ("Digite o código da carta da cidade 1: \n");
    scanf (" %s", Codigo1);

    printf ("Digite a área da cidade 1 (em km²): \n");
    scanf (" %f", &Área1);

    printf ("Digite o PIB da cidade 1: \n");
    scanf (" %ld", &PIB1);

    printf ("Digite quantos pontos turísticos há na cidade 1: \n");
    scanf (" %d", &Pontos1);

    printf ("\n");

    //Calculo para a Densidade Populacional
    double DensidadePopulacional1 = Populacão1 / Área1;
    double PIBpercapta1 = PIB1 / Populacão1;
    long long int SuperPoder1 = Populacão1 + Área1 + PIB1 + Pontos1 + PIBpercapta1 + DensidadePopulacional1;


printf ("\n");

    /*Carta 1: Resultados do cadastro*/

    printf ("****RESULTADOS DA CIDADE 1**** \n");

    printf ("Letra da cidade 1:  %c \n", Estado1);
    printf ("Nome da cidade 1:  %s \n", Nome1);
    printf ("Código da carta 1:  %s \n", Codigo1);
    printf ("População da cidade 1:  %ld \n", Populacão1);
    printf ("Área 1:  %f \n", Área1);
    printf ("PIB da cidade 1:  %ld \n", PIB1);
    printf ("Pontos turísticos da cidade 1:  %d \n", Pontos1);
    printf ("A Densidade Populacional 1 é: %.3f \n", DensidadePopulacional1);
    printf ("A Renda per capita 1 é: %.3f \n", PIBpercapta1);
    printf ("Super Poder da cidade 1 é: %lld \n", SuperPoder1);




    /*Carta 2:*/
    char Estado2 = 'B';
    char Nome2 [15] = "Ceara";
    long int Populacão2 = 8795000;
    char Codigo2 [15] = "B02";
    float Área2 = 148.886;
    long int PIB2 = 194885;
    int Pontos2 = 19;
    

    printf ("\n");

    /*Carta 2: local para cadastrar as informações*/

    printf ("** CADASTRE A CIDADE 2 ** \n");

    printf ("Digite a letra do Estado 2: \n");
    scanf (" %c", &Estado2);

    printf ("Digite o Nome da cidade 2: \n");
    scanf (" %s", Nome2);

    printf ("Digite quantos habitantes há na cidade 2: \n");
    scanf (" %ld", &Populacão2);

    printf ("Digite o Código da carta 2: \n");
    scanf (" %s", &Codigo2);

    printf ("Digite qual a área da cidade 2 (em km²): \n");
    scanf (" %f", &Área2);

    printf ("Digite qual o PIB da cidade 2: \n");
    scanf (" %ld", &PIB2);

    printf ("Digite quantos pontos turísticos há na cidade 2: \n");
    scanf (" %d", &Pontos2);
    
    printf ("\n");

    //Calculo para a Densidade Populacional
    float DensidadePopulacional2 = Populacão2 / Área2;
    float PIBpercapta2 = PIB2 / Populacão2;
    double SuperPoder2 = Populacão2 + Área2 + PIB2 + Pontos2 + PIBpercapta2 + DensidadePopulacional2;


    /*Carta 2: Resultados do cadastro*/

    printf ("\n");

    printf ("****RESULTADOS DA CIDADE 2**** \n");

    printf ("Letra da cidade 2:  %c \n", Estado2);
    printf ("Nome da cidade 2:  %s \n", Nome2);
    printf ("Código da carta 2:  %s \n", Codigo2);
    printf ("População da cidade 2:  %ld \n", Populacão2);
    printf ("Área da cidade 2:  %f \n", Área2);
    printf ("PIB da cidade 2:  %ld \n", PIB2);
    printf ("Pontos turísticos da cidade 2:  %d \n", Pontos2);
    printf ("A Densidade Populacional 2 é: %3.f \n", DensidadePopulacional2);
    printf ("A Renda per capita 2 é: %3.f \n", PIBpercapta2);
    printf ("Super Poder da cidade 2 é: %lld \n", SuperPoder2);

    //Local para a comparação das cartas do jogo

    printf ("\n");
    printf ("\n");

    printf ("*** HORA DO DUELO ***\n");
    printf ("\n");
    printf ("## Escolha o atributo da CARTA 1 para o duelo ## \n");
    printf ("\n");
    printf ("1. População\n");
    printf ("2. Área \n");
    printf ("3. PIB \n");
    printf ("4. Pontos Turísticos\n");
    printf ("5. Densidade Populacional \n");
    printf ("6. PIB per capita \n");
    printf ("7. SUPER PODER!! \n");
    printf ("\n");
    printf ("ESCOLHA UMA OPÇÃO: \n");
    scanf("%d", &atributo1);
    printf ("\n");
    
switch (atributo1)
{
    case 1:
        printf ("Você escolheu a POPULAÇÃO! \n");
        resultado1 = Populacão1 > Populacão2 ? 1:0;
    break;
    case 2:   
        printf ("Você escolheu a Área! \n");
        resultado1 = Área1 > Área2 ? 1:0;
    break;
    case 3:
        printf ("Você escolheu o PIB! \n");
        resultado1 = PIB1 > PIB2 ? 1:0;
    break;
    case 4:
        printf ("Você escolheu os PONTOS TURÍSTICOS! \n");
        resultado1 = Pontos1 > Pontos2 ? 1:0;
    break;
    case 5:
        printf ("Você escolheu a DENSIDADE POPULACIONAL! \n");
        resultado1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1:0;
    break;
    case 6:
        printf ("Você escolheu o PIB per capita! \n");
        resultado1 = PIBpercapta1 > PIBpercapta2 ? 1:0;
    break;
    case 7:
        printf ("Você escolheu o SUPER PODER! \n");
        resultado1 = SuperPoder1 > SuperPoder2 ? 1:0;
    break;

    default:
        printf ("OPS! \n");
    break;
}
printf ("\n");

printf ("VAMOS ESCOLHER O ATRIBUTO DA SEGUNDA CARTA! \n");
printf ("\n");
printf ("1. População\n");
printf ("2. Área \n");
printf ("3. PIB \n");
printf ("4. Pontos Turísticos\n");
printf ("5. Densidade Populacional \n");
printf ("6. PIB per capita \n");
printf ("7. SUPER PODER!! \n");
printf ("\n");
printf ("ESCOLHA UMA OPÇÃO: \n");
scanf("%d", &atributo2);
printf ("\n");

switch (atributo2)
{
case 1:
    printf ("Você escolheu a POPULAÇÃO! \n");
    resultado2 = Populacão2 > Populacão1 ? 1:0;
break;
case 2:   
    printf ("Você escolheu a Área! \n");
    resultado2 = Área2 > Área1 ? 1:0;
break;
case 3:
    printf ("Você escolheu o PIB! \n");
    resultado2 = PIB2 > PIB1 ? 1:0;
break;
case 4:
    printf ("Você escolheu os PONTOS TURÍSTICOS! \n");
    resultado2 = Pontos2 > Pontos1 ? 1:0;
break;
case 5:
    printf ("Você escolheu a DENSIDADE POPULACIONAL! \n");
    resultado2 = DensidadePopulacional2 < DensidadePopulacional1 ? 1:0;
break;
case 6:
    printf ("Você escolheu o PIB per capita! \n");
    resultado2 = PIBpercapta2 > PIBpercapta1 ? 1:0;
break;
case 7:
    printf ("Você escolheu o SUPER PODER! \n");
    resultado2 = SuperPoder2 > SuperPoder1 ? 1:0;
break;

default:
    printf ("OPS! \n");
break;
}

printf ("\n");

/*COMPARAÇÃO DOS RESULTADOS*/
// Mostrando se as comparações, usando o operador ternário, são verdadeiras

if (resultado1 > resultado2) 
{
    printf ("A Carta 1 tem os maiores valores!!! \n");
} else if (resultado1  != resultado2)
{
    printf ("Houve um EMPATEE!!! \n");
} else {
    printf ("A Carta 2 tem os maiores valores!!! \n");
}

printf ("\n");

//LÓGICA PARA A SOMA DOS VALORES
long long int resultadosoma1 = Populacão1 + Área1 + PIB1 + Pontos1 + DensidadePopulacional1 + PIBpercapta1 + SuperPoder1;
long long int resultadosoma2 = Populacão2 + Área2 + PIB2 + Pontos2 + DensidadePopulacional2 + PIBpercapta2 + SuperPoder2;

if (resultadosoma1 > resultadosoma2)
{
    printf ("A CARTA 1 tem a maior soma!!! \n");
} else if (resultadosoma1 != resultadosoma2)
{
    printf ("Houve um EMPATE NA SOMA!!! \n");
} else
 { 
    printf ("A CARTA 2 tem a maior soma!!! \n");
}

printf ("\n");
printf ("### ULTIMAS INFORMAÇÕES ### \n");
printf ("\n");
printf ("O DUELO FOI DE: %s  VS  %s \n", Nome1, Nome2);
printf ("\n");
printf ("OS ATRIBUTOS USADOS FORAM de número %d e para a carta 1!! e número e %d para a carta 2!! \n", atributo1, atributo2);
printf ("\n");
printf ("COM OS VALORES DE: %d para a carta 1!! e %d e para a carta 2!! \n", resultado1, resultado2);
printf ("A SOMA DOS ATRIBUTOS É: %d para a carta 1 e %d para a carta 2 \n", resultadosoma1, resultadosoma2);
printf ("\n");
printf ("### HORA DE VERMOS O VENCEDOR.. ### \n");
printf ("\n");

if (resultado1, resultadosoma1 > resultado2, resultadosoma2)
{
    printf ("A CARTA 1 É A VENCEDORA!!!! \n");
} else if (resultado1, resultadosoma1 == resultado2, resultadosoma2)
{
    printf ("TEMOS UM EMPATE NO DUELO!!!! \n");
} else
{
    printf ("A CARTA 2 É A VENCEDORA!!!! \n");
}
    return 0;
}