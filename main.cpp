#include <iostream>
using namespace std;
#include "Person.h"
#include "Staff.h"
#include "IT.h"
#include "Student.h"
#include "Faculty.h"
#include "Facilities.h"
#include "Administration.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Initialize Person* 
	Person* person;
	//Student
	person = new Student;
	person->print();
	//Faculty
	person=new Faculty;
	person->print();
	//Staff
	person=new Staff;
	person->print();
	
	
	//IT
	person=new IT;
	person->print();
	
	//Facilities
	person=new Facilities;
	person->print();
	//Administration
	person=new Administration;
	person->print();

	
	return 0;
}
