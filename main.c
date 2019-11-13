#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    int tour = 0;
    int gagner = 0;
    char valeur = 'A';
    int colonne = 0, ligne = 0;
    int restart = 0;
    int parti = 0;
    int victoir1 =0;
    int victoir2 = 0;
    int lignepc = 0;
    int colonnepc = 0;
    const int MAX = 2, MIN = 0;
    int blok = 0;
    int testpc = 0;
    int test = 0;
    int null = 0 ;





        char tableau[3][3] = { {' ', ' ',' '},{' ', ' ', ' '},{' ', ' ', ' '}};
        char tableaupc [8][3] = { {0, 0, ' '},{0, 0, ' '},{0, 0, ' '},{0, 0, ' '},{0, 0, ' '},{0, 0, ' '},{0, 0, ' '},{0, 0, ' '}};
        printf("                 \n");
        printf("    0 1 2\n");
        printf("    _____ \n");
        printf(" 0 |%c|%c|%c| \n",tableau[0][0], tableau[0][1], tableau[0][2]);
        printf("    -+-+- \n");
        printf(" 1 |%c|%c|%c| \n",tableau[1][0], tableau[1][1], tableau[1][2]);
        printf("    -+-+- \n");
        printf(" 2 |%c|%c|%c|\n",tableau[2][0], tableau[2][1], tableau[2][2]);
        printf("    ----- \n");


    while (gagner==0)
    {

        tour++;


        if (tour % 2 == 0)
            {
                printf("Tour de l'ordi ! ");
                valeur = 'x';
            }
        else
            {
                printf("Tour du joueur 1 !");
                valeur = 'O';
            }


                if (tour % 2 == 0)    //début du tour pc
                {
                    blok = 0;

                    for(testpc=0;testpc<8;testpc++)  //tente de ganger
                    {

                        if ((tableaupc[testpc][0]==0) && (tableaupc[testpc][1] ==2))  // rentre si il a o=0 et x = 2
                        {


                            if (testpc < 3)  // test ligne
                            {
                                            for (colonnepc=0;(tableau[testpc][colonnepc] =='x' || tableau[testpc][colonnepc] =='O');colonnepc++)
                                            {
                                            }
                                            tableau[testpc][colonnepc] = 'x';



                                            tableaupc[testpc][1]++;

                                            if (colonnepc == 0)
                                            {
                                                tableaupc[3][1]++;
                                            }

                                            else if (colonnepc == 1)
                                            {
                                                tableaupc[4][1]++;
                                            }

                                            else if (colonnepc == 2)
                                            {
                                                tableaupc[5][1]++;
                                            }

                                            if (tableau[testpc][colonnepc] == tableau[0][0])
                                            {
                                                tableaupc[6][1]++;
                                            }
                                            else if (tableau[testpc][colonnepc] == tableau[1][1])
                                            {
                                                tableaupc[6][1]++;
                                                tableaupc[7][1]++;
                                            }
                                            else if (tableau[testpc][colonnepc] == tableau[2][2])
                                            {
                                                tableaupc[6][1]++;
                                            }
                                            else if (tableau[testpc][colonnepc] == tableau[0][2])
                                            {
                                                tableaupc[7][1]++;
                                            }
                                            else if (tableau[testpc][colonnepc] == tableau[2][0])
                                            {
                                            tableaupc[7][1]++;
                                            }

                                            testpc = 7;
                                            gagner =1;
                            }
                            else if (testpc > 2 && testpc < 6) //test colonne
                            {
                               if (tableaupc[3][1] == 2) //test colonne 0
                               {

                                                for (lignepc=0;(tableau[lignepc][0] =='x' || tableau[lignepc][0] =='O');lignepc++)
                                                {
                                                }

                                                tableau[lignepc][0] = 'x';



                                                tableaupc[3][1]++;
                                                if (lignepc == 0)
                                                {
                                                tableaupc[0][1]++;
                                                }
                                                else if (lignepc == 1)
                                                {
                                                tableaupc[1][1]++;
                                                }
                                                else if (lignepc == 2)
                                                {
                                                tableaupc[2][1]++;
                                                }

                                                if (tableau[lignepc][0] == tableau[0][0])
                                                 {
                                                     tableaupc[6][1]++;
                                                 }

                                                 else if (tableau[lignepc][0] == tableau[2][0])
                                                 {
                                                     tableaupc[7][1]++;
                                                 }
                                                testpc = 7;
                                                gagner = 1;


                               }
                                else if (tableaupc[4][1] == 2) //test colonne 1
                                {
                                            for (lignepc=0;(tableau[lignepc][1] =='x' || tableau[lignepc][1] =='O');lignepc++)
                                                {
                                                }
                                            tableau[lignepc][1] = 'x';



                                            tableaupc[4][1]++;
                                            if (lignepc == 0)
                                            {
                                            tableaupc[0][1]++;
                                            }
                                            else if (lignepc == 1)
                                            {
                                            tableaupc[1][1]++;
                                            }
                                            else if (lignepc == 2)
                                            {
                                            tableaupc[2][1]++;
                                            }


                                            if (tableau[lignepc][1] == tableau[1][1])
                                                 {
                                                     tableaupc[6][1]++;
                                                     tableaupc[7][1]++;
                                                 }
                                            testpc = 7;
                                            gagner=1;



                                }
                                else if (tableaupc[5][1] == 2) //test colonne 2
                                {
                                            for (lignepc=0;(tableau[lignepc][2] =='x' || tableau[lignepc][2] =='O');lignepc++)
                                                {
                                                }
                                                tableau[lignepc][2] = 'x';



                                                tableaupc[5][1]++;
                                                if (lignepc == 0)
                                                {
                                                tableaupc[0][1]++;
                                                }
                                                else if (lignepc == 1)
                                                {
                                                tableaupc[1][1]++;
                                                }
                                                else if (lignepc == 2)
                                                {
                                                tableaupc[2][1]++;
                                                }

                                                 if (tableau[lignepc][2] == tableau[0][2])
                                                 {
                                                     tableaupc[7][1]++;
                                                 }
                                                 else if (tableau[lignepc][2] == tableau[2][2])
                                                 {
                                                     tableaupc[6][1]++;
                                                 }


                                                testpc = 7;
                                                gagner=1;

                                }

                            }
                            else if (testpc == 6 || testpc == 7) // test diagonal
                            {
                                if (tableaupc[6][1] == 2)  //test diagonal 1
                                {
                                     if (tableau[0][0] == 'x' && tableau[1][1] == 'x')
                                    {
                                        tableau[2][2]='x';


                                        tableaupc[6][1]++;
                                        tableaupc[2][1]++;
                                        tableaupc[5][1]++;
                                        testpc = 7;
                                        gagner = 1;
                                    }
                                    else if (tableau[0][0] == 'x' &&  tableau[2][2] == 'x')
                                    {
                                        tableau[1][1]='x';

                                        tableaupc[6][1]++;
                                        tableaupc[7][1]++;
                                        tableaupc[4][1]++;
                                        tableaupc[1][1]++;
                                        testpc = 7;
                                        gagner = 1;

                                    }
                                    else if (tableau[1][1] == 'x' && tableau[2][2] == 'x')
                                    {
                                        tableau[0][0]='x';

                                        tableaupc[6][1]++;
                                        tableaupc[0][1]++;
                                        tableaupc[3][1]++;
                                        testpc = 7;
                                        gagner = 1;
                                    }
                                }
                                else if (tableaupc[7][1] == 2) // test diag 2
                                {
                                    if (tableau[2][0] == 'x' && tableau[1][1] == 'x' ) // test posibilité 1/3
                                    {
                                        tableau[0][2]='x';

                                        tableaupc[7][1]++;
                                        tableaupc[0][1]++;
                                        tableaupc[5][1]++;
                                        testpc = 7;
                                        gagner = 1;
                                    }
                                    else if (tableau[1][1]== 'x' && tableau[0][2] == 'x')// posibilite 2/3
                                    {
                                        tableau[2][0]='x';

                                        tableaupc[7][1]++;
                                        tableaupc[2][1]++;
                                        tableaupc[3][1]++;
                                        testpc = 7;
                                        gagner = 1;
                                    }
                                    else if (tableau[2][0]== 'x' && tableau[0][2] == 'x')
                                    {
                                        tableau[1][1]='x';

                                        tableaupc[7][1]++;
                                        tableaupc[6][1]++;
                                        tableaupc[1][1]++;
                                        tableaupc[4][1]++;
                                        testpc = 7;
                                        gagner = 1;
                                    }
                                }

                            }



                        }
                        else
                            {
                                blok++;
                            }
                    }
                     for(testpc=0;testpc<8;testpc++)  //blok joueur
                    {

                        if ((tableaupc[testpc][0]==2) && (tableaupc[testpc][1] ==0) && (gagner==0))  // rentre si il a o=2 et x = 0
                        {


                            if (testpc < 3)  // test ligne
                            {
                                            for (colonnepc=0;(tableau[testpc][colonnepc] =='x' || tableau[testpc][colonnepc] =='O');colonnepc++)
                                            {
                                            }
                                            tableau[testpc][colonnepc] = 'x';


                                            tableaupc[testpc][0]++;
                                            tableaupc[testpc][1]++;

                                            if (colonnepc == 0)
                                            {
                                                tableaupc[3][1]++;
                                            }

                                            else if (colonnepc == 1)
                                            {
                                                tableaupc[4][1]++;
                                            }

                                            else if (colonnepc == 2)
                                            {
                                                tableaupc[5][1]++;
                                            }

                                            if (tableau[testpc][colonnepc] == tableau[0][0])
                                            {
                                                tableaupc[6][1]++;
                                            }
                                            else if (tableau[testpc][colonnepc] == tableau[1][1])
                                            {
                                                tableaupc[6][1]++;
                                                tableaupc[7][1]++;
                                            }
                                            else if (tableau[testpc][colonnepc] == tableau[2][2])
                                            {
                                                tableaupc[6][1]++;
                                            }
                                            else if (tableau[testpc][colonnepc] == tableau[0][2])
                                            {
                                                tableaupc[7][1]++;
                                            }
                                            else if (tableau[testpc][colonnepc] == tableau[2][0])
                                            {
                                            tableaupc[7][1]++;
                                            }

                                            testpc = 7;

                            }
                            else if (testpc > 2 && testpc < 6) //test colonne
                            {
                               if (tableaupc[3][0] == 2) //test colonne 0
                               {

                                                for (lignepc=0;(tableau[lignepc][0] =='x' || tableau[lignepc][0] =='O');lignepc++)
                                                {
                                                }

                                                tableau[lignepc][0] = 'x';


                                                tableaupc[3][0]++;
                                                tableaupc[3][1]++;
                                                if (lignepc == 0)
                                                {
                                                tableaupc[0][1]++;
                                                }
                                                else if (lignepc == 1)
                                                {
                                                tableaupc[1][1]++;
                                                }
                                                else if (lignepc == 2)
                                                {
                                                tableaupc[2][1]++;
                                                }

                                                if (tableau[lignepc][0] == tableau[0][0])
                                                 {
                                                     tableaupc[6][1]++;
                                                 }

                                                 else if (tableau[lignepc][0] == tableau[2][0])
                                                 {
                                                     tableaupc[7][1]++;
                                                 }
                                                testpc = 7;



                               }
                                else if (tableaupc[4][0] == 2) //test colonne 1
                                {
                                            for (lignepc=0;(tableau[lignepc][1] =='x' || tableau[lignepc][1] =='O');lignepc++)
                                                {
                                                }
                                            tableau[lignepc][1] = 'x';


                                            tableaupc[4][0]++;
                                            tableaupc[4][1]++;
                                            if (lignepc == 0)
                                            {
                                            tableaupc[0][1]++;
                                            }
                                            else if (lignepc == 1)
                                            {
                                            tableaupc[1][1]++;
                                            }
                                            else if (lignepc == 2)
                                            {
                                            tableaupc[2][1]++;
                                            }


                                            if (tableau[lignepc][1] == tableau[1][1])
                                                 {
                                                     tableaupc[6][1]++;
                                                     tableaupc[7][1]++;
                                                 }
                                            testpc = 7;




                                }
                                else if (tableaupc[5][0] == 2) //test colonne 2
                                {
                                            for (lignepc=0;(tableau[lignepc][2] =='x' || tableau[lignepc][2] =='O');lignepc++)
                                                {
                                                }
                                                tableau[lignepc][2] = 'x';


                                                tableaupc[5][0]++;
                                                tableaupc[5][1]++;
                                                if (lignepc == 0)
                                                {
                                                tableaupc[0][1]++;
                                                }
                                                else if (lignepc == 1)
                                                {
                                                tableaupc[1][1]++;
                                                }
                                                else if (lignepc == 2)
                                                {
                                                tableaupc[2][1]++;
                                                }

                                                 if (tableau[lignepc][2] == tableau[0][2])
                                                 {
                                                     tableaupc[7][1]++;
                                                 }
                                                 else if (tableau[lignepc][2] == tableau[2][2])
                                                 {
                                                     tableaupc[6][1]++;
                                                 }


                                                testpc = 7;


                                }

                            }
                            else if (testpc == 6 || testpc == 7) // test diagonal
                            {
                                if (tableaupc[6][0] == 2)  //test diagonal 1
                                {
                                     if (tableau[0][0] == 'O' && tableau[1][1] == 'O')
                                    {
                                        tableau[2][2]='x';
                                        blok=0;
                                        tableaupc[6][0]++;
                                        tableaupc[6][1]++;
                                        tableaupc[2][1]++;
                                        tableaupc[5][1]++;
                                        testpc = 7;

                                    }
                                    else if (tableau[0][0] == 'O' &&  tableau[2][2] == 'O')
                                    {
                                        tableau[1][1]='x';
                                        blok=0;
                                        tableaupc[6][0]++;
                                        tableaupc[6][1]++;
                                        tableaupc[7][1]++;
                                        tableaupc[4][1]++;
                                        tableaupc[1][1]++;
                                        testpc = 7;


                                    }
                                    else if (tableau[1][1] == 'O' && tableau[2][2] == 'O')
                                    {
                                        tableau[0][0]='x';
                                        blok=0;
                                        tableaupc[6][0]++;
                                        tableaupc[6][1]++;
                                        tableaupc[0][1]++;
                                        tableaupc[3][1]++;
                                        testpc = 7;

                                    }
                                }
                                else if (tableaupc[7][0] == 2) // test diag 2
                                {
                                    if (tableau[2][0] == 'O' && tableau[1][1] == 'O' ) // test posibilité 1/3
                                    {
                                        tableau[0][2]='x';
                                        blok=0;
                                        tableaupc[7][0]++;
                                        tableaupc[7][1]++;
                                        tableaupc[0][1]++;
                                        tableaupc[5][1]++;
                                        testpc = 7;

                                    }
                                    else if (tableau[1][1]== 'O' && tableau[0][2] == 'O')// posibilite 2/3
                                    {
                                        tableau[2][0]='x';
                                        blok=0;
                                        tableaupc[7][0]++;
                                        tableaupc[7][1]++;
                                        tableaupc[2][1]++;
                                        tableaupc[3][1]++;
                                        testpc = 7;

                                    }
                                    else if (tableau[2][0]== 'O' && tableau[0][2] == 'O')
                                    {
                                        tableau[1][1]='x';
                                        blok=0;
                                        tableaupc[7][0]++;
                                        tableaupc[7][1]++;
                                        tableaupc[6][1]++;
                                        tableaupc[1][1]++;
                                        tableaupc[4][1]++;
                                        testpc = 7;

                                    }
                                }

                            }



                        }
                        else
                            {
                                blok++;
                            }
                    }
                        if (blok == 16)  // tour aléatoir
                        {
                        do
                        {

                        srand(time(NULL));
                        lignepc = (rand() % (MAX - MIN +1)) + MIN;
                        srand(time(NULL));
                        colonnepc = (rand() % (MAX - MIN +1)) + MIN;
                        }   while (tableau[lignepc][colonnepc] =='x' || tableau[lignepc][colonnepc] =='O');


                        tableau[lignepc][colonnepc]='x';
                        if (lignepc <3)
                        {
                        tableaupc[lignepc][1]++;
                        }


                        if (colonnepc == 0)
                        {
                        tableaupc[3][1]++;
                        }
                        else if (colonnepc == 1)
                        {
                        tableaupc[4][1]++;
                        }
                        else if (colonnepc == 2)
                        {
                        tableaupc [5][1]++;
                        }

                        if (tableau[lignepc][colonnepc] == tableau[0][0])
                        {
                        tableaupc[6][1]++;
                        }
                        else if (tableau[lignepc][colonnepc] == tableau[1][1])
                        {
                        tableaupc[6][1]++;
                        tableaupc[7][1]++;
                        }
                        else if (tableau[lignepc][colonnepc] == tableau[2][2])
                        {
                        tableaupc[6][1]++;
                        }
                        else if (tableau[lignepc][colonnepc] == tableau[0][2])
                        {
                        tableaupc[7][1]++;
                        }
                        else if (tableau[lignepc][colonnepc] == tableau[2][0])
                        {
                        tableaupc[7][1]++;
                        }



                    }
                }  // fin du tour pc

                else  // tour du joueur
                {
                do
                {
                    do
                    {
                    printf("Choisis une ligne : ");        //test si ligne est bonne
                    scanf("%d", &ligne);
                        if (ligne >2)
                        {
                            printf("Choisis une bonne ligne ! ");
                        }
                    }
                    while (ligne >2);

                    do
                    {
                    printf("Choisis une colonne : ");       // test si colonne est bonne
                    scanf("%d", &colonne);
                    if (colonne >2)
                        {
                            printf("Choisis une bonne colonne ! ");
                        }
                    }
                    while (colonne >2);
                    if (tableau[ligne][colonne] =='x' || tableau[ligne][colonne] =='O')
                    {
                        printf("Cette case est deja utilisee ! ");
                    }
                }
                while (tableau[ligne][colonne] =='x' || tableau[ligne][colonne] =='O');
                }


                tableau[ligne][colonne] = valeur;  // incrémentation du tableau de test pc

                if (ligne < 3)
                {
                    if (ligne == 0)
                    {
                    tableaupc[0][0]++;
                    }
                else if (ligne == 1)
                    {
                    tableaupc[1][0]++;
                    }
                else if (ligne == 2)
                    {
                    tableaupc[2][0]++;
                    }
                }


                if (colonne < 3)
                {
                    if (colonne == 0)
                    {
                    tableaupc[3][0]++;
                    }
                else if (colonne == 1)
                    {
                    tableaupc[4][0]++;
                    }
                else if (colonne == 2)
                    {
                    tableaupc[5][0]++;
                    }

                }
                if (ligne<3) // incrémentation diagonal
                {
                    if ((ligne == 0) && (colonne == 0))
                    {
                        tableaupc[6][0]++;
                    }
                    else if ((ligne == 1) && (colonne == 1))
                    {
                        tableaupc[6][0]++;
                        tableaupc[7][0]++;

                    }
                    else if ((ligne == 2)&& (colonne == 2))
                    {
                         tableaupc[6][0]++;
                    }
                    else if ((ligne == 2) && (colonne == 0))
                    {
                        tableaupc[7][0]++;
                    }
                    else if ((ligne == 0)&& (colonne == 2))
                    {
                        tableaupc[7][0]++;
                    }

                }





            if (tour < 9)
            {
                for(ligne=0;ligne<3;ligne++)
                {   if ((tableau[ligne][0]==valeur)&&(tableau[ligne][1]==valeur)&&(tableau[ligne][2]==valeur))
                    {
                    gagner = 1;
                    null = 1;

                    }
                }

                for(colonne=0;colonne<3;colonne++)
                 {  if ((tableau[0][colonne]==valeur)&&(tableau[1][colonne]==valeur)&&(tableau[2][colonne]==valeur))
                    {
                    gagner = 1;
                    null = 1;
                    }
                }


                }
                if (((tableau[0][0]==valeur)&&(tableau[1][1]==valeur)&&(tableau[2][2]==valeur))||((tableau[2][0]==valeur)&&(tableau[1][1]==valeur)&&(tableau[0][2]==valeur)))
                {
                    gagner = 1;
                    null = 1;
                }


        printf("                 \n");
        printf("    0 1 2\n");
        printf("    _____ \n");
        printf(" 0 |%c|%c|%c| \n",tableau[0][0], tableau[0][1], tableau[0][2]);
        printf("    -+-+- \n");
        printf(" 1 |%c|%c|%c| \n",tableau[1][0], tableau[1][1], tableau[1][2]);
        printf("    -+-+- \n");
        printf(" 2 |%c|%c|%c|\n",tableau[2][0], tableau[2][1], tableau[2][2]);
        printf("    ----- \n");


        printf("%d %d \n", tableaupc[0][0], tableaupc[0][1]);
        printf("%d %d \n", tableaupc[1][0], tableaupc[1][1]);
        printf("%d %d \n", tableaupc[2][0], tableaupc[2][1]);
        printf("%d %d \n", tableaupc[3][0], tableaupc[3][1]);
        printf("%d %d \n", tableaupc[4][0], tableaupc[4][1]);
        printf("%d %d \n", tableaupc[5][0], tableaupc[5][1]);
        printf("%d %d \n", tableaupc[6][0], tableaupc[6][1]);
        printf("%d %d \n", tableaupc[7][0], tableaupc[7][1]);


    }



        if (valeur == 'x')
        {
        printf("Ordi a Gagner en %d tours \n", tour);
        printf("           ");

        }
        else
        {
        printf("Joueur 1 a Gagner en %d tours \n", tour);
        printf("            \n");

        }








    return 0;

}



