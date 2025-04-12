#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

// Volume calculation functions
double volumeCube(double side) {
    return pow(side, 3);
}

double volumeCuboid(double length, double width, double height) {
    return length * width * height;
}

double volumeSphere(double radius) {
    return (4.0/3.0) * PI * pow(radius, 3);
}

double volumeCylinder(double radius, double height) {
    return PI * pow(radius, 2) * height;
}

double volumeCone(double radius, double height) {
    return (1.0/3.0) * PI * pow(radius, 2) * height;
}

// Area calculation functions
double areaSquare(double side) {
    return pow(side, 2);
}

double areaRectangle(double length, double width) {
    return length * width;
}

double areaCircle(double radius) {
    return PI * pow(radius, 2);
}

double areaTriangle(double base, double height) {
    return 0.5 * base * height;
}

// Perimeter calculation functions
double perimeterSquare(double side) {
    return 4 * side;
}

double perimeterRectangle(double length, double width) {
    return 2 * (length + width);
}

double circumferenceCircle(double radius) {
    return 2 * PI * radius;
}

double perimeterTriangle(double a, double b, double c) {
    return a + b + c;
}

int main() {
    int mainChoice;
    do {
        cout << "\nMain Menu:\n";
        cout << "1. Calculate Volume\n";
        cout << "2. Calculate Area\n";
        cout << "3. Calculate Perimeter/Circumference\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        switch(mainChoice) {
            case 1: { // Volume
                int volumeChoice;
                cout << "\nVolume Calculator:\n";
                cout << "1. Cube\n2. Cuboid\n3. Sphere\n4. Cylinder\n5. Cone\n";
                cout << "Enter shape choice: ";
                cin >> volumeChoice;

                switch(volumeChoice) {
                    case 1: {
                        double side;
                        cout << "Enter cube side length: ";
                        cin >> side;
                        cout << "Volume: " << volumeCube(side) << endl;
                        break;
                    }
                    case 2: {
                        double l, w, h;
                        cout << "Enter cuboid length, width, height: ";
                        cin >> l >> w >> h;
                        cout << "Volume: " << volumeCuboid(l, w, h) << endl;
                        break;
                    }
                    case 3: {
                        double radius;
                        cout << "Enter sphere radius: ";
                        cin >> radius;
                        cout << "Volume: " << volumeSphere(radius) << endl;
                        break;
                    }
                    case 4: {
                        double r, h;
                        cout << "Enter cylinder radius and height: ";
                        cin >> r >> h;
                        cout << "Volume: " << volumeCylinder(r, h) << endl;
                        break;
                    }
                    case 5: {
                        double r, h;
                        cout << "Enter cone radius and height: ";
                        cin >> r >> h;
                        cout << "Volume: " << volumeCone(r, h) << endl;
                        break;
                    }
                    default:
                        cout << "Invalid choice!" << endl;
                }
                break;
            }

            case 2: { // Area
                int areaChoice;
                cout << "\nArea Calculator:\n";
                cout << "1. Square\n2. Rectangle\n3. Circle\n4. Triangle\n";
                cout << "Enter shape choice: ";
                cin >> areaChoice;

                switch(areaChoice) {
                    case 1: {
                        double side;
                        cout << "Enter square side length: ";
                        cin >> side;
                        cout << "Area: " << areaSquare(side) << endl;
                        break;
                    }
                    case 2: {
                        double l, w;
                        cout << "Enter rectangle length and width: ";
                        cin >> l >> w;
                        cout << "Area: " << areaRectangle(l, w) << endl;
                        break;
                    }
                    case 3: {
                        double radius;
                        cout << "Enter circle radius: ";
                        cin >> radius;
                        cout << "Area: " << areaCircle(radius) << endl;
                        break;
                    }
                    case 4: {
                        double base, height;
                        cout << "Enter triangle base and height: ";
                        cin >> base >> height;
                        cout << "Area: " << areaTriangle(base, height) << endl;
                        break;
                    }
                    default:
                        cout << "Invalid choice!" << endl;
                }
                break;
            }

            case 3: { // Perimeter
                int perimeterChoice;
                cout << "\nPerimeter Calculator:\n";
                cout << "1. Square\n2. Rectangle\n3. Circle\n4. Triangle\n";
                cout << "Enter shape choice: ";
                cin >> perimeterChoice;

                switch(perimeterChoice) {
                    case 1: {
                        double side;
                        cout << "Enter square side length: ";
                        cin >> side;
                        cout << "Perimeter: " << perimeterSquare(side) << endl;
                        break;
                    }
                    case 2: {
                        double l, w;
                        cout << "Enter rectangle length and width: ";
                        cin >> l >> w;
                        cout << "Perimeter: " << perimeterRectangle(l, w) << endl;
                        break;
                    }
                    case 3: {
                        double radius;
                        cout << "Enter circle radius: ";
                        cin >> radius;
                        cout << "Circumference: " << circumferenceCircle(radius) << endl;
                        break;
                    }
                    case 4: {
                        double a, b, c;
                        cout << "Enter triangle three sides: ";
                        cin >> a >> b >> c;
                        cout << "Perimeter: " << perimeterTriangle(a, b, c) << endl;
                        break;
                    }
                    default:
                        cout << "Invalid choice!" << endl;
                }
                break;
            }

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while(mainChoice != 4);

    return 0;
}
