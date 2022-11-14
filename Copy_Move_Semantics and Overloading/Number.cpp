#include "Integer.h"
class Number{
    Integer m_Value{};
 public:
    Number(int value):m_Value{value}{}
};
Number CreateNumber(int num){
    Number n{num};
    return n;
}

int main(){
 Number n1{1};
 auto n2{n1};
 n2 = n1;

 auto n3{CreateNumber(3)};
 n3 = CreateNumber(3);
}