#include "diaporama.h"

Diaporama::Diaporama(string titreDiaporama, unsigned int vitesseDefilement) {
    this->posImageCourante = 0;
    this->titreDiaporama = titreDiaporama;
    this->vitesseDefilement = vitesseDefilement;
}

void Diaporama::vider() {
    this->ImagesDuDiaporama.clear();
    this->ImagesDuDiaporama.push_back(Image());
    this->titreDiaporama = "vide";
}

void Diaporama::setVitesseDefilement(unsigned int vitesseDefilement)
{
    while(true)
    {
        if (vitesseDefilement < 1){
            cout << "La vitesse de défilement doit être supérieure à 0";
        }
        else{
            this->vitesseDefilement = vitesseDefilement;
            break;
        }
    };
}
    
void Diaporama::setTitreDiaporama(string titreDiaporama)
{
    (*this).titreDiaporama = titreDiaporama;
}

string Diaporama::getTitreDiaporama(){
    return (*this).titreDiaporama;
}

int Diaporama::getVitesseDefilement(){
    return (*this).vitesseDefilement;
}

void Diaporama::ajouterImage(Image image)
{
    ImagesDuDiaporama.push_back(image);
    // ImagesDuDiaporama.size() - 1 -> position de l'image
}


void Diaporama::afficherImageCouranteDiaporama()
{
    ImagesDuDiaporama[posImageCourante].afficher();
}

void Diaporama::avancerImageDiaporama()
{
    if (posImageCourante < ImagesDuDiaporama.size() - 1)
        posImageCourante++;
    else
        posImageCourante = 0;
}

void Diaporama::reculerImageDiaporama()
{
    if (posImageCourante > 0)
        posImageCourante--;
    else
        posImageCourante = ImagesDuDiaporama.size() - 1;
}

void Diaporama::trierImages()
{
    //Trier les images par catégories
    
}


