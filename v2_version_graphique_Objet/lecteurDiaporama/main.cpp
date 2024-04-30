#include "image.h"
#include "diaporama.h"
#include "lecteur.h"
#include "lecteurvue.h"
#include <QApplication>
#include <vector>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    lecteurvue lecteurvue0;
    lecteurvue0.show();
    return a.exec();
}
