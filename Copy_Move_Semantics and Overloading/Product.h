#include <iostream>
#include "Integer.h"

class Product{
    Integer m_Id;
    int x;
 public:
    Product(const Integer &id):m_Id(id), x(id.GetValue()){
        std::cout << "Product(const Integer &)" << std::endl;
    }
    ~Product(){
        std::cout << "~";
    }
    const Integer & GetInteger()const{
        return m_Id;
    }
    //Type Conversion operator from Product to Integer
    operator Integer(){
        return m_Id;
    }
};