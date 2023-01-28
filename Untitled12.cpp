#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	string name;
	int  age;
	float height; //Decimal points // Double
	
	cout<<"Enter your name: "; // Promot
	
	cin>>name;					// promot
	
	cout<<"What is your age: ";
	cin>>age;
	
	cout<<"What is your height: ";
	cin>>height;
	
	cout<<"hello, "<<name<<". your age is "<<age<<" and your height is approx  "<<fixed << setprecision(2) << height;
	
		

	return 0;
}













