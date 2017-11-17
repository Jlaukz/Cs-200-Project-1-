//Administration
class Administration: public Staff
{
	public:
		Administration();
		virtual void print() const;
	private:
		string department;
};
Administration::Administration(){
	
}
void Administration::print() const
{
	cout<<"This is adminstration\n";
}
