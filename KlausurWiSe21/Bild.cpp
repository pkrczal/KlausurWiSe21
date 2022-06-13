//
// Created by Paul Krczal on 13.06.22.
//

#include "Bild.h"

int Bild::getPixel(int zeile, int spalte) {
    if (zeile < this->zeilen && zeile >= 0 && spalte < this->spalten && spalte >= 0) {
        int returnValue = v[zeile][spalte];
        return returnValue;
    }
    return 0;
}

void Bild::addMetaData(string key, string value) {
    MetaData *m = new MetaData(key, value);
    mV.push_back(m);
}

std::ostream &Bild::write(ostream &out) {
    out << "Image-Datei" << "\n";
    out << "Anzahl Infos: " << mV.size() << "\n";
    for (MetaData *mv: mV) {
        out << mv->getKey() << ": " << mv->getValue() << "\n";
    }
    out << "Zeilen: " << this->zeilen << "\n";
    out << "Spalten: " << this->spalten << "\n";
    for (int i = 0; i < zeilen; i++) {
        for (int t = 0; t < spalten; t++) {
            out << v[i][t] << " ";
        }
    }
    out << "\n";
    return out;
}
