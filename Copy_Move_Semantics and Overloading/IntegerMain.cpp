#include "Integer.h"
#include "Number.h"
#include "IntPtr.h"
#include <iostream>

Integer Add(const Integer &a, const Integer &b){
	Integer temp ;
	temp.SetValue(a.GetValue() + b.GetValue()) ;
	return temp ;
}
int main() {
	Integer a(1), b(3) ;
	a.SetValue(Add(a,b).GetValue()) ;
	
	CreateInteger();

	Number n1{1};
 	auto n2{n1};
 	n2 = n1;

 	auto n3{CreateNumber(3)};
 	n3 = CreateNumber(3);

	return 0;
}