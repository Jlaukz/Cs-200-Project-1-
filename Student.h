//Student.h
class Student: public Person
{
	public:
		Student();
		void setID(int a);
		virtual void print() const;
	private:
		float GradePointAverage;
		int CurrentCredits;
		string StartDate;
		string GradDate;
};
Student::Student()
{
	//100
	id = 100;
}

void Student::setID(int a)
{
	id = a;
}

void Student::print() const
{
	cout<<"This is a student.\n"
		<<"ID: "<<id<<endl;
}



