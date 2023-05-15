#include <stdio.h>
#include <stdlib.h>
#include "mini__projet.h"
#include <string.h>



 void affiche_menu_ad(){
      printf("\n      *****************      Gestion Bibliotheque Admin   **************** \n\n");
           printf(" ========================================================================================== \n\n");
                     printf("  Totale des etudiants est : %d\n\n",n);
                     printf("  Totale des livres est : %d\n\n",nbrtotale);
           printf(" ------------------------------<1.  Saisir un etudiant  >------------------------------ \n");
           printf(" ------------------------------<2.  Saisir plusieurs etudiants  >----------------------- \n");
           printf(" ------------------------------<3.  Afficher la liste des etudiants  >------------------ \n");
           printf(" ------------------------------<4.  Rechercher un etudiant par id  >--------------- \n");
           printf(" ------------------------------<5.  saisir un livre  >-------------- \n");
           printf(" ------------------------------<6.  saisir plusieur livres  >-------------------- \n");
           printf(" ------------------------------<7.  Afficher les livres  >-------- \n");
           printf(" ------------------------------<8. Supprimier un etudiant  >-------------------------- \n");
           printf(" ------------------------------<9. supprimer un livre  >----------------------------- \n");
           printf(" ------------------------------<10.  Quitter  >---------------------------------------- \n");
           printf(" ==========================================================================================\n\n");
           printf("Entre votre choix : ");
     


     
 }

 void affiche_menu_Et(){
       printf("\n        **********      Gestion Bibliotheque Etudiant  ********* \n\n");
           printf("  ========================================================================== \n\n");
                     printf("  Totale des etudiants est : %d\n\n",n);
                     printf("  Totale des livres est : %d\n\n",nbrtotale);
                      
           printf("------------------------------<1.  reserver un livre  >------------------------------ \n");
           printf("------------------------------<2.  quitter  >----------------------- \n");
            printf("\nVotre choix?\n\n");
 
  
     
 }

 void afficher_lesetudiants(){
 for(i=0;i<n;i++){

    printf("le nom est:%s\n",les_Etudiants[i].nom);
    printf("le prenom est:%s\n",les_Etudiants[i].prenom);
    printf("l'identifiant est:%d\n",les_Etudiants[i].identifiant);
    printf("le login est:%s\n",les_Etudiants[i].login);
    printf("le mot de pass est:%s\n",les_Etudiants[i].motdepass);
 }
 }

 void afficher_lesLivres(){
 for(i=0;i<n;i++){

    
    printf("le titre est:%s\n",leslivres[i].titre);
    printf("l'auteur est:%s\n",leslivres[i].auteur);
    printf("l'identifiant est:%d\n",leslivres[i].id);
    printf("l'editeur est:%s\n",leslivres[i].editeur);
    printf("l'ISBN est:%d\n",leslivres[i].ISBN);
    printf("le nombre d'exemplaire est:%d\n",leslivres[i].nbrexemplaire);
    printf("  l'année:%d\n",leslivres[i].annee);
 }
 }

 void quitter(){
      system("cls");
 printf("\n\n        \t------------FIN-----------\n\n\n");
 printf("\n\n        \t------------MERCI-----------\n\n\n");
 }

 void saisie_un_etudiant(){
     printf("veuiller entrer le nom de l'etudiant\n");
 scanf("%s",&les_Etudiants[n].nom);
 rewind(stdin);
 printf("veuiller entrer le prenom\n");
 scanf("%s",&les_Etudiants[n].prenom);
 rewind(stdin);
 printf("veuiller entrer l'Identifiant:\n");
 scanf("%f",&les_Etudiants[n].identifiant);
 rewind(stdin);
  printf("veuiller entrer l'adresse mail:\n");
 scanf("%s",&les_Etudiants[n].adressemail);
 rewind(stdin);
 printf("veuiller entrer le login:\n");
 scanf("%s",&les_Etudiants[n].login);
 rewind(stdin);
  printf("veuiller entrer le mot de pass:\n");
 scanf("%s",&les_Etudiants[n].motdepass);
 rewind(stdin);
 n=n+1;
 }

 void saisir_plusieur_etudiants(){
 printf("veuiller entrer le nombre d'etudiant dont vous souhaiter saisir");
 scanf("%d",&nb);
 for(i=0;i<nb;i++){
        printf("veuiller entrer le nom de l'etudiant\n");
 scanf("%s",&les_Etudiants[n].nom);
 rewind(stdin);
 printf("veuiller entrer le prenom\n");
 scanf("%s",&les_Etudiants[n].prenom);
 rewind(stdin);
 printf("veuiller entrer l'Identifiant:\n");
 scanf("%f",&les_Etudiants[n].identifiant);
 rewind(stdin);
  printf("veuiller entrer l'adresse mail:\n");
 scanf("%s",&les_Etudiants[n].adressemail);
 rewind(stdin);
 printf("veuiller entrer le login:\n");
 scanf("%s",&les_Etudiants[n].login);
 rewind(stdin);
  printf("veuiller entrer le mot de pass:\n");
 scanf("%s",&les_Etudiants[n].motdepass);
 rewind(stdin);
 n=n+1;

 }
 }
 void saisie_un_livre(){
  printf("veuiller entrer le titre du livre\n");
 scanf("%s",&leslivres[n].titre);
 rewind(stdin);
 printf("veuiller entrer l'auteur du livre\n");
 scanf("%s",&leslivres[n].auteur);
 rewind(stdin);
 printf("veuiller entrer l'Identifiant du livre:\n");
 scanf("%d",&leslivres[n].id);
 rewind(stdin);
  printf("veuiller entrer l'editeur du livre:\n");
 scanf("%s",&leslivres[n].editeur);
 rewind(stdin);
 printf("veuiller entrer l'ISBN du livre:\n");
 scanf("%d",&leslivres[n].ISBN);
 rewind(stdin);
  printf("veuiller entrer le nombre d'exemplaire:\n");
 scanf("%d",&leslivres[n].nbrexemplaire);
 rewind(stdin);
 printf("veuiller entrer le année:\n");
 scanf("%d",&leslivres[n].annee);
 rewind(stdin);
 nbrtotale=nbrtotale+1;


 }

 void saisir_plusieur_livre(){
      printf("veuiller entrer le nombre de livre dont vous souhaiter saisir");
 scanf("%d",&nbr);
 for(i=0;i<nbr;i++){
        printf("veuiller entrer le titre du livre\n");
 scanf("%s",&leslivres[n].titre);
 rewind(stdin);
 printf("veuiller entrer l'auteur du livre\n");
 scanf("%s",&leslivres[n].auteur);
 rewind(stdin);
 printf("veuiller entrer l'Identifiant du livre:\n");
 scanf("%d",&leslivres[n].id);
 rewind(stdin);
  printf("veuiller entrer l'editeur du livre:\n");
 scanf("%s",&leslivres[n].editeur);
 rewind(stdin);
 printf("veuiller entrer l'ISBN du livre:\n");
 scanf("%d",&leslivres[n].ISBN);
 rewind(stdin);
  printf("veuiller entrer le nombre d'exemplaire:\n");
 scanf("%d",&leslivres[n].nbrexemplaire);
 rewind(stdin);
 printf("veuiller entrer le année:\n");
 scanf("%d",&leslivres[n].annee);
 rewind(stdin);
 nbrtotale=nbrtotale+1;

 } }
 void supprimer_unEtudiant(){
int j,k,num;
printf("veuiller entre l'identifiant de l'etudiant souhaité supprimer ");
scanf("%d",num);
for(i=0;i<=n;i++){
    if (les_Etudiants[i].identifiant==num){
        k=i;
        n=n-1;
        for(k=j;j<=n;j++){
            les_Etudiants[j]=les_Etudiants[j+1];
        }
    }
}
}

 void supprimer_unLivre(){
int j,k,num;
printf("veuiller entre l'id du livre souhaité supprimer ");
scanf("%d",num);
for(i=0;i<=n;i++){
    if (leslivres[i].id==num){
        k=i;
        n=n-1;
        for(k=j;j<=n;j++){
            leslivres[j]=leslivres[j+1];
        }
    }
}
}
void rechercher_un_etudiant_par_id(){
char d[50];
     printf("\nentrer l'identifiant de letudiant : \n");
     
     scanf("%s",&d);

     for(i=1;i<=n;i++){

         if(strcmp(les_Etudiants[i].identifiant,d)==0){

                printf("\nInformations sur l'etudient (%s) :\n",d);
                printf("----------------------------------\n");
                printf("Nom: %s\n",les_Etudiants[i].nom);
                printf("Prenom : %s\n",les_Etudiants[i].prenom);
                printf("adressemail : %s\n",les_Etudiants[i].adressemail);
                printf("mot de passe : %s\n",les_Etudiants[i].motdepass);
               
           }
       }
}
void reservationLivre(){
    int c;
    printf("veuiller entrer votre nom\n");
 scanf("%s",&les_Etudiants[n].nom);
 rewind(stdin);
 printf("veuiller entrer votre prenom\n");
 scanf("%s",&les_Etudiants[n].prenom);
 rewind(stdin);
 printf("veuiller entrer votre Identifiant:\n");
 scanf("%f",&les_Etudiants[n].identifiant);
 rewind(stdin);
  printf("veuiller entrer votre adresse mail:\n");
 scanf("%s",&les_Etudiants[n].adressemail);
 rewind(stdin);
 printf("veuiller entrer  login:\n");
 scanf("%s",&les_Etudiants[n].login);
 rewind(stdin);
  printf("veuiller entrer votre mot de pass:\n");
 scanf("%s",&les_Etudiants[n].motdepass);
 rewind(stdin);
 printf("veuillier saisir le nombre de livre a reserver\n");
 printf("PS: vous avez le droit au maximum 3 livres \n");
 scanf("%d",&c);
 rewind(stdin);
 if (c<=3)
 {
     for ( i = 0; i < c; i++)
     {
          printf("veuiller entrer le titre du livre\n");
 scanf("%s",&leslivres[n].titre);

 printf("veuiller entrer l'auteur du livre\n");
 scanf("%s",&leslivres[n].auteur);
 rewind(stdin);
 printf("veuiller entrer l'Identifiant du livre:\n");
 scanf("%d",&leslivres[n].id);
 rewind(stdin);
  printf("veuiller entrer l'editeur du livre:\n");
 scanf("%s",&leslivres[n].editeur);
 rewind(stdin);
 printf("veuiller entrer l'ISBN du livre:\n");
 scanf("%d",&leslivres[n].ISBN);
 rewind(stdin);
  printf("veuiller entrer le nombre d'exemplaire:\n");
 scanf("%d",&leslivres[n].nbrexemplaire);
 rewind(stdin);
 printf("veuiller entrer le année:\n");
 scanf("%d",&leslivres[n].annee);
 rewind(stdin);
     }
     
     
 }
 else printf("entrer un nombre inferieur a 3");
 
 n=n+1;
 nbrtotale=nbrtotale+1;
    
}


int main()
{
    char loginadmin[]="anouar";
char passadmin[]="anouar123";
char rootlogin[30],rootpass[30];
    
char x[50];
     int choix,choix1;
     do{ 
      printf("veuiller indiquer si vous etes un etudiant ou un administrateur\n");
    scanf("%s",x);
    if (strcmp(x,"administrateur")==0){
        printf("Veuillez saisir le login de l'administrateur\n");
scanf("%s",rootlogin);
rewind(stdin);
        printf("Veuillez saisir le mot de passe de l'administrateur\n");
scanf("%s",rootpass);
rewind(stdin);

if(strcmp(rootlogin,loginadmin)==0&&strcmp(rootpass,passadmin)==0){
     affiche_menu_ad();
     scanf("%d", &choix);
     rewind(stdin);
     printf("\n\n");
           switch(choix){
case 1: system("cls");saisie_un_etudiant();break;
case 2: system("cls");saisir_plusieur_etudiants();break;
case 3: system("cls");afficher_lesetudiants();break;
case 4: system("cls");rechercher_un_etudiant_par_id();break;
case 5: system("cls");saisie_un_livre();break;
case 6: system("cls");saisir_plusieur_livre();break;
case 7: system("cls");afficher_lesLivres();break;
case 8: system("cls");supprimer_unEtudiant();break;
case 9:system("cls");supprimer_unLivre();break;
case 10: system("cls");quitter();break;
default : system("cls");printf("votre choix n'est pas valide !!!\n");break;
    } }} else {
        printf("  Les livres disponibles : \n");
        afficher_lesLivres();
       affiche_menu_Et();
     scanf("%d",&choix1);
     rewind(stdin);
    
    printf("\n\n");
           switch(choix1){
case 1: reservationLivre();break;
case 2: quitter();break;
default : printf("votre choix n'est pas valide !!!\n");break;
     }

}}while (choix!=10 || choix1!=2);
    return 0;
}