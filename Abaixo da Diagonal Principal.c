#include <stdio.h>

int main()
{
    char letra;
    int i,j,p=11;
    double poor[12][12];
    
    scanf("%c", &letra);
    for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
                {
                   scanf("%lf", &poor[i][j]); 
                }
        }
    double soma=0; 
    
    for(i=11;i>=1;i--)
        {
            for(j=0;j<p;j++)
                {
                    soma=soma+poor[i][j];
                }
                p--;
        } 
        
    if(letra=='S') printf("%.1lf\n", soma);
    else printf("%.1lf\n", soma/66);
    
    return 0;
}
