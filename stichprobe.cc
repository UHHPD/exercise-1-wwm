#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    std::ifstream fin("datensumme.txt");
    float sum = 0.0;
    float N = 234.0;
    int zahl_a;
    while(fin >> zahl_a) {
        sum += zahl_a;
    } 
    fin.close();
    float mean = sum/N;
    std::cout << mean << std::endl;

    float variance_sum = 0.0;
    std::ifstream fin2("datensumme.txt");
    while(fin2 >> zahl_a) {
        variance_sum += pow((zahl_a - mean),2.0); 
    } 

    fin2.close();
    float variance = variance_sum / N;
    std::cout << variance << std::endl;

    float standard_deviation = sqrt(variance);
    std::cout << standard_deviation << std::endl;

}