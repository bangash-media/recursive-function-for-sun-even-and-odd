#include <iostream>
/*a recursive function that computes sum of all even 
and odd numbers from 1 to n,where n is given as parameter*/
using namespace std;

int even(int num); //function declaration for even numbers
int odd(int num); //function declaration for even numbers
int main() 
{
	int num;
	cout<<"Enter The Number \"n\": "; cin>>num;
	cout<<endl<<endl;
	if (num%2==0) //if even number is entered
	{
		cout<<"Sum Of Even Numbers= "<<even(num); //passes the input value function def.
		cout<<endl<<endl; 
		cout<<"Sum Of Odd Numbers= "<<odd(num-1); //passes the (input-1) value to odd fuction def.
		
	}
	else
	{
		
		cout<<"Sum Of Even Numbers= "<<even(num-1);//passes the (input-1) value to even fuction def.
		cout<<endl<<endl;
		cout<<"Sum Of Odd Numbers= "<<odd(num); //passes the input value function def.
	}
}
int even(int num) //function defination for even function
{
	int start=2;
	if (start<=num)
	return num+even(num-2);
	else 
	return 0;

}
int odd(int num) //function defination for odd function
{
	int start=1;
	if (start<=num)
	return num+odd(num-2);
	else 
	return 0;
}
