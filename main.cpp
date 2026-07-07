#include <iostream>
#include <iomanip> 
using namespace std;

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    // name
    string name;
    // age
    int age = 0;
    // height
    double height = 0.0;
    // weight
    double weight = 0.0;
    // test score
    int testScore = 0;
    
    // grabs user input data
    cout << "Please enter your name: ";
	cin >> name;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your height in meters: ";
    cin >> height;
    cout << "Please enter your weight in kg: ";
    cin >> weight;
    cout << "Please enter your test score: ";
    cin >> testScore;

    // BMI calculation
    double bmi = weight / (height * height);

    // Determine BMI category
    string category;
    if (bmi < 18.5) category = "Underweight";
    else if (bmi = 18.5 - 24.9) category = "Normal weight";
    else if (bmi = 25 - 29.9) category = "Overweight";
    else if (bmi >= 30) category = "Obese";

	// Determine grade based on test score
	char grade;
    if (testScore >= 90) grade = 'A';
    else if (testScore >= 80) grade = 'B';
    else if (testScore>= 70) grade = 'C';
    else if (testScore >= 60) grade = 'D';
    else grade = 'F';

    // Final output
    cout << fixed << setprecision(2);
    cout << "Hey " << name << ", you're " << age
        << " years old with a BMI of " << bmi
        << " (" << category << ") and you got a grade "
        << grade << "!" << endl;

    return 0;
}