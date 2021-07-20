/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListNote.hpp
 * Author: Sala 6
 *
 * Created on 24 de agosto de 2018, 03:27 PM
 */

#ifndef LISTNOTE_HPP
#define LISTNOTE_HPP
#include <cstdlib>
template<class T>class LinkedDouble;

template<class T> class NodeDouble {
public:
    //friend class Stack<T>;
    friend class LinkedDouble<T>;
   // friend class LinkedList<T>;
    NodeDouble();
    NodeDouble(T);
    T getInfo();
    
    virtual ~NodeDouble();
private:
    T info;
    NodeDouble<T>* next;
   NodeDouble< T>* provious;
};
template <class T>
NodeDouble<T>::NodeDouble(){
    next=NULL;
    provious=NULL;
}
template <class T>
NodeDouble<T>::NodeDouble(T info){
    this->info = info;
    next=NULL;
    provious= NULL;
}
template <class T>
NodeDouble<T>::~NodeDouble(){
   
}



#endif /* LISTNOTE_HPP */

