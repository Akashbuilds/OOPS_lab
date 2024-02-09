#include<iostream>
#include<string>

class Flight {
    private:
        int flightNumber;
        std::string destination;
        float distance;
        float fuel;
        
    public:
        Flight(): flightNumber(0),distance(0),fuel(0){}
        
        void FEEDINFO(){
        std::cout<<"Enter the flight number";
            std::cin>> flightNumber;
            
        std::cout<< "Enter the destination";
        std::cin.ignore();
        std::getline(std::cin, destination);
        
        std::cout<<"enter distance in km";
        std::cin>> distance;
        
        CALFUEL(&fuel);
        }
        
    void CALFUEL(float* fuelPtr){
        if(distance>1000){
            *fuelPtr = 500;
        } else if(distance>1000 && distance<2000){
            *fuelPtr = 1100;
        } else if(distance>2000){
            *fuelPtr = 2200;
        }
    }
    
    void SHOWINFO(){
        std::cout<< "FlightINformation"<< std::endl;
        std::cout<<"the flight number is : "<< flightNumber <<std::endl;
        std::cout<< "the distance travelled is " << distance << std::endl;
        std::cout<< "destination" << destination << std::endl;
        std::cout<< " fuel is :"<< fuel << std::endl;
        
        
        
    }
        
};

int main(){
    Flight flight1;
    flight1.FEEDINFO();
    flight1.SHOWINFO();
    
    return 0;
}