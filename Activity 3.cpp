#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    void displayArea() {
        cout << "The area of the rectangle is: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;

    rect.setDimensions(7, 3.5);

    rect.displayArea();

    return 0;
}
