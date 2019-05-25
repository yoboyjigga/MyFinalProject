/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Camaro.cpp
 * Author: rcc
 * 
 * Created on May 24, 2019, 11:15 AM
 */


#include "Car.h"
#include "Camaro.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

Camaro::Camaro() {
    this->color= " ";
    this->tier= " ";
}

Camaro::Camaro(const Camaro& orig) {
    this->SetBrand(orig.GetBrand());
    this->SetEnginesz(orig.GetEnginesz());
    this->SetSeats(orig.GetSeats());
    this->SetType(orig.GetType());
    this->SetYear(orig.GetYear());
    this->color=orig.color;
    this->tier=orig.tier;
}

Camaro::Camaro(string brand,
    string type,
    int seats,
    int enginesz,
    int year,
    string color,
    string tier){
    
    this->SetBrand(brand);
    this->SetEnginesz(enginesz);
    this->SetSeats(seats);
    this->SetType(type);
    this->SetYear(year);
    
    this->color=color;
    this->tier=tier;
}

Camaro::~Camaro() { 
}


void Camaro::SetColor(string color) {
    this->color = color;
}

string Camaro::GetColor() const {
    return color;
}

void Camaro::SetTier(string tier) {
    this->tier = tier;
}

string Camaro::GetTier() const {
    return tier;
}

ostream& operator<<(ostream& out, const Camaro &lb)
{
    out << "Brand: " << lb.GetBrand() << endl << " Engine size: " << lb.GetEnginesz() << endl << "Color: "
            << lb.GetColor() << endl << "Seats: " << lb.GetSeats() << endl << "Tier: " << lb.GetTier() << endl 
            << "Type " << lb.GetType() << endl << "Year: " << lb.GetYear() << endl;
    
    return out;
}
istream& operator>>(istream& in, Camaro &lb)
{
    cout<<"Enter Brand: ";
    getline(in, lb.brand);
    cout<<"Enter Engine size:";
    getline(in, lb.GetEnginesz());
    cout<<"Enter color: ";        
    getline(in,lb.GetColor());
    cout<<"Enter number of seats: ";
    getline(in,lb.GetSeats());
    cout<<"Enter Tier of car: ";      
    getline(in,lb.GetTier());
    cout<<"Enter type of car: (please choose between: sedan, suv, truck, sports, or super car.) ";        
    in>>lb.GetType();
    cout<<"Enter year";
    in>>lb.GetYear();
   
    
    
    return in;
    
}