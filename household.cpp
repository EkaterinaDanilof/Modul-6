#include "household.h"


household::household(string name, int weight, int batteryLife ) :Appliances(name,weight), Device(batteryLife)
{
}

void household::ShowSpec()
{
	cout << _name << ":  ������� ������������: " << _batteryLife << " ���: " << _weight << endl;
}
