#include <stdio.h>

int n_piani, tot_caratteri;
int n_spazi;
int s,y,i;

int main (void){

printf("Quanti piani?");
scanf ("%d",&n_piani);

for (i = 1; i < n_piani; i++)
{   
    for ( y = n_piani-i ; y >=0; y--)
    {
        printf(" ");
    }

    for (s = 1; s<=(i*2)-1; s++)
    {
        printf("*");
    }
    
    printf("\n");
}

    for ( y = n_piani-1 ; y >=0; y--)
    {
        printf(" ");
    }
        
        printf("*");
        printf("\n");

    return 0;
}
