// This program calculates the number of balloons needed to lift an object
// Younus Ali (ali00380)
// Date: June 15, 2023
// Course: CSCI 1113 Sec 001
// Homework 1A

#include <iostream> // Preprocessor directive that includes input/output stream
#include <cmath> // Preprocessor directive that includes math library
using namespace std; // Using the standard namespace

int main() // Main function of the program that calculates the number of balloons needed to lift an object
{
    double radius; // Radius of one balloon
    double weight; // Weight of object being lifted
    const double helium_lift = 9.958736e-7; // Lift of helium in kg/cm^3

    cout << "Radius of one balloon (cm): " << endl; // Prompts user to enter radius of one balloon
    cin >> radius; // Stores radius of one balloon
    cout << "Weight of object being lifted (kg): " << endl; // Prompts user to enter weight of object being lifted
    cin >> weight; // Stores weight of object being lifted

    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3); // Calculates volume of one balloon

    int num_balloons = 1 + weight / (volume * helium_lift); // Calculates number of balloons needed to lift object

    double total_volume = num_balloons * volume; // Calculates total volume of balloons needed to lift object

    cout << "Volume for one balloon (cm^3): " << endl; // Outputs volume of one balloon
    cout << volume << endl; // Outputs volume of one balloon
    cout << "Number of balloons needed: " << endl; // Outputs number of balloons needed to lift object
    cout << num_balloons << endl; // Outputs number of balloons needed to lift object
    cout << "Total Volume (cm^3): " << endl; // Outputs total volume of balloons needed to lift object
    cout << total_volume << endl; // Outputs total volume of balloons needed to lift object

    return 0; // Returns 0 to end program
}