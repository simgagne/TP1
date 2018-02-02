/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments
	//1-  Creez 15 objets du classe produit
	Produit* produit1 = new Produit;
	Produit* produit2 = new Produit;
	Produit* produit3 = new Produit;
	Produit* produit4 = new Produit;
	Produit* produit5 = new Produit;
	Produit* produit6 = new Produit;
	Produit* produit7 = new Produit;
	Produit* produit8 = new Produit;
	Produit* produit9 = new Produit;
	Produit* produit10 = new Produit;
	Produit* produit11 = new Produit;
	Produit* produit12 = new Produit;
	Produit* produit13 = new Produit;
	Produit* produit14 = new Produit;
	Produit* produit15 = new Produit;
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
	produit3->modifierNom("carotte");
	produit3->modifierPrix(3.99);
	produit3->modifierReference(4);
	//   afficher les attributs de cet objet Produit
	produit3->afficher();
	
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon rayon = Rayon();
	//4-  Modifiez la catégorie  du rayon
	rayon.modifierCategorie("Fruits et legumes");
    // 5- Ajouter 6 produits de  voret chaoix dans le rayon créé
	rayon.ajouterProduit(produit1);
	rayon.ajouterProduit(produit2);
	rayon.ajouterProduit(produit3);
	rayon.ajouterProduit(produit4);
	rayon.ajouterProduit(produit5);
	rayon.ajouterProduit(produit6);
    // 6- afficher le contenu du rayon
	rayon.afficher();
  
	//7-  Creez un objet de classe client à l'aide du constructeur
	Client client = Client("Gratton", "Bob", 55, "G7V 3H8", 198505);

	//8-  afficher l'etat des attributs du client
	client.afficherClient();

	//9-   Le client achete 9 produits
	client.acheter(produit1);
	client.acheter(produit2);
	client.acheter(produit3);
	client.acheter(produit4);
	client.acheter(produit5);
	client.acheter(produit6);
	client.acheter(produit7);
	client.acheter(produit8);
	client.acheter(produit9);

	//10- Afficher le contenu du panier du client
	client.afficherPanier();
     //11- livrer le panier du client
	client.livrerPanier();
    
	//12- afficher le contenu du panier du client
	client.afficherPanier();
	//13-  terminer le programme correctement

	produit1 = nullptr;
	delete produit1;
	produit2 = nullptr;
	delete produit1;
	produit3 = nullptr;
	delete produit1;
	produit4 = nullptr;
	delete produit1;
	produit5 = nullptr;
	delete produit1;
	produit6 = nullptr;
	delete produit1;
	produit7 = nullptr;
	delete produit1;
	produit8 = nullptr;
	delete produit1;
	produit9 = nullptr;
	delete produit1;
	produit10 = nullptr;
	delete produit1;
	produit11 = nullptr;
	delete produit1;
	produit12 = nullptr;
	delete produit1;
	produit13 = nullptr;
	delete produit1;
	produit14 = nullptr;
	delete produit1;
	produit15 = nullptr;
    

	system("PAUSE");
	return 0;
}
