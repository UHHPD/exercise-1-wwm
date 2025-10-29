#include<iostream>
#include<fstream>
#include<cmath>
int main() {
    std::ifstream fin("datensumme.txt");
    float x=0;
    for (int i=0; i<234; ++i){
        int a;
        fin >> a;
        x +=a;   
    }
    float mean=x/234;

    std::ifstream fin2("datensumme.txt");
    float v=0;
    for (int i=0; i<234; ++i){
        int a;
        fin2 >> a;
        v += pow((a-mean),2);   
    }
    float V=v/234;
    float sigma = sqrt(V);
    std::cout<< "a)" << mean <<std::endl;
    std::cout<< "b)" << V <<std::endl;
    std::cout<< "c)" << sigma <<std::endl;
    fin.close();
}
