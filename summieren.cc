#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin("daten.txt");
    std::ofstream fout("datensumme.txt");
    int zahl_a, zahl_b;
     while(fin >> zahl_a >> zahl_b) {//alles bis Dateiende
        int sum = zahl_a + zahl_b;
        std::cout << sum  << std::endl;
        fout << sum << std::endl;
    }
    fin.close();
    fout.close();


}