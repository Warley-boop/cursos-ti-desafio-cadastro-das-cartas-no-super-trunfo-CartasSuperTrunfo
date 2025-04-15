#include <stdio.h>

int main() {

char estado1, estado2, codigo1, codigo2, cidade1, cidade2;
int populacao1, populacao2, numero1, numero2;
float area1, area2, pib1, pib2;



printf ("Carta 1 \n");
 printf ("Código: \n");
 scanf ("%d", &codigo1);

 printf ("Nome: \n");
 scanf ("%s", &cidade1);

 printf ("População: \n");
 scanf ("%f", &populacao1);

 printf ("Área: \n");
  scanf ("%d", &area1);

 printf ("PIB: \n");
 scanf ("%d", &pib1);

 printf ("Número de pontos turísticos: \n");
 scanf ("%d", &numero1);


 printf ("Carta 2 \n");
 printf ("Código: \n");
 scanf ("%d", &codigo2);

 printf ("Nome: \n");
 scanf ("%s", &cidade2);

 printf ("População: \n");
 scanf ("%f", &populacao2);

 printf ("Área: \n");
  scanf ("%d", &area2);

 printf ("PIB: \n");
 scanf ("%d", &pib2);

 printf ("Número de pontos turísticos: \n");
 scanf ("%d", &numero2);



//Agora calcularemos a Densidade Populacional e o PIB per Capita.

float habitantes1, habitantes2, area1, area2, pib1, pib2;
float densidade; 
float ppc1, ppc2;

printf("Carta 1: \n")

printf ("Digite a população: \n");
scanf ("%D", &habitantes1);

printf ("Digite a área: \n");
scanf ("%D", &area1);

densidade = (habitantes1 / area1);
printf ("A densidade populacional da carta 1 é: %d", densidade);



printf("Carta 2: \n")

printf ("Digite a população: \n");
scanf ("%d", &habitantes2);

printf ("Digite a área: \n");
scanf ("%d", &area2);

densidade = (habitantes2 / area2);
printf ("A densidade populacional da carta 2 é: %d", densidade);



printf("Carta 1: \n")

printf ("Digite a população: \n");
scanf ("%d", &pib1);

printf ("Digite a área: \n");
scanf ("%d", &habitantes1);

ppc1 = (pib1 / habitantes1);
printf ("O PIB per Capita da carta 1 é: %d", ppc1);



printf("Carta 2: \n")

printf ("Digite a população: \n");
scanf ("%d", &pib2);

printf ("Digite a área: \n");
scanf ("%d", &habitantes2);

ppc2 = (pib2 / habitantes2);
printf ("O PIB per Capita da carta 2 é: %d", ppc2);


if (ppc1 > ppc2){
    printf (“O PIB per Capita de Betim é maior que o de Arujá \n”);
}else{
    printf("O PIB per Capita de Arujá é maior que o de Betim \n");
}





}
