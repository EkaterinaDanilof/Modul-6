#include "beauty.h"

beauty::beauty(string name, int weight,int batteryLife ) :Appliances(name,weight), Device(batteryLife)
{
}

void beauty::ShowSpec()
{
	cout <<_name << ": емкость аккумулятора: " << _batteryLife << " вес: " << _weight << endl;
}
