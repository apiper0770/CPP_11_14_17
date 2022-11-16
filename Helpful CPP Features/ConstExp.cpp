#include <iostream>

constexpr int GetNumber(){
    //only Literal types [void, scale types(int/float/double), references, array, const expression constructors]
    return 42;
}

constexpr int Add(int x, int y){

    return x + y
}
constexpr int Max(int x, int y){
    return x>y ? x:y;
}

int main(){
    //Behaves as a constexpr function
    constexpr int i = 10;
    int arr[i];

    //Behaves as a constexpr function
    const int j = 5;
    int arr1[j];

    //Behaves as a constexpr function
    int x = GetNumber();

    constexpr int sum = Add(3,5);
    
    return 0;
}
//Literal Types
//void, scaler types, references....etc.
//Should contain only single line statement that should be a return statement