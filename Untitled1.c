#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define TAM 11

int main()
{
    //Declaracao de variaveis
    int matriz[TAM][TAM], i, j;

    srand(time(NULL));
    int t, L, C;
    int cont = 0;
    int op=1;
    int MPL ;
    int MPC ;


    //Inicio do jogo



           do {
                MPL = rand() %11;
                MPC = rand() %11;


                //Inicio do

                printf("\n***** SEJAM TODOS BEM VINDO AO MOITA BOBO ***** \n \n");

                printf("* Voce tera 5 tentativas para encontrar o monstro *\n \n");

                //Incrementando matriz
                for( i=0 ; i < TAM ; i++){
                        cont = 0;
                    for( j=0; j< TAM; j++){
                        matriz[i][j] = "*" ;
                    }
                }
                //Escrevendo Matriz
                printf("   0  1  2  3  4  5  6  7  8  9  10\n");

                for( i=0 ; i < TAM ; i++){
                        printf("%d ", cont++);
                    for( j=0; j< TAM; j++){
                        printf(" %s ", matriz[i][j]);
                    }
                    printf("\n");
                }


                    //Executando o jogo
                    while( t < 5 ){
                    t++;
                    //Lendo Inputs
                    printf("\n\nDigite a Linha: ");
                    scanf("%i", &L);
                    printf("\nDigite a Coluna: ");
                    scanf("%i", &C);

                    //Estrutura lógica do jogo N,S,O,E,NO,NE,SO,SE
                    if( MPL == L && MPC == C){
                        printf("\nvoce ganhou !!!\n");
                        break;

                    }
                        else if( L > 11 ){
                              printf("\n* Linha fora do intervalo *\n");
                              }
                               else if( C > 11 ){
                                     printf("\n* Coluna fora do intervalo *\n");
                                     }
                                     else if( L > MPL && C == MPC){
                                            printf("\n* Estou ao Norte *\n");

                                            }
                                            else if( L < MPL && C == MPC){
                                                   printf("\n* Estou ao Sul *\n");

                                                    }
                                                    else if( L == MPL && C < MPC){
                                                           printf("\n* Estou a Leste *\n");

                                                           }
                                                           else if( L == MPL && C > MPC){
                                                                  printf("\n* Estou a Oeste *\n");

                                                                   }
                                                                   else if( L < MPL && C > MPC){
                                                                         printf("\n* Estou a Sudoeste *\n");
                                                                    }
                                                                    else if( L < MPL && C < MPC){
                                                                          printf("\n* Estou a Sudeste *\n");
                                                                          }
                                                                          else if( L > MPL && C > MPC){
                                                                                printf("\n* Estou a Noroeste *\n");
                                                                                }
                                                                                else if( L > MPL && C < MPC){
                                                                                      printf("\n* Estou a Nordeste *\n");
                                                                                      }
                            //incrementando matriz
                             for( i=0 ; i < TAM ; i++){
                                cont = 0;
                                for( j=0; j< TAM; j++){
                                    matriz[i][j] = "*" ;
                                    matriz[L][C] = "T";

                                }
                            }
                            //Escrevendo matriz com a posição do usuário
                            printf ("\n   0  1  2  3  4  5  6  7  8  9  10\n");

                            for( i=0 ; i < TAM ; i++){
                                printf("%d ", cont++);
                                for( j=0; j< TAM; j++){
                                    printf(" %s ", matriz[i][j]);

                                }
                                printf("\n");
                            }


                    }

                //Final do jogo
                printf("\n\nO jogo acabou.\n\n");
                //Decisao para jogar ou nao
                printf("Desejar jogar novamente? Se sim digite 1, Se nao digite 0\n");
                scanf("%i", &op);
                t = 0;



          } while (op == 1);


    return 0;
}
