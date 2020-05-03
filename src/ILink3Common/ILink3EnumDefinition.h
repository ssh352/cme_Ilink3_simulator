//
// Created by pbeerkens on 4/29/20.
//

#ifndef CMESIMULATOR_ILINK3ENUMDEFINITION_H
#define CMESIMULATOR_ILINK3ENUMDEFINITION_H

#include <string>
#include <vector>
#include "ILink3FieldDefinition.h"

struct ILink3EnumValidValues {
    std::string name_;
    std::string description_;
    std::string value_;
};

struct ILink3EnumDefinition {
    std::string name_;
    const ILink3FieldDefinition* encodingType_ {nullptr};
    std::vector <ILink3EnumValidValues> validValues_;
};


#endif //CMESIMULATOR_ILINK3ENUMDEFINITION_H
