#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include "image.h"
#include <string>
#include <vector>
using namespace std;



class Diaporama {
    private:
        string titreDiaporama;
        unsigned int vitesseDefilement;
        int posImageCourante;
        vector<Image> ImagesDuDiaporama;

    public:
        Diaporama(string titreDiaporama = " ", unsigned int vitesseDefilement = 1);

        void vider();
        void setVitesseDefilement(unsigned int vitesseDefilement);
        void setTitreDiaporama(string titreDiaporama);

        string getTitreDiaporama();
        int getVitesseDefilement();

        void ajouterImage(Image image);
        
        void afficherImageCouranteDiaporama();

        void avancerImageDiaporama();
        void reculerImageDiaporama();         

        void trierImages();
};


#endif // DIAPORAMA_H
