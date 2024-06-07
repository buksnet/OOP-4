#pragma once
#include <iostream>

class Person {
protected:
	std::string name;
	int age;
public:
	Person();
	Person(const Person& T);

	Person(std::string name, int age);

	~Person(void);
	virtual void setName(std::string name);

	void setAge(int age);

	std::string getName();

	int getAge();

	Person& operator=(const Person& H);

	friend std::istream& operator>>(std::istream& in, Person& H);

	friend std::ostream& operator<<(std::ostream& out, Person& H);
};

class Student : public Person {
protected:
	int rank;
	std::string subject;
public:
	Student();
	Student(Student& S);

	Student(std::string name, int age, std::string subject, int rank);

	~Student();

	void setRank(int rank);

	int getRank();

	void setSubject(std::string subject);

	std::string getSubject();

	void checkRank();

	Student& operator=(Student& S);

	friend std::istream& operator>>(std::istream& in, Student& H);

	friend std::ostream& operator<<(std::ostream& out, Student& S);
};
