#include <iostream>

using namespace std;

int main ()
{
	int function, a, b, Result;
	cout << "What do you wanna do?" << endl << "1. Addition \n2. Subtraction \n3. Multiply \n4. Divide \n";
	cout << "Enter the corrosponding number (Example - for addition 1): ";
	
	cin >> function;
	
	cout << "Enter the first number: ";
	cin >> a;
	
	cout << "Enter the second number: ";
	cin >> b;
	
	if (function == 1){
		cout << a+b;
	}
	
	else if (function == 2){
		cout << a-b;
	}
	
	else if (function == 3){
		cout << a*b;
	}
	
	else if(function == 4){
		cout << a/b;
	}
	
return 0;	
}
