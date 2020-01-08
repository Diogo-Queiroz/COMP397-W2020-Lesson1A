
#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"

int main()
{
	std::cout << "Hello World!" << std::endl;

	int one = 1;

	int* one_p = nullptr;

	one_p = &one;

	std::cout << "one = " << one << std::endl;

	std::cout << "one_p (pointer) = " << one_p << std::endl;

	std::cout << "one_p (value) = " << *one_p << std::endl;

	std::string myName = "Diogo";

	std::cout << myName << std::endl;

	Person diogo = Person(myName, 32);

	diogo.saysHello();

	Student Diogo = Student(diogo.getName(), diogo.getAge(), "301082164");

	Diogo.studies();
	
	return 0;
}
