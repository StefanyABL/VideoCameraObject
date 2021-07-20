/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tail.cpp
 * Author: Sala 6
 * 
 * Created on 31 de agosto de 2018, 03:33 PM
 */
#include <cstdlib>
#include "Tail.hpp"

template<class T>
Tail<T>::Tail() {
    head=NULL;
}

template<class T>
void Tail<T>::addNode(T info) {
    NodeDouble<T>*newNode=new NodeDouble<T>(info);
    if(isEmpty()){
        head=newNode;
    }
    else{
        NodeDouble<T>*aux=head;
        while(aux->next!=NULL){
            aux=aux->next;
        }
        aux->next=newNode;
    }
}

template<class T>
T Tail<T>::getNode() {
}    

template<class T>
bool Tail<T>::isEmpty() {
    return head==NULL;
}

template <class T>
Tail<T>::~Tail<T>(){
   
}



