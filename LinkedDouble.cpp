/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.cpp
 * Author: Sala 6
 * 
 * Created on 3 de septiembre de 2018, 10:55 AM
 */

#include "LinkedDouble.hpp"
#include <vector>
#include <valarray>

template<class T> class LinkedDouble;




template<class T> 
LinkedDouble<T>::LinkedDouble() {
    head=NULL;
 
  
    
}

template<class T>
void LinkedDouble<T>::addAfterTo(NodeDouble<T>*node, T info) {
    NodeDouble<T>* newNode= new NodeDouble<T>(info);
    if (node==last){
        node->next=newNode;
        newNode->provious=node;
        last=newNode;
    }else{
        newNode->next=node->next;
        newNode->provious=node;
        node->next->provious=newNode;
        node->next=newNode;
    }
}

template<class T>
void LinkedDouble<T>::addBeforeTo(NodeDouble<T>* node, T info) {
 NodeDouble<T>* newNode= new NodeDouble<T>(info);

 if (node==head){
        node->provious=newNode;
        newNode->next=node;
        head=newNode;
    }else{
        newNode->provious=node->provious;
        newNode->next=node;
        node->provious->next=newNode;
        node->provious=newNode;
    }
}

template<class T>
void LinkedDouble<T>::addFirst(T info) {
    NodeDouble<T>* node= new NodeDouble< T>(info);
    if (isEmpty()){
        head = node;
        last=node;
    last= node;
    }else{
//        node->nenw
        node->next=head;
        head->provious=node;
    }
    
    


}

template<class T>
void LinkedDouble<T>::addLast(T info) {
     NodeDouble<T>* node= new NodeDouble< T>(info);
    if (isEmpty()){
        head = node;
        last=node;
    head= node;
    }else{
//        node->nenw
        node->provious=last;
        last->next=node;
    }

}

template<class T>
void LinkedDouble<T>::addNode(T) {

}

template<class T>
void LinkedDouble<T>::addSort(T info) {
    

    NodeDouble<T>* node = new NodeDouble<T>(info);
    if (isEmpty()){
      head = node;
      last = node;
      
      
    }else{
        NodeDouble<T>* act = head; 
        NodeDouble<T>* ant = NULL;
        //while(actually!=NULL&& info.getId().compare(info.getId())<0){
       while(act!=NULL&&info.getId().compare(act->info.getId())>0){
           ant = act;
           act= act->next;
        
    if  (ant==NULL){
            node->next=head;
            head->provious = node;
            head= node;
        }else{
            ant->next=node;
            node->provious = ant;
            node->next=act;
            if (act==NULL){
                last = node;
        }else{
             //   act<-previous-node;
                act->provious=node;
        }
    }
       }
   
}
}

template<class T>
T LinkedDouble<T>::deleteNode(NodeDouble<T>* node) {
   /*  NodeDouble<T>* newNode;
    if (node!=NULL){
        newNode->provious=NULL;
        node = borrar;
    
  
        
    }
     */
}

template<class T>
NodeDouble<T>* LinkedDouble<T>::findNode(std::string id) {
    /*
     for(int i=0; i<products.size(); i++){
            if(products.at(i).getId().compare(id)==0)
            {
            return &products.at(i);
            //id.compare(product.getId())
        }
    
   

}
     */
 return NULL;
}



template<class T>
T* LinkedDouble<T>::findObject(std::string) {

}

template<class T>
T LinkedDouble<T>::getFirst() {

}

template<class T>
T LinkedDouble<T>::getLast() {

}

template<class T>
std::vector<T> LinkedDouble<T>::printList(bool sw) {
  std::vector<T>output;
    NodeDouble<T>* aux= sw?head:last;
    while(aux!=NULL){
        output.push_back(aux->info);
        aux=sw?aux->next:aux->provious;
    }
    return output;
}

template<class T>
T* LinkedDouble<T>::getObject(int) {

}

template<class T>
bool LinkedDouble<T>::isEmpty() {
    return head==NULL;
    return last==NULL;
}

template<class T>
LinkedDouble<T>::~LinkedDouble<T>() {
}
