///////////////////////////////////////////////////////////////////////////////
///          University of Hawaii, College of Engineering
/// @brief   ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file    Animal.h
/// @version 1.0
///
/// @author  Michael Lau <mjlau20@hawaii.edu>
/// @date    10_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#ifndef EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
#define EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H

#include <string>

using namespace std;

enum Gender { UNKNOWN_GENDER, FEMALE, MALE };

const float UNKNOWN_WEIGHT = -1;

class Animal {
public:
    Animal(const string &species);

    Animal(const string &species, Gender gender);

    Animal(const string &species, Gender gender, float weight);

    Animal(const string &species, float weight);

    static const string &getKingdom();

    const string &getSpecies() const;

    Gender getGender() const;

    void setGender(Gender gender);

    float getWeight() const;

    void setWeight(float weight);

    void printInfo();

    bool isValid();

protected:
    static const string kingdom;
    string              species;
    enum Gender         gender = UNKNOWN_GENDER;
    float               weight = UNKNOWN_WEIGHT;

};


#endif //EE205_LAB08C_ALL_CREATURES_GREAT_AND_SMALL_ANIMAL_H
