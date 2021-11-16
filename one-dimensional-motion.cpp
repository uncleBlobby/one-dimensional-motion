#include <iostream>

using namespace std;

int main()
{
    // Program introduction and explanation.
    cout << "Physics: 1-D Motion" << endl;
    cout << "*******************" << endl;
    cout << endl;
    cout << "Suppose a ball is released from the top of a building." << endl;
    cout << "This program will find the height of that building," << endl;
    cout << "using the time travel of the ball to the ground." << endl;
    cout << endl;

    // Prompt user for input and store in double variable.
    double time;
    cout << "Enter the ball travel time in seconds: ";
    cin >> time;

    // Compute height of building based on acceleration over time *(assuming the ball starts with velocity zero)*
    cout << "The height of the building is: " << (9.8 * time * time)/2 << " meters." << endl;
    cout << endl;

    // End program.
    return 0;
}