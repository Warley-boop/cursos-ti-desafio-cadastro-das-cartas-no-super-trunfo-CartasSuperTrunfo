#include <stdio.h>

int main() {
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



}
