#include "beauty.h"

beauty::beauty(string name, int weight,int batteryLife ) :Appliances(name,weight), Device(batteryLife)
{
}

void beauty::ShowSpec()
{
	cout <<_name << ": ������� ������������: " << _batteryLife << " ���: " << _weight << endl;
}
