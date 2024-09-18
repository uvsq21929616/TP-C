#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <unistd.h>
#include <string.h>
#include "tris.h"


/* -------------------------------------------------------------------------- */
/* echanger                                                                   */
/* void echanger(int *t, int n1, int n2)                                      */
/*                                                                            */
/* Echanger les �l�ments d'indice [n1] et [n2] du tableau d'entiers [t]       */
/*                                                                            */
/* Entr�es :                                                                  */
/*   - [t]  : tableau d'entiers                                               */
/*   - [n1] : indice                                                          */
/*   - [n2] : indice                                                          */
/*                                                                            */
/* Modifications :                                                            */
/*   - [t]  : tableau d'entiers                                               */
/*                                                                            */
/* -------------------------------------------------------------------------- */

   void echanger(int *t, int n1, int n2)  
   {
      int inter;
   
      inter = t[n1];
      t[n1] =  t[n2];
      t[n2] = inter;
   }



/* -------------------------------------------------------------------------- */
/* tri_[algo_tri]                                                             */
/* void tri_[algo_tri] (int *t, int n, structSondes *complexite)             */
/*                                                                            */
/* Trier le tableau d'entiers [t] � [n] �l�ments                              */
/* [algo_tri] : bulle_naif, bulle_bool, bulle_opt, selection, insertion       */
/*                                                                            */
/* Entr�es :                                                                  */
/*   - [t] : tableau d'entiers                                                */
/*   - [n] : nombre d'entiers du tableau                                      */
/*                                                                            */
/* Modifications :                                                            */
/*   - [t] : tableau d'entiers                                                */
/*                                                                            */
/* Sorties :                                                                  */
/*   - [sondes] : structure r�sultat des sondes sur l'algorithme         */
/*            sondes.nb_comparaisons                                     */
/*            sondes.nb_echanges                                         */
/*            sondes.nb_copies                                           */
/* -------------------------------------------------------------------------- */

   structSondes tri_bulle_naif(int *t, int n)
   {
      int i, j;
      structSondes sondes = {0, 0, 0};
   	
     
      return sondes;
   }



   structSondes tri_bulle_bool(int *t, int n)
   {
   // A faire : utilisation d'un drapeau (bool�en) qui teste que les donn�es sont tri�es
   // en une lecture des donn�es
   

      structSondes sondes = {0, 0, 0};
   
      return sondes;
   }
	
	

   structSondes tri_bulle_opt(int *t, int n)
   {
   // A faire : on teste l'endroit du dernier �change pour modifier la boucle principale.
   // Si le dernier �change est entre t_0 et t_1 alors on a termin�.
      
      structSondes sondes = {0, 0, 0};
   

      return sondes;
   }








   structSondes tri_selection(int *t, int n)
   {  

      structSondes sondes = {0, 0, 0};
  
      return sondes;   
   }



   structSondes tri_insertion(int *t, int n)
   {

      structSondes sondes = {0, 0, 0};
   
      return sondes;
   }




/* -------------------------------------------------------------------------- */
/* tri_rapide                                                                 */
/* void tri_rapide (int *t, int gauche, int droite, structSondes *complexite)*/
/*                                                                            */
/* Trier la portion du tableau d'entiers [t] comprise entre les indices       */
/* [gauche] et [droite]                                                       */
/*                                                                            */
/* Entr�es :                                                                  */
/*   - [t] : tableau d'entiers                                                */
/*   - [gauche] : indice gauche                                               */
/*   - [droit] : indice droit                                                */
/*                                                                            */
/* Modifications :                                                            */
/*   - [t] : tableau d'entiers                                                */
/*                                                                            */
/* Sorties :                                                                  */
/*   - [sondes] : structure r�sultat des sondes sur l'algorithme              */
/*            sondes.nb_comparaisons                                     */
/*            sondes.nb_echanges                                         */
/*            sondes.nb_copies                                           */
/* -------------------------------------------------------------------------- */

   structSondes tri_rapide(int *t, int gauche, int droite)
   {
   

      structSondes sondes = {0, 0, 0};
  
      return sondes;			
   
   }
