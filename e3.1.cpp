/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E3.1
it writes program that reads an integer and prints whether it is negative, zero, or positive.
*/

#include <iostream>
using namespace std;
int main()
{

int number;

cout<<"\n enter an integer "<< endl;
cin>>number;

if(number<0)

{ 
cout<<"\n it is a negative number"<< endl;
}

else if(number>0)

{ 
cout<<"\n it is a positive number"<< endl;
}

else

{
cout<<"it is zero"<< endl;
}

return 0;

}
