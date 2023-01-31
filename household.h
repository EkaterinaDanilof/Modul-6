#pragma once
#include "Appliances.h"
#include "Device.h"

class household final:public Appliances, Device
{
public:
	household(string name, int weight,int batteryLife);
	void ShowSpec() override;
};

