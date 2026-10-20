#include <iostream>

#include <limits>
using namespace std;

int main ()
{
    int age;
    char name[30];
    float height ;

    cout <<"Enter your name :";
    cin.getline(name, 30);

    cout <<"Enter your age :";
    cin >> age;

    cout <<"Enter your height :";
    cin >> height;

    cout <<"My name is " <<name <<"\n";
    cout << "My age is " <<age << "\n";
    cout << "My height is "<<height << "\n";
 return 0;
 
}
