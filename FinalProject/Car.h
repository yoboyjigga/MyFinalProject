/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: rcc
 *
 * Created on May 24, 2019, 10:50 AM
 */

#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Car {
public:
    Car();
    Car(string brand,
    string type,
    int seats,
    int enginesz,
    int year );
    Car(const Car& orig);
    virtual ~Car();
    void SetYear(int year);
    int GetYear() const;
    void SetEnginesz(int enginesz);
    int GetEnginesz() const;
    void SetSeats(int seats);
    int GetSeats() const;
    void SetType(string type);
    string GetType() const;
    void SetBrand(string brand);
    string GetBrand() const;
protected:
    string brand;
    string type;
    int seats;
    int enginesz;
    int year; 
};

#endif /* CAR_H */

