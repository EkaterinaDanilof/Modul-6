#pragma once 

#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
    Appliances(string name, int weight);
    virtual void ShowSpec() override;

protected:
    int _weight;
    string _name;
};

