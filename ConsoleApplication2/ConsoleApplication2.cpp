#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void ex02() {

	bool hasPassedTest = true;

	srand(time(0));

	int x = rand();
	int y = rand();

	if (x >= y)
		cout << "x is greater than or equal to y";
	else
		cout << "x is less than y";

	cout << endl;

	int numberofShares;

	cout << "Input the number of shares ";
	cin >> numberofShares;
	cout << endl;

	if (numberofShares < 100)
		cout << "The number of shares is less than 100 ";
	else
		cout << "The number of shares is greater than or equal to 100 ";

	cout << endl;

	int boxwidth;
	int bookwidth;
	cout << "Enter the box width";
		cin >> boxwidth;
		cout << endl;
		cout << "Enter the book width";
		cin >> bookwidth;

		cout << endl;

		if (boxwidth % bookwidth == 0)
			cout << "Boxwidth is evenly divisible ";
		else
			cout << "Boxwidth is not evenly divisible";


		cout << endl;

		int shelflife;
		int temp;

		cout << "Enter the shelflife of the box of chocolate ";
			cin >> shelflife;
			cout << endl;
		
			cout << "Enter the outside temperature ";
				cin >> temp;

				if (temp > 90)
					shelflife = shelflife - 4;

}

void ex03() {
	int area;
	cout << "Enter the area of a square ";
	cin >> area;
	cout << endl;

	int diagonal = sqrt(2 * area);

	cout << "The length of the diagonal for the square is " << diagonal;
	cout << endl;


	char response;
	cout << "y or n ? ";
	cin >> response;
	cout << endl;

	if (response == 'y')
		cout << "yes";
	else if (response == 'n')
		cout << "no";

	cout << endl;

	char tab = '\t';

	string mailingAddress;

	cout << "Enter your mailing address ";
	cin >> mailingAddress;
	cout << endl;

	string empty = "";
}

void doubleinteger(int b) {

	int newint;

	newint = b * 2;

}

void ex04() {
	int number;

	do {
		cout << "Enter a number between 1 and 10 ";
			cin >> number;
			cout << endl;
	} while (number < 1 || number > 10);

	const int arraySize = 10;
	int cube[arraySize];

	for (int a = 0; a < number; a++)
	{
		cube[a] = pow(a + 1, 3);
	}

	int cubesum = 0;

	for (int a = 0; a < number; a++)
	{
		cubesum = cubesum + cube[a];
	}

	cout << "The sum of the cubes from 1 to " << number << " is " << cubesum;

	cout << endl;

	int count = 0;
	do
	{
		
		cout << "*";
		count++;
	} while (count < number);

	cout << endl;

	cout << "The even numbers from 0 to 40 are ";
	for (int i = 0; i < 41; i = i + 2)
	{
		cout << i << " ";
	}
	
	cout << endl;

	doubleinteger(number);




}

int add(int c, int d) 
{
	return c + d;
}

int addparameter(int& j) {

	j = j + 1;
	
	return j;
}

void OutputValues(int array[], int size)
{
	for (int a = 0; a < size; a++)
		cout << array[a] << " ";
}

void Valuechecker(int array[], int size) {
	int value;
	cout << "Enter a value ";
	cin >> value;

	bool doesContain = false;
	for (int a = 0; a < size; a++)
		if (value == array[a])
			doesContain = true;

	if (doesContain == true) {
		cout << "The array contains " << value;
		cout << endl;
	}
	else
		cout << "The array does not contain " << value;
	cout << endl;

}

void ex05() {

	const int arraySize = 5;
	int integers[arraySize];
	cout << "Enter 5 integers ";
	
	for (int i = 0; i < 5; i++)
		cin >> integers[i];

	cout << endl;

	int integersum = 0;
	for (int k = 0; k < 5; k++)
		integersum = integersum + integers[k];

	cout << "The sum of the integers is " << integersum;

	cout << endl;

	int integerproduct = 1;
	for (int b = 0; b < 5; b++)
		integerproduct = integerproduct * integers[b];

	cout << "The product of the integers is " << integerproduct;
	cout << endl;

	OutputValues(integers, arraySize);
	Valuechecker(integers, arraySize);
}


int main()
{
	ex02();
	ex03();
	
	srand(time(0));
	int random1 = rand();
	int random2 = rand();
	ex04();
	add(random1, random2);
	ex05();

	return 0;
}

