#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

// Create the classes here
#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

// Create the classes here

class Shape {
    string shapeType;

    public:

        Shape(string type) {
            this -> shapeType = type;
        }

        void printMyType() {
            cout << shapeType << "\n";
        }
};

class Square: public Shape {
    string shapeType;
    int length;


    public:

        Square(string type, int length): Shape(type) {
            this -> length = length;
        }

        void calculateArea() {
            int area = this -> length * this -> length;
            cout << area << "\n";
        }

        void printMyType() {
            Shape::printMyType();
        }
};


class Rectangle: public Shape {
    string shapeType;
    int length, breadth;


    public:

        Rectangle(string type, int length, int breadth): Shape(type) {
            this -> length = length;
            this -> breadth = breadth;
        }

        void calculateArea() {
            int area = this -> length * this -> breadth;
            cout << area << "\n";
        }

        void printMyType() {
            Shape::printMyType();
        }
};

void printType(Shape sh) {
    sh.printMyType();
};



int main() {

    //Write your code here
    Square sq = Square("square", 5);
    sq.printMyType();
    sq.calculateArea();

    Rectangle rect = Rectangle("rectangle", 5, 4);
    rect.printMyType();
    rect.calculateArea();

    printType(sq);

    return 0;
}