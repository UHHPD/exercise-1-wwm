#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    std::ifstream fin("datensumme.txt");
    std::ifstream fin2("datensumme.txt");
    std::ofstream fout("mittelwerte.txt");
    std::ofstream fout2("varianzen.txt");
    float N = 9.0;
    int zahl_a;
    
    // calculate 26 means
    for (int j=0; j<26; ++j)
    {
        float sum = 0.0;
        for (int i=0; i<9; ++i) {
            fin >> zahl_a;
            sum+=zahl_a;
        }
        float mean = sum/N;
        fout << mean << std::endl;
    }
    fin.close();

    // calculate 26 variances (using the 26 means from above)
    std::ifstream fin3("mittelwerte.txt");
    float sum=0.0;
    for (int j=0; j<26; ++j)
    {
        float mean;
        fin3 >> mean;
        sum += mean;
        float variance_sum = 0.0;
        for (int i=0; i<9; ++i) {
            fin2 >> zahl_a;
            variance_sum+=pow((zahl_a-mean), 2.0);
        }
        float variance = variance_sum / N;
        fout2 << variance << std::endl;
    }
    float mean_of_means = sum/26;
    std::cout << mean_of_means << std::endl;
    fin.close();

    std::ifstream fin4("varianzen.txt");
    float sum2=0.0;
    for (int j=0; j<26; ++j)
    {
        float zahl;
        fin4 >> zahl;
        sum2 += zahl;
    }
    float mean_of_variances = sum2/26;
    std::cout << mean_of_variances << std::endl;

}