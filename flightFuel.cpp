#include<iostream>
#include<string>

class Flight{
    private:
        int flightNumber;
        std::string destination;
        float distance;
        float fuel;
        
    public:
        Flight():flightNumber(0),distance(0),fuel(0){}
        //public member function to enter the flight information
        
    void FEEDINFO(){
        std::cout<< "Enter the flight number";
        std::cin>> flightNumber;
        
        std::cout<< "Enter Destination";
        std::cin.ignore();
        std::getline(std::cin, destination);
        
        std::cout<< "Enter the distance in km";
        std::cin>> distance;
        CALFUEL();
    }
    
    void SHOWINFO(){
        std::cout<< "Flight Information"<<std::endl;
        std::cout<< "Flight Number"<< flightNumber << std::endl;
        std::cout<< "destination"<< destination << std::endl;  std::cout<< "Distance"<< distance << std::endl;
        std::cout<< "fuel"<< fuel << std::endl;
        
        
        
    }
    private:
    void CALFUEL(){
        if(distance>1000){
            fuel=500;
        } else if (distance>1000 && distance<2000){
            fuel = 1100;
            
        } else if (distance>2000){
            fuel = 2200;
        }
    }
        
};

int main(){
    Flight flight1;
    flight1.FEEDINFO();
    flight1.SHOWINFO();
    return 0;
}