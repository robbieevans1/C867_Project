#include <iostream>
#include "student.h"

Student::Student(int id, int studentAge, std::string fName, std::string lName,
	std::string emailAddress, int courseLength[], DegreeProgram degreeProgramType)
	: studentId(id), firstName(fName), lastName(lName),
	email(emailAddress), age(studentAge), degreeProgram(degreeProgramType) 
{
	
	for (int i = 0; i < 3; ++i) {
		courseLengthInDays[i] = courseLength[i];
	}

}

// Initialize Mutators
void Student::SetStudentId(int id) 
{
	studentId = id;
};

void Student::SetAge(int studentAge)
{
	age = studentAge;
};

void Student::SetFirstName(std::string fName) {
	firstName = fName;
}

void Student::SetLastName(std::string lName) {
	lastName = lName;
}

void Student::SetEmail(std::string emailAddress) {
	email = emailAddress;
}

void Student::SetCourseLength( int courseLength[]) {
	for (int i = 0; i < 3; i++) {
		courseLengthInDays[i] = courseLength[i];
	}
}

//Initialize Accessors
int Student::GetAge() const {
	return age;
}

int Student::GetStudentId() const {
	return studentId;
}

std::string Student::GetFirstName() const {
	return firstName;
}

std::string Student::GetLastName() const {
	return lastName;
}

std::string Student::GetEmail() const {
	return email;
}

const int* Student::GetCourseLength() const {
	return courseLengthInDays;
}

DegreeProgram Student::GetDegreeProgram() const {
	return degreeProgram;
}

void Student::Print() const {
	std::cout << "Student ID: " << studentId << std::endl;
	std::cout << "First Name: " << firstName<< std::endl;
	std::cout << "Last Name: " << lastName<< std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Email: " << email << std::endl;
	std::cout << "Program: " << degreeProgram << std::endl;
	std::cout << "Course Length: " << courseLengthInDays << " days" << std::endl;

}