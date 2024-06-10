# beecrowd
Cod for students undestand better
#include <string.h> 
#include <stdio.h>

void printM(char matriz[][3])
    {       int i,j;
        for(i=0;i<3;i++)
               {
                         for(j=0;j<3;j++)
                          {
                             printf(" %c", matriz[i][j]);
                          }
                              printf("\n");
                }
    }
int verifica(char mesmamatriz[][3])
        { int i,j;
            int soma=0, vertical=0, diagonal=0, diagonal2=0,ganhador=0;
            for(i=0;i<3;i++)
                   {soma=vertical=0;
                    vertical=0;
                        for(j=0;j<3;j++)
                          {soma= mesmamatriz[i][j]+soma;
                          // soma a diagonal principal e verifica se foi completada
                             if(i==j)
                                {
                                    diagonal=diagonal+mesmamatriz[i][j];
                                }
                                if(i+j==2)
                                {
                                    diagonal2=diagonal2+mesmamatriz[i][j];
                                }
                              // DESENVOLVER CALCULO PARA A VERTICAL DO PROGRAMA
                                vertical=vertical+mesmamatriz[j][i];
                                // +++++++++++++++++++++++++++++=vertical
                          }
                          if(soma==264 || diagonal==264 || diagonal2==264 || vertical==264)
                          {return 1;   break;}
                          else if(soma==333 || diagonal==333 || diagonal2==333 || vertical==333)
                          {return 2;   break;}
                    }
                    return 0;
        }
int main()
{
    char velha[3][3];
    int i,j,x,y, ganhador=0;
    int cont=0,verifica();
    void printM();
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
              {
                velha[i][j]='+';
              }
        }
do{
    printf("jogador 1(x), escolha sua jogada!!\n");
    scanf("%d %d", &x, &y);
    while(x<0 || x>2 || y<0 || y>2 || velha[x][y]=='X' || velha[x][y]=='O')
        {
            printf("Escolha inválida. Tente outra jogada!!\n");
            scanf("%d %d", &x, &y);
        }
        velha[x][y]='X';
        cont++;
                // imprime o jogo da velha
                printM(velha);
                ganhador=verifica(velha);
                if(ganhador!=0 || cont==9)break;
                 printf("jogador 2(O), escolha sua jogada!!\n");
                scanf("%d %d", &x, &y);
                while(x<0 || x>2 || y<0 || y>2 || velha[x][y]=='X' || velha[x][y]=='O')
                    {
                        printf("Escolha inválida. Tente outra jogada!!\n");
                        scanf("%d %d", &x, &y);
                    }
                    velha[x][y]='O';
                    //imprime o jogo da velha
                    printM(velha);
                    cont++;
                ganhador=verifica(velha);
                    if(ganhador!=0 || cont==9)break;
}while(ganhador==0 && cont<9);
            if(ganhador>0)
            printf("O JOGADOR %d VENCEU A PARTIDA!!!!!!!!!\n", ganhador);
            else
            printf ("A PARTIDA EMPATADA. BANDO DE FRACASSADOS!!!!!!!\n");
                

    

    return 0;
}


    
