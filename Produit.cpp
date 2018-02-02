#include "Produit.h"
#include <iostream>
#include <string>

using namespace std;

Produit::Produit()
{
	nom_ = "outil";
	reference_ = 0;
	prix_ = 0.0;
}

Produit::Produit(string nom, int reference, double prix)
{
	nom_ = nom;
	reference_ = reference;
	prix_ = prix;
}

string Produit::obtenirNom() const
{
	return nom_;
}

double Produit::obtenirPrix() const
{
	return prix_;
}

int Produit::obtenirReference() const
{
	return reference_;
}

void Produit::modifierNom(string nom) 
{
	nom_ = nom;
}

void Produit::modifierReference(int reference)
{
	reference_ = reference;
}

void Produit::modifierPrix(double prix)
{
	prix_ = prix;
}

void Produit::afficher() const
{
	cout << "nom: " << obtenirNom() << "  *** reference: " 
		<< obtenirReference() << "  *** prix: " << obtenirPrix() << endl;
}



