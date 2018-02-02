#include "panier.h"
#include "Produit.h"
#include <iostream>
#include "client.h"
using namespace std;

Panier::Panier(int capacite)
{
	capaciteContenu_ = capacite;
	contenuPanier_ = new Produit*[capaciteContenu_];
	nombreContenu_ = 0;
	totalAPayer_ = 0.0;
}

Produit** Panier::obtenirContenuPanier() const 
{
	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const 
{
	return nombreContenu_;
}

double Panier::obtenirTotalApayer() const
{
	return totalAPayer_;
}

void Panier::ajouter(Produit * prod)
{
	if (capaciteContenu_ <= nombreContenu_) {
		capaciteContenu_ *= 2;
		Produit** tableauTemporaire = new Produit*[capaciteContenu_];
		for (int i = 0; i < nombreContenu_; i++)
		{
			tableauTemporaire[i] = contenuPanier_[i];
		}
		delete[] contenuPanier_;
		contenuPanier_ = tableauTemporaire;
		tableauTemporaire = nullptr;
	}
	contenuPanier_[nombreContenu_++] = prod;
	totalAPayer_ += prod->obtenirPrix();
}

Panier::~Panier() 
{
	delete[] contenuPanier_;
	contenuPanier_ = nullptr;
}

void Panier::livrer() 
{
	delete[] contenuPanier_;
	nombreContenu_ = 0;
	capaciteContenu_ = 0;
	totalAPayer_ = 0.0;
}

void Panier::afficher() const
{
	cout << "Vous avez " << obtenirNombreContenu() << " articles." << endl;
	cout << "Total : " << obtenirTotalApayer() << " $ CAD" << endl;
	for (int i = 0; i < nombreContenu_; i++) {
		contenuPanier_[i]->afficher();
	}
}