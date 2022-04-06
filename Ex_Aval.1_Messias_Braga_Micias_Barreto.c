#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char entrada(void);
char dig_ent;
char codificar(void);

int main()
{
   char letra_selecionado = entrada();
   codificar();

    return 0;
}

char entrada(void)
{
    printf("Digite em maisculo a letra C para codificar ou D para descodificar: \n");
    scanf("%c", &dig_ent);
         if(dig_ent == 'C'){
            printf("Iremos codificar seu texto.\n\n");
        }
        else if(dig_ent == 'D'){
            printf("Iremos descodificar seu texto.\n\n");
        }
        else{
            printf("Erro na digitacao. O programa ira sair automaticamente.\n");
        }

    return dig_ent;
}
char codificar(void)
{
    if(dig_ent == 'C')
    {
        char vetz[1000];
        char letra[1000];
        int i,l,j;
        printf("Digite o texto a ser codificado: \n");
        scanf("%s", &vetz);
        l = strlen (vetz);

       for(i = 0; i < l; i++)
        {
        
           if(vetz[i] == 'Z') 
                vetz[i] = '2';
        }
        
        for(j =0; j != l; j++)
        {
            if(vetz[j] == '2')
            { 
                strcpy(vetz,"2");
                strcpy(letra,"Z");
                strcat(vetz, letra);
            }
        }
       printf("%s", vetz);
    }
    return 0;
}