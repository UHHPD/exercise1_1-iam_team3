#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int zahl_1=0;
  int zahl_2=0;
  ifstream data_in("daten.txt");
  ofstream data_out("datensumme.txt");
  
  while(!data_in.eof())
    {
    data_in >> zahl_1;
    data_in >> zahl_2;
    cout << zahl_1 << "+"<< zahl_2 << "="<< zahl_1+zahl_2 << endl;
    data_out << zahl_1+zahl_2 << endl;
    }
  data_in.close();
  data_out.close();
}