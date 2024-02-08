#include <iostream>
#include<string>

class Flight{
    private:
        int flightNumber;
        std::string destination;
        float distance;
        float fuel;
        


    public:
        Flight( int number,const std::string& dest , float dist): flightNumber(number),destination(dest),distance(dist),fuel(0){}
        
    //Member function tho calculate the fuel based on distance
    void CALFUEL(){
        if(distance<=1000){
            fuel=500;
        } else if(distance>1000 && distance<2000){
            fuel =1100;
            
        } else if(distance>2000){
            fuel = 2200;
        }
    }
    
    void displayDetails(){
        std::cout<<"The flight number is :"<< flightNumber << std::endl;
        std::cout<<"The destination is :"<< destination <<
        std::endl;
        std::cout<< "the distravelled is :"<< distance << "km" << std::endl;
        std::cout<<"the fuel is :"<< fuel << "litres" << std::endl;
    }
};

int main(){
    Flight flight1(747, "Kokata" , 1500 );
    flight1.CALFUEL();
    flight1.displayDetails();
    return 0;
}