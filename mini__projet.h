#ifndef MINI_PROJETC_H_INCLUDED
#define MINI_PROJETC_H_INCLUDED
#define max 300

int i,n,nb=0,nbr;


typedef struct {
int identifiant,nblivremp;
char nom[100],prenom[100],adressemail[100],login[100],motdepass[100];

}Etudiant;
Etudiant les_Etudiants[max];

int nbrtotale=0;

typedef struct {
char titre[100],auteur[100],editeur[100];
int id,ISBN,nbrexemplaire,annee;


}livre;
livre leslivres[100];





void affiche_menu_ad();
void affiche_menu_Et();
void saisie_un_livre();
void saisir_plusieur_livre();
void afficher_lesLivres();
void supprimer_unLivre();
void reserver_un_livre();
void saisie_un_etudiant();
void saisir_plusieur_etudiants();
void afficher_lesetudiants();
void supprimer_unEtudiant();
void reservationLivre();
void quitter();






#endif // MINI_PROJETC_H_INCLUDED
