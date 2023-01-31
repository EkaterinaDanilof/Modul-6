#include "portable.h"


portable::portable(string name, int weight, int batteryLife):Appliances(name,weight), Device(batteryLife) 
{
	
}

void portable::ShowSpec()
{
	cout << _name <<": емкость аккумулятора: " << _batteryLife << " вес: " << _weight << endl;
	
}





