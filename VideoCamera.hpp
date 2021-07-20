/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VideoCamera.hpp
 * Author: Sala 6
 *
 * Created on 24 de agosto de 2018, 03:08 PM
 */

#ifndef VIDEOCAMERA_HPP
#define VIDEOCAMERA_HPP

#include <string>

//TO STRING..FUNCIONANDO 
class VideoCamera {
public:
    VideoCamera();
    VideoCamera(std::string, std::string, int,bool);
    void setId(std::string);
    void setBrand(std::string);
    void setCost (int);
    void setStock(bool);
    std::string getId();
    std::string getBrand();
    int getCost ();
    bool getStock();
    std::string toString();
    
    virtual ~VideoCamera();
private:
    std::string id;
    std::string brand;
    int cost;
    bool stock;
   std::string parseInt(int);
   std::string parseBoolean(bool);
   
};

#endif /* VIDEOCAMERA_HPP */

