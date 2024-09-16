// Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brandName;
    string model;
    string engine;
    int numberOfSeats;

public:
    Car(string brand, string modelName, string engineType, int seats) {
        brandName = brand;
        model = modelName;
        engine = engineType;
        numberOfSeats = seats;
    }

    void displayInfo() {
        cout << brandName << endl;
        cout << model << endl;
        cout  << engine << endl;
        cout << numberOfSeats << endl;
    }
};

int main() {
    Car car1("Mahindra", "Thar", "Diesel Engine", 5);
    Car car2("Hyundai", "i20","turbo",5);
    car1.displayInfo();
    car2.displayInfo();

    return 0;
}

// Ques 2: Write a program that defines a Rectangle class with a copy constructor

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
        cout << "Copy constructor called!" << endl;
    }

    int area() {
        return length * width;
    }
    void displayDimensions() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1;
    rect1.displayDimensions();
    cout << "Area: " << rect1.area() << endl;
    rect2.displayDimensions();
    cout << "Area: " << rect2.area() << endl;

    return 0;
}
