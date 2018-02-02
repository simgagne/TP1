#include "Rayon.h"
#include "Produit.h"


// CONSTRUCTEURS

Rayon::Rayon()
{
	categorie_ = "inconnu";
	tousProduits_= nullptr;
	capaciteProduits_ = 0;
	nombreProduits_ = 0;
}

Rayon::Rayon(string cat)
{
	categorie_ = cat;
	tousProduits_= nullptr;
	capaciteProduits_ = NULL;
	nombreProduits_ = NULL;

}

// METHODES D'ACCES

string Rayon::obtenirCategorie() const
{
	return categorie_;
}

Produit** Rayon::obtenirTousProduits() const
{
	return tousProduits_;
}

int Rayon::obtenirCapaciteProduits() const
{
	return capaciteProduits_;
}

int Rayon::obtenirNombreProduits() const
{
	return nombreProduits_;
}

// METHODE DE MODIFICATION

void Rayon::modifierCategorie(string cat) 
{
	categorie_ = cat;
}

// AUTRES METHODES

void Rayon::ajouterProduit(Produit* produit) {

	if (tousProduits_== nullptr) {
		capaciteProduits_ = 5;
		tousProduits_= new Produit*[capaciteProduits_];
	}

	else if (tousProduits_ != nullptr && nombreProduits_ == capaciteProduits_) {
		capaciteProduits_ += 5;
		Produit** temporaire = new Produit*[capaciteProduits_];
		for (int i = 0; i < nombreProduits_; i++) {
			temporaire[i] = tousProduits_[i];
		}
		delete[] tousProduits_;
		tousProduits_ = temporaire;
		temporaire = nullptr;
	}
	tousProduits_[nombreProduits_++] = produit;
}

void Rayon::afficher() const {
	cout << "Categorie:" << obtenirCategorie() << endl;
	cout << "Nombre de produits:" << obtenirNombreProduits() << endl;
	cout << "LISTE" << endl;
	for (int i = 0; i < nombreProduits_; i++) {
		tousProduits_[i]->afficher();
	}
	cout << "Capacite de la categorie: " << obtenirCapaciteProduits() << endl;
}