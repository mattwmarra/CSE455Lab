#ifndef SWOLE_H_
#define	SWOLE_H_
#include "iostream"
##include "string"

using namespace std;

class Person{
public:
	Person(int name, int height, float weight); //Constructor function
	int getHeight(); // Get user height
	string getName(); // Get User Name
	double getWeight(); //Get user weight
	int getBMI(); //Get user BMI
	int adjustBMI(int height, float weight); // adjust user BMI, to be called every time the height or weight of a user changes
private:
	string name;
	int height;
	double weight;
	int BMI;
};

int main(int argc, char const *argv[])
{
	
	return 0;
}


#endif
