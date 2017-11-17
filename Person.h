//Person.h
class Person
{
	public:
		//Person(string n, string DOB);
		string getName() const;
		string getDOB() const;
		virtual void print() const = 0;
	protected:
		string name;
		int id;
		string Dateofbirth;
};

string Person::getName() const{return name;}
string Person::getDOB() const{return Dateofbirth;}
