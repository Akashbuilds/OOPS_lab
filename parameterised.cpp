#include <iostream>
#include <string>

class Flight {
private:
    int flightNumber;
    std::string destination;
    float distance;
    float fuel;

public:
    // Parameterized constructor
    Flight(int number, const std::string& dest, float dist) 
        : flightNumber(number), destination(dest), distance(dist), fuel(0) {
        // Automatically calculate fuel when constructing the object
        CALFUEL();
    }

    // Public member function to calculate fuel based on distance
    void CALFUEL() {
        if (distance <= 1000) {
            fuel = 500;
        } else if (distance > 1000 && distance <= 2000) {
            fuel = 1100;
        } else if (distance > 2000) {
            fuel = 2200;
        }
    }

    // Public member function to display flight details
    void SHOWINFO() {
        std::cout << "Flight Information:" << std::endl;
        std::cout << "Flight Number: " << flightNumber << std::endl;
        std::cout << "Destination: " << destination << std::endl;
        std::cout << "Distance: " << distance << " km" << std::endl;
        std::cout << "Fuel: " << fuel << " liters" << std::endl;
    }
};

int main() {
    // Example usage with a parameterized constructor
    Flight flight1(123, "New York", 1500);
    flight1.SHOWINFO();

    return 0;
}
