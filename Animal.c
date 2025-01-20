#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Estrutura[20], Corpo[20] , Alimentacao[20];
    scanf("%s%s%s", &Estrutura, &Corpo, &Alimentacao);

    if( strcmp(Estrutura, "vertebrado")==0 && strcmp(Corpo, "ave")==0 && strcmp(Alimentacao,"carnivoro")==0 )
    {
        printf("aguia\n");
    }
    else if( strcmp(Estrutura, "vertebrado")==0 && strcmp(Corpo, "ave")==0 && strcmp(Alimentacao,"onivoro")==0 )
    {
        printf("pomba\n");
    }
     else if( strcmp(Estrutura, "vertebrado")==0 && strcmp(Corpo, "mamifero")==0 && strcmp(Alimentacao,"onivoro")==0 )
    {
        printf("homem\n");
    }
     else if( strcmp(Estrutura, "vertebrado")==0 && strcmp(Corpo, "mamifero")==0 && strcmp(Alimentacao,"herbivoro")==0 )
    {
        printf("vaca\n");
    }

     else if( strcmp(Estrutura, "invertebrado")==0 && strcmp(Corpo, "inseto")==0 && strcmp(Alimentacao,"hematofago")==0 )
    {
        printf("pulga\n");
    }
     else if( strcmp(Estrutura, "invertebrado")==0 && strcmp(Corpo, "inseto")==0 && strcmp(Alimentacao,"herbivoro")==0 )
    {
        printf("lagarta\n");
    }

     else if( strcmp(Estrutura, "invertebrado")==0 && strcmp(Corpo, "anelideo")==0 && strcmp(Alimentacao,"hematofago")==0 )
    {
        printf("sanguessuga\n");
    }
     else if( strcmp(Estrutura, "invertebrado")==0 && strcmp(Corpo, "anelideo")==0 && strcmp(Alimentacao,"onivoro")==0 )
    {
        printf("minhoca\n");
    }


    return 0;
}
