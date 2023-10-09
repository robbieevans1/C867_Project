#pragma once
#include <string>
#include "degree.h"

class Student {
public:
	// Constructor
	Student(int studentId, int age, std::string firstName, std::string lastName,
		std::string email, int courseLength[], DegreeProgram degreeProgram)
	{

	}

	// Mutators
	void SetStudentId(int id);
	void SetAge(int age);
	void SetFirstName(std::string firstName);
	void SetLastName(std::string lastName);
	void SetEmail(std::string email);
	void SetCourseLength(int courseLengthInDays[]);
	void SetDegreeProgram(DegreeProgram degreeProgram);

	// Accessors
	int GetStudentId() const;
	int GetAge() const;
	std::string GetFirstName() const;
	std::string GetLastName() const;
	std::string GetEmail() const;
	const int* GetCourseLength() const;
	DegreeProgram GetDegreeProgram() const;



	//Print function
	void Print() const;


private:
	int studentId;
	std::string firstName;
	std::string lastName;
	std::string email;
	int age;
	int courseLengthInDays[3];
	DegreeProgram degreeProgram
};