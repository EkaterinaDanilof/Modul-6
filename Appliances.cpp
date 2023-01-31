#include "Appliances.h"
#include "Appliances.h"

Appliances::Appliances(string name, int weight) : _name(name), _weight(weight)
{
}

void Appliances::ShowSpec()
{
    cout << "Weight: " << _weight << endl;
}
