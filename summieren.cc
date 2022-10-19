int zahl
std::cin >> zahl;
std::cout << zahl <<std::endl;

#include <fstream>

std::ofstream fout("ausgabe.txt")
fout << zahl << std::endl;
fout.close()

#include <fstream>

std::ifstream fin("eingabe.txt")
int zahl
fin>> zahl;
fin.close();