//
// Created by Paul Krczal on 13.06.22.
//

#ifndef TESTKLAUSUR_METADATA_H
#define TESTKLAUSUR_METADATA_H
#pragma once
#include "string"

class MetaData {

public:
    MetaData(std::string key, std::string value) : key(key), value(value) {}

    std::string get(std::string key);

    std::string getKey();

    std::string getValue();

private:
    std::string key;
    std::string value;

};


#endif //TESTKLAUSUR_METADATA_H
