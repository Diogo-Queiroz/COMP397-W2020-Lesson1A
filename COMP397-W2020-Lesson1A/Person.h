#pragma once
#ifndef __PERSON__
#define __PERSON__

#include <string>

class Person
{
public:
	Person(std::string name, int age);
	~Person();

	void saysHello();

	// getters and setters
	std::string getName();
	void setName(std::string name);

	int getAge();
	void setAge(int age);
	
private:
	std::string m_name;
	int m_age;
};


#endif /* deinfed (__PERSON__) */