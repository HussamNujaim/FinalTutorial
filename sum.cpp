#include <iostream>

class Math
{
private:
    int a,b;
public:
    Math(int a,int b) //Constructor to initialize the numbers
    {
        this->a=a;
        this->b=b;
    }
    int Sum() // Return the sum of the two numbers
    {
        return a+b;
    }
};

using namespace std;

int main()
{
    int a,b;
    std::cout<<"Enter TWO Numbers:"<<std::endl;
    std::cin>>a>>b;
    Math math(a,b);
    int sum = math.Sum();
    cout << "The Sum = " <<sum<< endl;
    return  0;
}