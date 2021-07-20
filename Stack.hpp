
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.hpp
 * Author: Sala 6
 *
 * Created on 27 de agosto de 2018, 11:31 AM
 */

#ifndef STACK_HPP
#define STACK_HPP
#include "NodeDouble.hpp"
template<class T>
class Stack {
public:
    Stack();
    Stack(const Stack& orig);
    bool isEmpty();
    void push(T);
    T pop();
    virtual ~Stack();
private:
  NodeDouble<T>* top;
  
};

#endif /* STACK_HPP */

