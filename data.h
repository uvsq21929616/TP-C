#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>
#include <unistd.h>
#include <string.h>




/* -------------------------------------------------------------------------- */
/* f_lire_data                                                                */
/* int * f_lire_data(char *fichier, int *n);                                  */
/*                                                                            */
/* Cr�er un tableau [t]  contenant les  entiers  lus  dans le fichier texte   */
/* dans le fichier texte de nom [fichier]                                     */
/*                                                                            */
/* Entr�es :                                                                  */
/*   - [fichier] : nom du fichier texte contenant les donn�es entieres        */
/*                 premi�re ligne   : nombre [n] d'�l�ments � lire            */
/*                 lignes suivantes : les [n] entiers � lire                  */
/*                                                                            */
/* Modifications :                                                            */
/*   - [n]       : nombre entier d'�l�ments lus                               */
/*                                                                            */
/* Sorties :                                                                  */
/*   - [t]       : tableau de type int o� sont stock�s les entiers lus        */
/* -------------------------------------------------------------------------- */

int * f_lire_data(char *fichier, int *n);




/* -------------------------------------------------------------------------- */
/* f_ecrire_data                                                              */
/* void f_ecrire_data(char *fichier, int *t, int n)                           */
/*                                                                            */
/* Ecrire les [n] �l�ments de type entier du tableau [t] dans un fichier de   */
/* type texte de nom [fichier]                                                */
/*                 premi�re ligne   : nombre [n] d'�l�ments � lire            */
/*                 lignes suivantes : les [n] entiers de [t]                  */
/*                                                                            */
/* Entr�es :                                                                  */
/*   - [fichier] : nom du fichier                                             */
/*   - [t] : tableau d'entiers                                                */
/*   - [n] : nombre d'entiers du tableau                                      */
/*                                                                            */
/* -------------------------------------------------------------------------- */

void   f_ecrire_data(char *fichier, int *t, int n); 



/* -------------------------------------------------------------------------- */
/* ecrire_data                                                                */
/* void ecrire_data(int *t, int n)                                            */
/*                                                                            */
/* Ecrire les [n] �l�ments de type entier du tableau [t]  sur stdout          */
/*                                                                            */
/* Entr�es :                                                                  */
/*   - [t] : tableau d'entiers                                                */
/*   - [n] : nombre d'entiers du tableau                                      */
/*                                                                            */
/* -------------------------------------------------------------------------- */

void   ecrire_data(int *t, int n);



/* -------------------------------------------------------------------------- */
/* data_triee                                                                 */
/* int *data_triee(int n)                                                     */
/*                                                                            */
/* Cr�er un tableau [t]  contenant les  [n] premiers entiers  dans l'ordre    */
/* et sans ex-aequo                                                           */
/*                                                                            */
/*                                                                            */
/* Entr�es :                                                                  */
/*   - [n]   : nombre d'entiers du tableau � cr�er                            */
/*                                                                            */
/* Sorties :                                                                  */
/*   - [t]   : tableau d'entiers                                              */
/* -------------------------------------------------------------------------- */

int * data_triee(int n);



/* -------------------------------------------------------------------------- */
/* data_triee_inverse                                                         */
/* int *data_triee_inverse(int n)                                             */
/*                                                                            */
/* Cr�er un tableau [t]  contenant les  [n] premiers entiers  dans l'ordre    */
/* inverse et sans ex-aequo                                                   */
/*                                                                            */
/*                                                                            */
/* Entr�es :                                                                  */
/*   - [n]   : nombre d'entiers du tableau � cr�er                            */
/*                                                                            */
/* Sorties :                                                                  */
/*   - [t]   : tableau d'entiers                                              */
/* -------------------------------------------------------------------------- */

int * data_triee_inverse(int n);



/* -------------------------------------------------------------------------- */
/* random_data                                                                */
/* int *random_data(int n)                                                    */
/*                                                                            */
/* Cr�er un tableau [t]  contenant [n] nombres entiers al�atoires             */
/*                                                                            */
/*                                                                            */
/* Entr�es :                                                                  */
/*   - [n]   : nombre d'entiers du tableau � cr�er                            */
/*                                                                            */
/* Sorties :                                                                  */
/*   - [t]   : tableau d'entiers                                              */
/* -------------------------------------------------------------------------- */

int * random_data(int n);



