//
// Created by Paul Krczal on 13.06.22.
//

#ifndef TESTKLAUSUR_IOINTERFACE_H
#define TESTKLAUSUR_IOINTERFACE_H
#pragma once
#include "iostream"


class ioInterface {

    virtual std::ostream & write(std::ostream &out) = 0;
    virtual std::istream & read(std::istream &in) = 0;

};


#endif //TESTKLAUSUR_IOINTERFACE_H
