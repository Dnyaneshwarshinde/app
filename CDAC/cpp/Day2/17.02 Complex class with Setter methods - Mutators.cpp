#include <iostream>
using namespace std;
//using namespace NComplex; //error
namespace NComplex
{
	class Complex
	{
		private:
			//variable or data members or fields
			int real;
			int imag;

		public:
			// member function or methods
			//1.1 input
			//void AcceptInputFromConsole(className * const this)
			//void AcceptInputFromConsole(Complex * const this)
			// c1.AcceptInputFromConsole(); // this=&c1;
			void AcceptInputFromConsole()
			{
				cout<<"Enter Real :: ";
				cin>>this->real;
				cout<<"Enter Imag :: ";
				cin>>this->imag;
			}
			//1.2 output
			//void PrintOutputConsole(Complex * const this)
			void PrintOutputConsole()
			{
				cout<<"this->real ="<<this->real<<"\t["<<&this->real<<" ] "<<endl;
				cout<<"this->imag ="<<this->imag<<"\t["<<&this->imag<<" ] "<<endl;
			}
			// 2. setter methods or mutators
			// modify state of object
			//void SetReal(Complex * const this,int real)
			void SetReal(int real)
			{   // data member=localvaribale
 				this->real=real;
			}
			//void SetImag(Complex * const this,int imag)
			void SetImag(int imag)
			{
				this->imag= imag;
			}

	};// end of complex class
}//end of namespace NComplex
using namespace NComplex;
int main()
{
	Complex c1; //NComplex::Complex c1;
	cout<<"c1 :: "<<endl;
	c1.PrintOutputConsole();

	int real, imag;
	cout<<"Enter Real :: ";
	cin>>real;
	cout<<"Enter imag :: ";
	cin>>imag;

	c1.SetReal(real); // set real data member
	c1.SetImag(imag); // set imag data member

	cout<<"c1 :: print values using print function "<<endl;
	c1.PrintOutputConsole();

	return 0;
}
