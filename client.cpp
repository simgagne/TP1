#include "panier.h"
#include "client.h"


Client::Client(string nom, string prenom, int identifiant, string codePostal, long date) {
	nom_ = nom;
	prenom_ = prenom;
	identifiant_ = identifiant;
	codePostal_ = codePostal;
	dateNaissance_ = date;
	monPanier_ = nullptr;
}

//METHODE D'ACCES

string Client::obtenirNom() const {
	return nom_;
}

string Client::obtenirPrenom() const {
	return prenom_;
}

int Client::obtenirIdentifiant() const {
	return identifiant_;
}

string Client::obtenirCodePostal()const {
	return codePostal_;
}

long Client::obtenirDateNaissance() const {
	return dateNaissance_;
}


// METHODE DE MODIFICATION

void Client::modifierNom(string nom) {
	nom_ = nom;
}

void Client::modifierPrenom(string prenom) {
	prenom_ = prenom;
}

void Client::modifierIdentifiant(int identifiant) {
	identifiant_ = identifiant;
}

void Client::modifierCodePostal(string codePostal) {
	codePostal_ = codePostal;
}

void Client::modifierDateNaissance(long date) {
	dateNaissance_ = date;
}

//Autres methodes

void Client::acheter(Produit* prod) {
	if (monPanier_ == nullptr) {
		monPanier_ = new Panier(4);
	}
	monPanier_->ajouter(prod);
}

void Client::afficherClient() const {
	cout << "nom: " << obtenirNom() << endl 
		 << "Prenom: " << obtenirPrenom() << endl
		 << "itentifiant" << obtenirIdentifiant() << endl 
		 << "code postal: " << obtenirCodePostal() << endl
		 << "date de naissance: " << obtenirDateNaissance() << endl;
}

void Client::afficherPanier()const {
	if (monPanier_->obtenirContenuPanier() != 0) {
		monPanier_->afficher();
	}
	else
		cout << "Le panier est vide." << endl;
}

void Client::livrerPanier() {
	monPanier_->livrer();
}