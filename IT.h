//IT.h
class IT:public Staff
{
	public:
		IT();
		virtual void print() const;
	private:
		bool salaried;
};

IT::IT(){
}
void IT::print() const
{
	cout<<"This is an IT person\n";
}

