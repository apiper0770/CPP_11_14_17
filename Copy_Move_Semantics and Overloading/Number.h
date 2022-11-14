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
