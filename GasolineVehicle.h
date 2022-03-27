//
//  GasolineVehicle.h
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-03-27.
//

#include "Vehicle.h"

class GasolineVehicle : virtual public Vehicle {
private:
    float currentGasoline;
    float maxGasoline = 50;
    
public:
    GasolineVehicle(float currentGasoline, float engineEffeciency);
    
    GasolineVehicle();
    
    virtual ~GasolineVehicle();
    
    float calculateRange();
    
    float percentEnergyRemaining();
    
    void drive(float km);

    
};

#ifndef GasolineVehicle_h
#define GasolineVehicle_h


#endif /* GasolineVehicle_h */