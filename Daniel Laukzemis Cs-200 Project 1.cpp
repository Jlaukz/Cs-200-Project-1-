//polymorphic approach to lab 4 
// need access array in this project! see animal examples 
#include <iomanip>
using namespace std; 

class Person
{
	public:
		Person(string n, string DOB);
		string getName() const;
		string getDOB() const;
		virtual void print() const = 0;
	private:
		string name;
		string Dateofbirth;
};

Person::Person(string n, string DOB)
{
	name = n;
	DOB = Dateofbirth;
}
string Person::getName() const{return name;}
string Person::getDOB() const{return Dateofbirth;}


class Staff: public Person
{
	public:
		Staff(string n, string DOB, string ID, string SD);
	
	private:
		string EmployeeID;
		string StartDate;
};

Staff::Staff(string n, string DOB, string ID, string SD):Person(n, DOB){
	EmployeeID = ID;
	StartDate = SD;
}


class Student: public Person
{
	public:
		Student(string n, string DOB, float GPA, int CC, string SD, string GD);
	private:
		float GradePointAverage;
		int CurrentCredits;
		string StartDate;
		string GradDate;
};
Student::Student(string n, string DOB, float GPA, int CC, string SD, string GD):Person(n, DOB){
	GradePointAverage = GPA;
	CurrentCredits = CC;
	StartDate = SD;
	GradDate = GD;
}

class Faculty: public Person
{
	public:
		Faculty(string n, string DOB, string subj);
	private:
		string Subject;
};
Faculty::Faculty(string n, string DOB, string subj):Person(n, DOB){
	subj = Subject;
}

class Facilities: public Staff
{
	public:
		Facilities(string n, string DOB, string ID, string SD, string DR);
	private:
		string Duties;
	//Duties/responsibilites	
};
Facilities::Facilities(string n, string DOB, string ID, string SD, string DR):Staff(n, DOB, ID, SD){
	Duties = DR;
}

class Administration: public Staff
{
	public:
		Administration(string n, string DOB, string ID, string SD, string DEP);
	private:
		string department;
};
Administration::Administration(string n, string DOB, string ID, string SD, string DEP):Staff(n, DOB, ID, SD){
	department = DEP;
}

class IT:public Staff
{
	public:
		IT(string n, string DOB, string ID, string SD, bool sal);
	private:
		bool salaried;
};

IT::IT(string n, string DOB, string ID, string SD, bool sal):Staff(n, DOB, ID, SD){
	salaried = sal;
}

int main(){

	system ("pause");
	return 0;
}

