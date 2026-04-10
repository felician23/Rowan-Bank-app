#include <iostream>
#include <string>
#include <stdexcept>
#include <C:\Users\Davon.Daniels\source\repos\HelloWorld\header.h>



int main() 
{
	int getRes1;
	int getRes2;
	int primary_identifier;
	std::string primary_name;
	std::cout << "Welcome to Rowan Banking \n";
	std::cout << "\n";
	std::cout << "Please enter your Rowan Bank Primary Identifier to continue.. \n";
	std::cout << "PI: ";
	std::cin >> primary_identifier;
	std::cout << "Name: ";
	std::cin >> primary_name;
	if (primary_identifier == 12 && primary_name == "David")
	{
		 std::cout << "Permission granted";
	}
	else 
	{
		throw std::exception("Wrong credentials");
	}
	std::cout << "\n";
	std::cout << "Deposit: Press 1 | Withdrawal: Press 2 " << std::endl;
	std::cout << "\n";

	
	std::cin >> getRes1;
	if (getRes1 == 1) 
	{
		std::cout << " How much would you like to deposit? \n";
	} 
	else if(getRes1 == 2)
	{
		std::cout << " Which account would you like to withdraw from? \n Checking: Press 3 | Saving: Press 4 \n";
	}
	std::cin >> getRes2;
	if (getRes2 == 3) 
	{
		std::cout << " How much would you like to deposit into checking? \n";
	}
		
		return 0;
}


/*
int main() {
	 
	std::cout << "Please enter a floating point number \n";
	double n;
	std::cin >> n;
	std::cout << "n == " << n
		<< "\nn + 1 ==" << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\n n squared == " << n * n
		<< "\n squareroot of n == " << square_root(n)
		<< "\n";
	return 0;
}*/