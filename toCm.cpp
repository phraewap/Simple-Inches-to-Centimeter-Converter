/*
    Author: Phraewa Pookprajob
    Program Description: 
        A simple C++ program that takes 
        in measurements from a text file (.txt) and converts it into centimenters!
        Created because I did not want to put in single values at a time into an 
        online converter. 
    Program Content:
        Class (1x)
        While Loop (1x)
        Function (1x)
        iomanip
        fstream
*/
#include <iostream>
#include <fstream>
#include <iomanip>

// class for converting inches to cm
class conversion{
    public:
        double inchesTocm(double in){
            return in * 2.54;
        }
};

int main(){
    std::ifstream input("measurement.txt"); // takes in a text file

    // variables 
    double inches;
    conversion convert;
    int count = 1;

    // to take in multiple values from text file
    while(input >> inches){
        double cm = convert.inchesTocm(inches);  
        std::cout 
        << count << ". " << std::fixed << std::setprecision(2) << inches 
        << " inches (" << cm << " cm)" << std::endl;
        count++;
    }

    input.close();

    return 0;
}
