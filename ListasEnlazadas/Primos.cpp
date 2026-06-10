#include <iostream>

#include <cmath> 

using namespace std;

class Nodo{

    private:

        int dato;

        Nodo* next;

    public:

        Nodo(int dato){

            this->dato = dato;

            this->next=nullptr;

        }

        Nodo* getNext(){

            return this->next;

        }

        void setNext(Nodo *s){

            this->next= s;

        }

        int getDato(){

            return this->dato;

        }

        void setDato(int dato){

            this->dato= dato;

        }

};






 Nodo* insertarNodo(Nodo* head, Nodo* nuevo){

    if(head==nullptr){

        return nuevo;

    }

    Nodo* temp= head;

    while(temp->getNext()!=nullptr){

        temp= temp->getNext();

    }

    temp->setNext(nuevo);

    return head;

}



 void MostrarLista(Nodo* head){

    Nodo* temp= head;

    while(temp!=nullptr){

        cout<<temp->getDato()<<"->";

        temp= temp->getNext();

    }

    cout<<"null"<<endl;

}


bool isPrimo(int num){

    if (num==1){
        return true;
    }
    if(num==2){
        return false;
    }

    int mitad= num/2;

    for(int i=2; i<=mitad; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

Nodo* EliminarPrimos(Nodo* head){


    return nullptr;
}


 int main(){

   

    Nodo* head = nullptr;

    head = insertarNodo(head, new Nodo(3));

    head = insertarNodo(head, new Nodo(4));

    head = insertarNodo(head, new Nodo(5));

    MostrarLista(head);

    head = EliminarPrimos(head);

    MostrarLista(head);

    return 0;

}