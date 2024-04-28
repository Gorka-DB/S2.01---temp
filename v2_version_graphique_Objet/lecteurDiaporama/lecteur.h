#ifndef LECTEUR_H
#define LECTEUR_H
#include "diaporama.h"
#include <string>
#include <vector>
using namespace std;

class Lecteur {
    
    private:
        Diaporama diapoCharge;
        bool modeAuto;
        bool estCharge;
        //string titreDiapoCourant;
    

    public:
        Lecteur(Diaporama, bool = false, bool = false);
        ~Lecteur();
        void chargerDiapo(Diaporama);
        void enleverDiapo();
        void demarrer();
        void arreter();

        void setModeAuto(bool);
        void setEstCharge(bool);
        //void setTitreDiapoCourant(string);

        bool getMode();
        bool getEstCharge();
        //string getTitreDiapoCourant();
    

};

#endif // LECTEUR_H