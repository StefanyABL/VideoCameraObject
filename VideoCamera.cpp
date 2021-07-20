/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VideoCamera.cpp
 * Author: Sala 6
 * 
 * Created on 24 de agosto de 2018, 03:08 PM
 */
#include "VideoCamera.hpp"
#include <sstream>
VideoCamera::VideoCamera() {
    
}


VideoCamera::VideoCamera(std::string id, std::string brand, int cost, bool stock) {
    setId(id);
    setBrand(brand);
    setCost(cost);
    setStock(stock);
    getId();
    getBrand();
    getCost();
    getStock();
}   

void VideoCamera::setId(std::string id) {
    this->id=id;
}
void VideoCamera::setBrand(std::string brand) {
    this->brand=brand;
}
void VideoCamera::setCost(int cost) {
    this->cost=cost;
}

void VideoCamera::setStock(bool stock){
    this->stock=stock;
}
std::string VideoCamera::getId() {
    return id;
}
std::string VideoCamera::getBrand() {
    return brand;
}
int VideoCamera::getCost() {
    return cost;
}

bool VideoCamera::getStock() {
    return stock;
}

std::string VideoCamera::parseInt(int cost) {
    std::ostringstream aux;
    //std::ostringstream aus;
    aux<<cost;
    //aux<<stock;
     
    return aux.str();
    //return aus.str();
}
std::string VideoCamera::parseBoolean(bool stock) {
    std::ostringstream aux;
    //std::ostringstream aus;
    aux<<stock;
    //aux<<stock;
     
    return aux.str();
    //return aus.str();
}
std::string VideoCamera::toString() {
 std::string output="";
 std::string costAux=parseInt(cost);
 std::string stockAux=parseBoolean(stock);
 return "VideoCamera[id="+id+",brand="+brand+",cost="+costAux+",stock"+stockAux+"]";
}


VideoCamera::~VideoCamera() {
}

