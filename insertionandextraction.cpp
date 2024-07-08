#include <iostream>

// Function to calculate the new salary after increment
double calculateNewSalary(double salary, double increment = 10.0) {
    return salary + (salary * increment / 100);
}

int main() {
    // Salaries in 2009
    double ceoSalary2009 = 35000;
    double ioSalary2009 = 25000;
    double saSalary2009 = 24000;
    double programmerSalary2009 = 18000;

    // Increments for 2010
    double ceoIncrement = 9.0;
    double ioIncrement = 10.0;
    double saIncrement = 12.0;
    double programmerIncrement = 12.0;

    // Calculate new salaries for 2010
  

    // Display the new salaries
    std::cout << "Salaries in 2010 after increment:" << std::endl;
    std::cout << "Chief Executive Officer: Rs. " << calculateNewSalary(ceoSalary2009, ceoIncrement) << "/m" << std::endl;
    std::cout << "Information Officer: Rs. " << calculateNewSalary(ioSalary2009, ioIncrement) << "/m" << std::endl;
    std::cout << "System Analyst: Rs. " <<calculateNewSalary(saSalary2009, saIncrement) << "/m" << std::endl;
    std::cout << "Programmer: Rs. " << calculateNewSalary(programmerSalary2009, programmerIncrement) << "/m" << std::endl;

    return 0;
}
