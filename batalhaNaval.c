#include <stdio.h>

#define LINHA 3
#define COLUNA 5

int main()
{
    printf("Saída em cone :\n");

    int matriz[LINHA][COLUNA] = {0};

    int percorrer = 1;



    for (int l = 0; l < LINHA; l++)
    {
        for (int c = 0; c < COLUNA; c++)
        {
            if (matriz[l][c] == matriz[0][2])
            {
                matriz[0][2] = 1;//PRIMEIRA LINHA
            }

            else if (matriz[l][c] == matriz[1][2])
            {
                for(int mudar = 1; mudar < 2;mudar++)
                {
                    for(int c = 1;c < 4;c++ )
                    {
                        matriz[mudar][c] = percorrer;


                    }

                }

            }
            else if(matriz[l][c] == matriz[2][0])
            {
                for (int l = 2; l < LINHA; l++)
                {
                    for (int c = 0; c< COLUNA; c++)
                    {
                        matriz[l][c] = percorrer;
                    }

                }

            }

            printf("%d",matriz[l][c]);

        }
        printf("\n");

    }

    //Octeadro
    printf("\n");

    printf("Octeadro : \n");


    //RESETANDO A MINHA MATRIZ 

    for(int l = 0;l <LINHA;l++)
    {
        for (int c = 0; c < COLUNA; c++)
        {
            matriz[l][c] = 0;
        }
    }

    for (int l = 0; l < LINHA; l++)
    {
        for (int c = 0; c < COLUNA; c++)
        {
            if (matriz[l][c] == matriz[0][2])
            {
                matriz[0][2] = 1;//PRIMEIRA LINHA
            }

            else if (matriz[l][c] == matriz[1][2])
            {
                for(int mudar = 1; mudar < 2;mudar++)
                {
                    for(int c = 1;c < 4;c++ )
                    {
                        matriz[mudar][c] = percorrer;


                    }

                }

            }
            else if(matriz[l][c] == matriz[2][2])
            {
                matriz[2][2] = percorrer;
            }

            printf("%d",matriz[l][c]);

        }
        printf("\n");


    }

    printf("\n");

    printf("CRUZ : \n");

    //RESETANDO A MINHA MATRIZ 

    for(int l = 0;l <LINHA;l++)
    {
        for (int c = 0; c < COLUNA; c++)
        {
            matriz[l][c] = 0;
        }
    }

    for (int l = 0; l < LINHA; l++)
    {
        for (int c = 0; c < COLUNA; c++)
        {
            if (matriz[l][c] == matriz[0][2])
            {
                matriz[0][2] = 1;//PRIMEIRA LINHA
            }

            else if (matriz[l][c] == matriz[1][0])
            {
                for(int mudar = 1; mudar < 2;mudar++)
                {
                    for(int c = 0;c < 5;c++ )
                    {
                        matriz[mudar][c] = percorrer;


                    }

                }

            }
            else if(matriz[l][c] == matriz[2][2])
            {
                 matriz[2][2] = percorrer;

            }

            printf("%d",matriz[l][c]);

        }
        printf("\n");


    }




    return 0;
}