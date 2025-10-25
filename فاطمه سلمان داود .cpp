#include<iostream>
using namespace std;
class cats
{
public:

    string name ;
    int age ;
};

int main()
{

    cats obj1;
    obj1.name="nemo";
    obj1. age=3 ;
    cout << "the cat's name is:" << obj1.name<< endl;
    cout << "the cat's age is:" << obj1.age << endl;

}
