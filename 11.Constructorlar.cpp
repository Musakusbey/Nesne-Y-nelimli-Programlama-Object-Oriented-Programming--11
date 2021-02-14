#include <iostream>

using namespace std;

class Employee
{
	private:
		
		string name;
		
		int salary;
		
	public:
		
		void setSalary(int maas)
		{
			salary=maas;
		}
		
		int getSalary()
		{
			return salary;
		}
		
		void setName(string isim)
		{
			name=isim;
		}
		
		string getName()
		{
			return name;
		}
		
	void showinfos()
{
	cout<<"isim:"<<name<<endl;
	
	cout<<"maas"<<salary<<endl;
}

};

int main ()  
{
	Employee employee("musa",18);
	
	employee.showinfos();
	
	return 0;
}
