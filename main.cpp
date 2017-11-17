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
	Person* pPTR;
	//Student
	pPTR = new Student;
	pPTR->print();
	//Faculty
	pPTR=new Faculty;
	pPTR->print();
	//Staff
	
	//IT
	pPTR=new IT;
	
	//Facilities
	//Administration

	//IT ppp;
	//pPTR=&ppp;
//	person->print();
//	cout<<person->getName()<<endl;
//	cout<<person->getDOB();
	return 0;
}
