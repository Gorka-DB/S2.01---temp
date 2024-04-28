#include "lecteur.h"


Lecteur::Lecteur(Diaporama pDiaporama, bool pModeAuto, bool pEstCharge) : modeAuto(pModeAuto), estCharge(pEstCharge), diapoCharge(pDiaporama) {}

Lecteur::~Lecteur() {
    
}

void Lecteur::demarrer()
{
    this->estCharge = false;
    this->modeAuto = false;
}

void Lecteur::arreter()
{
    this->estCharge = false;
    // + aretter le diaporama
}

void Lecteur::setModeAuto(bool pMode){
    this->modeAuto = pMode;
}

void Lecteur::setEstCharge(bool pEstCharge)
{
    (*this).estCharge = pEstCharge;
}
/*
void Lecteur::setTitreDiapoCourant(string pTitreDiapoCourant){
    (*this).titreDiapoCourant = pTitreDiapoCourant;
}
*/
bool Lecteur::getMode(){
    return (*this).modeAuto;
}

bool Lecteur::getEstCharge(){
    return (*this).estCharge;
}
/*
string Lecteur::getTitreDiapoCourant(){
    return (*this).titreDiapoCourant;
}
*/
void Lecteur::chargerDiapo(Diaporama pDiapo){
    this->diapoCharge = pDiapo;
    this->estCharge = true;
    this->modeAuto = false;
    //this->titreDiapoCourant = pDiapo.getTitreDiaporama();
}


void Lecteur::enleverDiapo(){
    if (estCharge) {
        this->diapoCharge.vider();
        this->estCharge = false;
        this->modeAuto = false;
    }
    else {
        cout << "Le lecteur n'est pas chargé" << endl;
    }
    
    //this->titreDiapoCourant = "";
}

