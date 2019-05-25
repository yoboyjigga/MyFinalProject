/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.cpp
 * Author: rcc
 * 
 * Created on May 24, 2019, 10:50 AM
 */

#include "Car.h"

Car::Car() {
    this->brand= " ";
    this->enginesz= 0;
    this->seats = 0;
    this->type = " ";
    this->year= 0;
}

Car::Car(string brand,
    string type,
    int seats,
    int enginesz,
    int year ) {
    this->SetBrand(brand);
    this->SetEnginesz(enginesz);
    this->SetSeats(seats);
    this->SetType(type);
    this->SetYear(year);
    
}

Car::Car(const Car& orig) {
    this->brand=orig.brand;
    this->enginesz=orig.enginesz;
    this->seats=orig.seats;
    this->type=orig.type;
    this->year=orig.year;
           
}

Car::~Car() {
}

void Car::SetYear(int year) {
    this->year = year;
    
}

int Car::GetYear() const {
    return year;
}

void Car::SetEnginesz(int enginesz) {
    this->enginesz = enginesz;
}

int Car::GetEnginesz() const {
    return enginesz;
}

void Car::SetSeats(int seats) {
    this->seats = seats;
}

int Car::GetSeats() const {
    return seats;
}

void Car::SetType(string type) {
    this->type = type;
}

string Car::GetType() const {
    return type;
}

void Car::SetBrand(string brand) {
    this->brand = brand;
}

string Car::GetBrand() const {
    return brand;
}

