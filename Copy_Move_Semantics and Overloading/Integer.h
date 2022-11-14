#pragma once
#include <iostream>
class Integer {
	int *m_pInt;
public:
	//Default constructor
	Integer();
	//Parameterized constructor
	Integer(int value);
	//Copy constructor
	Integer(const Integer &obj);
	//Move constructor
	Integer(Integer &&obj);
	//Destructor
	~Integer();
	//Copy Assignment
	Integer & operator=(const Integer &obj);
	//Move Assignment
	Integer & operator=(Integer && obj);
	int GetValue()const;
	void SetValue(int value);
	
	//Overload preincrement operator ++
	Integer & operator ++();
	//Overload postincrement operator ++
	Integer operator ++(int);
	//Overload 
	bool operator ==(const Integer &a)const;

	//Copy assignment
	Integer & operator =(const Integer &a);
	//Move assignment
	Integer & operator =(Integer &&a);
	//
	Integer operator +(const Integer & a)const;

	void operator ()();
	friend std::ostream & operator <<(std::ostream & out, const Integer &a);
	friend std::istream & operator >> (std::istream &input, Integer &a);

};
