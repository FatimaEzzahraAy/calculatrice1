#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
   float x,y,r;

   do
    {
    printf("Entrez operation souhaitez:+ ou - ou / ou * \n");
    scanf("\n%c", &op);
    if (op == 'q'){
        goto jum;
    }

    printf("op : %c \n", op);
    printf("Entrez un numero: ");
    scanf("%f", &x);
    printf("Entrez un 2eme numero: ");
    scanf("%f", &y);

    if(op == '+' ){
            r = x + y;
            printf("resultat est: %f \n",r);
    }
    else if(op == '-' ){
            r = x - y;
            printf("resultat est: %f \n",r);
    }
    else if(op == '*' ){
            r = x * y;
            printf("resultat est: %f \n",r);
    }
    else if(op == '/' ){
            if (y>0){
            r = x / y;
            printf("resultat est: %f \n",r);
            }
            else printf("Erreur");
    }

    }while ( op != 'q' );
    jum:

    return 0;
}

