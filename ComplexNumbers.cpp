#include <iostream>
#include <string>
using namespace std;

class ComplexNumber
{
private:
    int r; //real
    int i; //imaginary
public:
    ComplexNumber(int r,int i) //Constructor to initialize the numbers
    {
        this->r=r;
        this->i=i;
    }
    int GetRealNumber()
    {
        return r;
    }
    int GetImaginaryNumber()
    {
        return i;
    }
};

class ComplexOperations
{
public:
    string Sum(ComplexNumber a, ComplexNumber b)
    {
        int r = a.GetRealNumber() + b.GetRealNumber();
        int i = a.GetImaginaryNumber() + b.GetImaginaryNumber();
        return std::to_string(r) + "+"+std::to_string(i)+"i"; // return the sum of the 2 complex numbers
    }
};

int main()
{
    int r1,r2,i1,i2;
    std::cout<<"Enter The 1st Real Number:"<<std::endl;
    std::cin>>r1;
    std::cout<<"Enter The 1st Imaginary Number:"<<std::endl;
    std::cin>>i1;
    std::cout<<"Enter The 2nd Real Number:"<<std::endl;
    std::cin>>r2;
    std::cout<<"Enter The 2nd Imaginary Number:"<<std::endl;
    std::cin>>i2;
    
    ComplexNumber c1(r1,i1);
    ComplexNumber c2(r2,i2);
    ComplexOperations complex;
    string sum = complex.Sum(c1,c2); //Summation of 2 complex numbers
    cout << "The Sum = " <<sum<< endl;
    return  0;
}
