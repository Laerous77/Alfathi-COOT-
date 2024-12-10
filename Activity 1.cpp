#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand, model;
    int year;
    
    void displayInfo() {
      cout << "Car details: " << endl;
      cout << "Brand: " << brand << endl;
      cout << "Model: " << model << endl;
      cout << "Year: " << year << endl;
    }
};

int main() 
{
    Car car1;
    car1.brand = "Fiat";
    car1.model = "500X";
    car1.year = 2014;
    car1.displayInfo();
    return 0;
}