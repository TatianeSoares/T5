#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lerGeo.h"
#include "lista.h"
#include "lerPm.h"
#include "lerEc.h"
#include "lerVia.h"
#include "lerQry.h"
#include "quadtree.h"
#include "hashTable.h"
#include "auxMain.h"


int main (int argc, char *argv[])
{
    char *dir_entrada = NULL;
    char *arq_geoNome = NULL;
    char *arq_consulta = NULL;
    char *dir_saida = NULL;    
    char *arq_ecNome = NULL;    
    char *arq_pmNome = NULL;
    char *arq_viaNome = NULL;

    int i;
    for(i=1;i<argc;i++)
    {
        if(strcmp("-e", argv[i]) == 0 )
        {
            i++;
            if(argv[i] == NULL)
            {
                printf("\nERRO\nDiretorio de entrada nao encontrado\n");
                exit(1);
            }
            dir_entrada = (char*) malloc((strlen(argv[i]) + 1)*sizeof (char));
            strcpy(dir_entrada,argv[i]);
        }

        else if(strcmp("-f", argv[i]) == 0)
        {
            i++;
            if(argv[i] == NULL)
            {
                printf("\nERRO\nParametro nao foi encontrado em -f\n");
                exit(1);
            }
            arq_geoNome = (char*) malloc((strlen(argv[i]) + 1)*sizeof (char));
            strcpy(arq_geoNome,argv[i]);
        
        }
        else if(strcmp("-q", argv[i]) == 0)
        {
            i++;
            if(argv[i] == NULL)
            {
                printf("\nERRO\nParametro nao foi econtrado em -q\n");
                exit(1);
            }

            arq_consulta = (char*) malloc((strlen(argv[i]) + 1)*sizeof (char));
            strcpy(arq_consulta,argv[i]);

        }
        else if(strcmp("-o", argv[i]) == 0)
        {
            i++;
            if(argv[i] == NULL)
            {
                printf("\nERRO\nDiretorio de saida nao foi econtrado\n");
                exit(1);
            }
            dir_saida = (char*) malloc((strlen(argv[i]) + 1)*sizeof (char));
            strcpy(dir_saida, argv[i]);      
        }
        else if(strcmp("-ec", argv[i]) == 0)
        {
            i++;
            if(argv[i] == NULL)
            {
                printf("\nERRO\nParametro nao encontrado em ec\n");
                exit(1);
            }
            arq_ecNome = (char*) malloc((strlen(argv[i]) + 1)*sizeof (char));
            strcpy(arq_ecNome, argv[i]);
        }
        else if(strcmp("-pm", argv[i]) == 0)
        {
            i++;
            if(argv[i] == NULL)
            {
                printf("\nERRO\nParametro nao encontrado em pm\n");
                exit(1);
            }
            arq_pmNome = (char*) malloc((strlen(argv[i]) + 1)*sizeof (char));
            strcpy(arq_pmNome, argv[i]);
        }
        else if(strcmp("-v", argv[i]) == 0)
        {
            i++;
            if(argv[i] == NULL)
            {
                printf("\nERRO\nParametro nao encontrado em v\n");
                exit(1);
            }
            arq_viaNome = (char*) malloc((strlen(argv[i]) + 1)*sizeof (char));
            strcpy(arq_viaNome, argv[i]);
        }
    }

    auxMain(arq_geoNome, dir_saida, dir_entrada, arq_consulta, arq_pmNome, arq_ecNome, arq_viaNome);  
    
}