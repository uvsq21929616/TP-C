#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>
#include <unistd.h>
#include <string.h>
#include "data.h"



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

   int *f_lire_data(char *fichier, int *n)
   {
      int i;
      FILE *f;
      int *tab;
   
   /* Ouverture du fichier en lecture */
      f = fopen(fichier, "rt");
      if (f == NULL)
      {
         printf("\n\nLecture <f_lire_data> :\nOuverture du fichier %s impossible\n\n", fichier);
         exit(1);
      }
   
   
   /* Lecture du nombre d'�l�ments � lire */ 
      fscanf (f, "%d\n", n);
   
   
   /* Allocation de la m�moire n�cessaire */
      tab = (int *) calloc(*n, sizeof(int));
   
   /* Lecture des n �l�ments */
      for (i = 0; i < *n; i++)
         fscanf (f, "%d\n", &tab[i]);
   
      fclose(f);
      return(tab);
   }


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

   void f_ecrire_data(char * fichier, int *t, int n)
   {
      FILE *f;
      int i;
   
   /* Ouverture du fichier en �criture*/
      f = fopen(fichier, "wt");
      if (f == NULL)
      {
         printf("\n\nEcriture <f_ecrire_data> :\nOuverture du fichier %s impossible\n\n", fichier);
         exit(1);
      }
   
      fprintf(f, "%d\n", n);
   
      for (i = 0; i < n; i++)
         fprintf(f, "%d\n", t[i]);
   
      fclose(f);
   }


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

   void ecrire_data(int *t, int n)
   {
      int i;
   
      printf("\n");
      for (i = 0; i < n; i++)
         printf("%d\n", t[i]);
      printf("\n");
   }

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

   int *data_triee(int n)
   {
      int i;
      int *t;
   
      t = (int *) calloc(n, sizeof(int));
   
      for (i = 0; i < n; i++)
         t[i]  = i;
   
      return t;
   }
	
	
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

   int *data_triee_inverse(int n)
   {
      int i;
      int *t;
      t = (int *) calloc(n, sizeof(int));
   
      for (i = 0; i < n; i++)
         t[n-1-i]  = i;
   
      return t;
   }


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

   int *random_data(int n)
   {
      int i;
      int pid;
      int *t;
   
      pid = getpid ();
      srand(pid);
   
      t = (int *) calloc(n, sizeof(int));
   
      for (i = 0; i < n; i++)
         t[i]  = 1+(int) ((double) n *rand()/(RAND_MAX+1.0));
   
      return t;
   }

