//============================================================================
// Name        : Pronote_v3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

// Matières
	std ::string identifiant;
	const double COEFF_CULTURE_GENERALE= 4;
	const double COEFF_MATHS = 3;
	const double COEFF_CEJM = 3;
	const double COEFF_INFORMATIQUE = 12;

	double moyenneFinale;
	double moyenne;

	double noteCultureGenerale;
	double noteMaths;
	double noteCejm;
	double noteInformatique;

	bool cultureValide;
	bool mathsValide;
	bool cejmValide;
	bool infoValide;

	bool notesValides;

	int nombreEtudiants;
// Saisies

	    std::cout<<"Nombres d'étudiants"<<std::endl;
	    std::cin>>nombreEtudiants;

	    while (nombreEtudiants<0){
	    	std::cout<<"Nombres d'étudiants (positif)"<<endl;
	    	std::cin>>nombreEtudiants;
	    }

	    double moyenneEtudiants[nombreEtudiants]{};

	for(int i=0;i<nombreEtudiants;i++){
	    std::cout<<"Etudiant n° "<<i<<std::endl;

		std::cout<<"Identifiant: ";
		std::cin>>identifiant;

		std::cout<<"noteCultureGenerale : ";
	    std::cin>>noteCultureGenerale;

	while((noteCultureGenerale<0)||(noteCultureGenerale>20)){
		std::cout<<"Note Invalide, entrez nouvelle valeur"<<std::endl;
		std::cin>>noteCultureGenerale;
	}

		std::cout<<"noteMaths : ";
		std::cin>>noteMaths;

	while((noteMaths<0)||(noteMaths>20)){
		std::cout<<"Note Invalide, entrez nouvelle valeur"<<std::endl;
		std::cin>>noteMaths;
	}

		std::cout<<"noteCejm : ";
		std::cin>>noteCejm;

	while((noteCejm<0)||(noteCejm>20)){
		std::cout<<"Note Invalide, entrez nouvelle valeur"<<std::endl;
		std::cin>>noteCejm;
	}

		std::cout<<"noteInformatique: ";
		std::cin>>noteInformatique;

	while((noteInformatique<0)||(noteInformatique>20)){
		std::cout<<"Note Invalide, entrez nouvelle valeur"<<std::endl;
		std::cin>>noteInformatique;
	}


// Vérifications Saisies

	cultureValide = (noteCultureGenerale>=0)&&(noteCultureGenerale<=20);
	mathsValide = (noteMaths>=0)&&(noteMaths<=20);
	cejmValide = (noteCejm>=0)&&(noteCejm<=20);
	infoValide = (noteInformatique>=0)&&(noteInformatique<=20);

		notesValides = (cultureValide)&&(mathsValide)&&(cejmValide)&&(infoValide);
	if (notesValides){
		moyenneFinale=(COEFF_CULTURE_GENERALE+COEFF_MATHS+COEFF_CEJM+COEFF_INFORMATIQUE);				moyenne=((COEFF_CULTURE_GENERALE*noteCultureGenerale)+(COEFF_MATHS*noteMaths)+(COEFF_CEJM*noteCejm)+(COEFF_INFORMATIQUE*noteInformatique))/moyenneFinale;
	}
	else if (!notesValides){
		std::cout<<"Erreur : au moins une note est invalide"<<std::endl;
	}


	if (moyenne>=10){
		std::cout<<"Admis"<<std::endl;
	}
	else{
		std::cout<<"Non Admis"<<std::endl;
	}


	// Calcul
		moyenneFinale=(COEFF_CULTURE_GENERALE+COEFF_MATHS+COEFF_CEJM+COEFF_INFORMATIQUE);
		moyenne=((COEFF_CULTURE_GENERALE*noteCultureGenerale)+(COEFF_MATHS*noteMaths)+(COEFF_CEJM*noteCejm)+(COEFF_INFORMATIQUE*noteInformatique))/moyenneFinale;

		moyenneEtudiants[i]=moyenne;

	//Affichage des résultats
		std::cout<< "Identifiant "<< identifiant <<std::endl;
		std::cout<<"Moyenne Pondérée : "<< moyenne <<std::endl;

	}
		for(int i=0;i<nombreEtudiants;i++){
		std::cout<<moyenneEtudiants[i]<< " ";
		}
}
