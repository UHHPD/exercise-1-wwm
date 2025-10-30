#include<iostream>
#include<fstream>
#include<cmath>
int main() {

//a
    std::ofstream fout1("mittelwert.txt");
    std::ofstream fout2("varianzen.txt");
    std::ifstream fin1("datensumme.txt");
    std::ifstream fin2("datensumme.txt");
    const int N=9;
    const int Gruppe=26;
    
    for (int g=0; g<Gruppe; ++g){
        double sum=0;
        for (int n=0; n<N; ++n){
            int a;
            fin1 >> a;
            sum+=a;
        }
        double mean=sum/N;
        fout1<< mean<< std::endl;
    }
    fin1.close();
    fout1.close();

    std::ifstream fin3("mittelwert.txt");
    for (int g=0; g<Gruppe; ++g){
        double v=0;
        double m;
        fin3>> m;
        for (int n=0; n<N; ++n){ 
            int a;
            fin2>>a;
            v+=pow((a-m),2);
        }
        double V=v/N;
        fout2<< V << std::endl;
    }
    fout2.close();
    fin2.close();
    fin3.close();

    //b
    std::ifstream fin4("mittelwert.txt");
    double sum2=0;
    for (int i; i<Gruppe; ++i){
        double m;
        fin4>>m;
        sum2 +=m;
    }    
    double mean_of_mean=sum2/Gruppe;
    std::cout<< mean_of_mean << std::endl;
    std::ifstream fin5("varianzen.txt");
    double sum3=0;
    for (int i; i<Gruppe; ++i){
        double v2;
        fin5>>v2;
        sum2 +=v2;
    }    
    float mean_of_varianzen =sum3/Gruppe;
    std::cout<< mean_of_varianzen << std::endl;

    fin4.close();
    fin5.close();
}
