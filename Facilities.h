//Facitlities.h
class Facilities: public Staff
{
	public:
		Facilities();
		virtual void print() const;
	private:
		string Duties;
	//Duties/responsibilites	
};
Facilities::Facilities(){
	id = 0;
}

void Facilities::print() const
{
	cout<<"This is Facilties.\n"
		<<"ID: "<<id<<endl;
}
