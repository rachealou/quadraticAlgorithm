// WELCOME TO MY QUADRATIC EQUATION SOLVER
// EXPERIMENT WITH HOW NUMBERS WORK IN C++

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    float a;
    float b;
    float c;

    cout << "Hello, welcome to the quadratic formula calculator!" << endl;
    
    cout << "Please enter your 'a' value" << endl;
    cin >> a;

    cout << "Please enter your 'b' value" << endl;
    cin >> b;

    cout << "Please enter your 'c' value" << endl;
    cin >> c;

    float discriminant = b * b - 4 * a * c;
    float root1;
    float root2;

    if (discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The first root is " << root1 << endl;
        cout << "The second root is " << root2 << endl;
    } else if (discriminant < 0){
        float real = -b / (2 * a);
        float imaginary = sqrt(-discriminant) / (2 * a);
        cout << "The two roots are complex numbers." << endl;
        cout << "Your first root is " << real << " + " << imaginary << endl;
        cout << "Your second root is " << real << " - " << imaginary << endl;
    } else if (discriminant == 0){
        root1 = -b / (2 * a);
        cout << "The two roots are the same." << endl;
        cout << "Root1 and root2 are " << root1 << endl;
    }
    return 0;
}
