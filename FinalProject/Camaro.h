/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Camaro.h
 * Author: rcc
 *
 * Created on May 24, 2019, 11:15 AM
 */

#ifndef CAMARO_H
#define CAMARO_H
#include "Car.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>




class Camaro : public Car {
public:
    Camaro();
    Camaro(string brand,
    string type,
    int seats,
    int enginesz,
    int year, string color, string tier);
    Camaro(const Camaro& orig);
    virtual ~Camaro();
    void SetColor(string color);
    string GetColor() const;
    void SetTier(string tier);
    string GetTier() const;
    
    
   friend ostream& operator<<(ostream& out, const Camaro &lb);
    friend istream& operator>>(istream& in, Camaro &lb); 
    
private:
    string tier; 
    string color;
};

#endif /* CAMARO_H */

