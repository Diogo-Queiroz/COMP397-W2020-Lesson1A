#include "Student.h"
#include "Person.h"
#include <iostream>

Student::Student(std::string name, int age, std::string studentID)
	:Person(name, age), m_studentID(studentID)
{
}

Student::~Student()
{
}

void Student::studies()
{
	std::cout << getName() << " with the StudentID " << m_studentID << " is Studying" << std::endl;
}
