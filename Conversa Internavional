#include <string.h>
#include <stdio.h>

int main()

{   int grupo, i, cont=0,j, casos;

   scanf("%d", &casos);
   for(j=0;j<casos;j++){
       grupo=0;
   
     scanf("%d", &grupo);
     char nome[grupo][20];
    
    for(i=0;i<grupo;i++)
        {
            scanf("%s", nome[i]);
        }
        
    cont=0;
    for(i=0;i<grupo-1;i++)
        {
            if(strcmp(nome[i], nome[i+1])==0)
                {
                    cont++;
                }
        }
        cont++;
    if(cont==grupo)
      {
        printf("%s\n", nome[0]);
      }
      else
      {
          printf("ingles\n");
      }
    
    
} 
    
    return 0;
}
