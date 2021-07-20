/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LimkedDouble.hpp
 * Author: Sala 6
 *
 * Created on 5 de septiembre de 2018, 02:15 PM
 */

#ifndef LIMKEDDOUBLE_HPP
#define LIMKEDDOUBLE_HPP
#include <vector>
#include <string>
#include "NodeDouble.hpp"
template <class T>
class LinkedDouble {
public:
    LinkedDouble ();
    bool isEmpty();
    NodeDouble<T>* findNode(std::string);
    NodeDouble<T>* getNode(int );
    std::vector<T> getList();
    T* findObject(std::string);
    void addNode(T);
    void addFirst(T);
    void addLast(T);
    void addBeforeTo(NodeDouble<T>*,T);
    void addAfterTo(NodeDouble<T>*,T);
    void addSort(T);
    std::vector<T> printList(bool);
    T* getObject(int);
    T getFirst();
    T getLast();
    T deleteNode(NodeDouble<T>*);
          
     virtual ~LinkedDouble();
private:
NodeDouble<T>* head;
//NodeDouble<T>* previous;
NodeDouble<T>* last;
//NodeDouble<T>* next;
};

#endif /* LIMKEDDOUBLE_HPP */

