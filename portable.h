#pragma once
#include "Appliances.h"
#include "Device.h"

class portable final :public Appliances, Device
{
public:
	portable(string name,int weight,int batteryLife );
	void ShowSpec() override;


};

