#include "Integer.h"
#include <iostream>
#include <memory>

class IntPtr {
    Integer *m_p;
 public:
    IntPtr(Integer *p) :m_p(p){

    }
    ~IntPtr(){
        delete m_p;
    }
    Integer *operator ->(){
        return m_p;
    }
    Integer & operator *(){
        return *m_p;
    }
};
void Process(std::unique_ptr<Integer> ptr){
    std::cout << ptr->GetValue() << std::endl;
}
void Process2(std::shared_ptr<Integer> ptr){
    std::cout << ptr->GetValue() << std::endl;
}
void CreateInteger(){
    std::unique_ptr<Integer> p(new Integer);
    (*p).SetValue(3);
    Process(std::move(p));
    //IntPtr p = new Integer; //method without smart pointers from <memory>
    //p->SetValue(3); //method that uses overload ->

    std::shared_ptr<Integer> p2(new Integer);
    (*p2).SetValue(23);
    Process2(std::move(p));
    std::cout << p2->GetValue() << std::endl;
    
}

int main(){
    CreateInteger();
    return 0;

}