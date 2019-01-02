// Description: Pizza Order System


#include "stdafx.h" 
#include <iostream> 
using namespace std; 
const int nameArraySize = 20; 

struct Pizza 
{
	char name [nameArraySize]; 
	int diameter; 
	double weight; 
};

int main()
{
	
	Pizza *p_pizzas [2]; 
	p_pizzas[0] = new Pizza;  
	p_pizzas[1] = new Pizza;

	
	cout << "Please enter pizza name 1: ";
	cin.getline(p_pizzas[0]->name,nameArraySize); //-> operator used to point to pizza structure. 
	
	cout << "Please enter pizza diameter in inches: ";
	cin >> p_pizzas[0]->diameter;
	cin.get();
	
	cout << "Please enter pizza weight in ounces: ";
	cin >> p_pizzas[0]->weight;
	cin.get();
	cout << endl << endl;

	cout << "Please enter pizza name 2: ";
	cin.getline(p_pizzas[1]->name,nameArraySize); 
	
	cout << "Please enter pizza diameter in inches: ";
	cin >> p_pizzas[1]->diameter;
	cin.get();

	cout << "Please enter pizza weight in ounces : ";
	cin >> p_pizzas[1]->weight;
	cin.get();
	cout << endl << endl;

	
	cout << "Order 1: \n";
	cout << "Name: " << p_pizzas[0]->name << endl;
	cout << "Diameter: " << p_pizzas[0]->diameter << "\"" << endl; 
	cout << "Weight: " << p_pizzas[0]->weight << " oz." << endl << endl << endl;

	cout << "Order 2: \n";
	cout << "Name: " << p_pizzas[1]->name << endl;
	cout << "Diameter: " << p_pizzas[1]->diameter << "\"" << endl;
	cout << "Weight: " <<  p_pizzas[1]->weight << " oz." << endl;


	delete p_pizzas[0]; 
	delete p_pizzas[1]; 


	cout << "Please press enter to end the program: ";
	cin.get();

	return 0; 
}
