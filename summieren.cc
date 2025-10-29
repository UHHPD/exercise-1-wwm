#include<iostream>
#include<fstream>
int main() {
    std::ifstream fin("daten.txt");
    std::ofstream fout("datensumme.txt");
    for (int i=0; i<234; ++i){
        int a, b;
        fin >> a >> b;
        std::cout<< a + b <<std::endl;
        fout << a+b << std::endl;
    }
    fin.close();
    fout.close();
}



    