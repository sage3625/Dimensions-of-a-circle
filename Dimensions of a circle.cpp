// Dimensions of a circle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

// Constant for pi
const double PI = 3.1416;

/*
 Program Overview:
 This program takes input from the user in the form of coordinates of the center point (x1, y1)
 and a point on the circumference (x2, y2) of a circle. It then calculates the radius,
 circumference, and area of the circle based on the provided coordinates. The program uses
 functions to calculate the distance between two points, the radius of the circle, the
 circumference, and the area of the circle.
 */

/*
 Function to calculate the distance between two points on the Cartesian plane.
 Preconditions: Takes coordinates (x1, y1) and (x2, y2) as input.
 Postconditions: Returns the distance between the two points.
*/
double calcDistance(double x1, double y1, double x2, double y2);

/*
 Function to calculate the radius of a circle.
 Preconditions: Takes coordinates (x1, y1) for the center and (x2, y2) for a point on the circumference.
 Postconditions: Returns the radius of the circle.
 */
double calcRadius(double x1, double y1, double x2, double y2);

/*
 Function to calculate the circumference of a circle.
 Preconditions: Takes radius (r) of the circle as input.
 Postconditions: Returns the circumference of the circle.
 */
double calcCircumference(double r);

/*
 Function to calculate the area of a circle.
 Preconditions: Takes radius (r) of the circle as input.
 Postconditions: Returns the area of the circle.
*/
double calcArea(double r);

int main() {
    double x1, y1, x2, y2;

    cout << "Enter the coordinates of the center point (x1, y1):" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;

    cout << "Enter the coordinates of a point on the circumference (x2, y2):" << endl;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    double radius = calcRadius(x1, y1, x2, y2);
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    cout << "\nCircle Properties:" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}

// Function to calculate the distance between two points on the Cartesian plane.
double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the radius of a circle.
double calcRadius(double x1, double y1, double x2, double y2) {
    return calcDistance(x1, y1, x2, y2);
}

// Function to calculate the circumference of a circle.
double calcCircumference(double r) {
    return 2 * PI * r;
}

// Function to calculate the area of a circle.
double calcArea(double r) {
    return PI * pow(r, 2);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
