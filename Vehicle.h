//
//  Vehicle.h
//  Lab01
//
//  Created by Adam Di Cioccio on 2022-02-03.
//

#pragma once

#include <stdio.h>
#include <iostream>

class Vehicle {
private:
    int _w, _d;

public:
    
    int getW();
    int getD();
    
    Vehicle();

    Vehicle(int w);

    Vehicle(int w, int d);
    
    ~Vehicle();
    
    void printVehicle();
    
    Vehicle(Vehicle &copy) {
        _w = copy.getW();
        _d = copy.getD();
    
    }
    
    Vehicle(Vehicle *copy) : Vehicle(*copy) {}
    
    //overload assignment operator
    void operator=(Vehicle&);
    
    //overload comparison operator
    void operator==(Vehicle&);
    
    //overload postfix inc and dec
    void operator++(int);
    void operator--(int);
    
    //overload prefix inc and dec
    void operator++();
    void operator--();
    

};


#ifndef Vehicle_h
#define Vehicle_h


#endif /* Vehicle_h */
