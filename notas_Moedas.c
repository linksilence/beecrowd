#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int cem, cinquenta, vinte, dez, cinco, dois, um,CinquentaCentavos,DezC,CincoC,VinteCincoC, dezC;
    double valor, resto;
    int Trauma;
    scanf("%lf", &valor);

    resto=cem=cinquenta=vinte=dez=cinco=0;
    dois=um=CinquentaCentavos=dezC=0;
    CincoC=Trauma=VinteCincoC=0;

    cem=valor/100;
    resto=valor-(cem*100);

    cinquenta=resto/50;
    resto=resto-(cinquenta*50);

    vinte=resto/20;
    resto=resto-(vinte*20);

    dez=resto/10;
    resto=resto-(dez*10);

    cinco=resto/5;
    resto=resto-(cinco*5);

    dois=resto/2;
    resto=resto-(dois*2);


    um=resto/1;
    resto=resto-(um*1);

    CinquentaCentavos=resto/0.50;
    resto=resto-(CinquentaCentavos*0.50);

    VinteCincoC=resto/0.25;
    resto=resto-(VinteCincoC*0.25);

    dezC=resto/0.1;
    resto=resto-(dezC*0.1);

    CincoC=resto/0.05;
    resto=resto-(CincoC*0.05);

    Trauma=round(resto/0.01);
    resto=resto-(Trauma*0.01);




   printf("NOTAS:\n");
   printf ("%d nota(s) de R$ 100.00\n", cem);
   printf ("%d nota(s) de R$ 50.00\n", cinquenta);
   printf ("%d nota(s) de R$ 20.00\n", vinte);
   printf ("%d nota(s) de R$ 10.00\n", dez);
   printf ("%d nota(s) de R$ 5.00\n", cinco);
   printf ("%d nota(s) de R$ 2.00\n", dois);
   printf("MOEDAS:\n");
   printf ("%d moeda(s) de R$ 1.00\n", um);
   printf ("%d moeda(s) de R$ 0.50\n", CinquentaCentavos);
   printf ("%d moeda(s) de R$ 0.25\n", VinteCincoC);
   printf ("%d moeda(s) de R$ 0.10\n", dezC);
   printf ("%d moeda(s) de R$ 0.05\n", CincoC);
   printf ("%i moeda(s) de R$ 0.01\n", Trauma);

    return 0;
}