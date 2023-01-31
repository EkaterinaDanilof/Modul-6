#pragma once
#include "Appliances.h"
#include "Device.h"

class beauty final :public Appliances, Device
{public:
	beauty(string name,int weight,int batteryLife);
	void ShowSpec() override;
};

