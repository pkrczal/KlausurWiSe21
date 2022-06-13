//
// Created by Paul Krczal on 13.06.22.
//

#ifndef TESTKLAUSUR_BILD_H
#define TESTKLAUSUR_BILD_H

#include "string"
#include "vector"
#include "MetaData.h"
#include "ioInterface.h"

#pragma once

using namespace std;

class Bild : ioInterface {

public:
    explicit Bild(int zeilen, int spalten, string name) : zeilen(zeilen), spalten(spalten), name(name),
                                                          v(zeilen, std::vector<int>(spalten, 0)) {
        arr = create(zeilen, spalten);
    }

    Bild() = default;

    Bild(Bild &b1) : zeilen(b1.zeilen), spalten(b1.spalten), name(b1.name),
                     v(b1.zeilen, std::vector<int>(b1.spalten, 0)) {

    }

    int ** create(int zeile, int spalte) {
        int **rArr = new int*[zeile]();
        for (int i = 0; i < zeile; i++) {
            rArr[i] = new int[spalte]();
            for (int t = 0; t < spalte; t++) { rArr[i][t] = 0; }
        }
        return rArr;
    }

    ~Bild() {
        for (MetaData *m : mV) {
            delete m;
        }
    }

    void setPixel(int zeile, int spalte, int wert);

    int getPixel(int zeile, int spalte);

    void addMetaData(string key, string value);

    std::ostream & write(std::ostream & out) override;

    std::istream & read(std::istream & in) override;

private:

    std::vector<MetaData*> mV;
    std::vector<std::vector<int>> v;
    int **arr;
    int zeilen;
    int spalten;
    string name;
};


#endif //TESTKLAUSUR_BILD_H
