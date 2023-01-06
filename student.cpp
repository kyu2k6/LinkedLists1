#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

Student::Student() {
	
}

Student::~Student() {
	delete &Name;
}


char* Student::getName() {
	return Name;
}


