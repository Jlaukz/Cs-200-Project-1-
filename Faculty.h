//Faculty.h
class Faculty: public Person
{
	public:
		Faculty();
		virtual void print() const;
	private:
		string Subject;
};
Faculty::Faculty(){
	id = 300;
}

void Faculty::print() const
{
	cout<<"This is a Faculty.\n"
		<<"ID: "<<id<<endl;
}
