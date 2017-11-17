//Staff.h

class Staff: public Person
{
	public:
		Staff();
		virtual void print() const;
	
	private:
		string EmployeeID;
		string StartDate;
};

Staff::Staff()
{
	id = 200;
}


void Staff::print() const
{
	cout<<"This is a staff\n"
		<<"ID:"<<id<<endl;
}
