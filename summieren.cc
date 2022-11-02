<<<<<<< HEAD
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
     if(data_in.eof()){
     break;
     }
    cout << zahl_1+zahl_2 << endl;
    data_out << zahl_1+zahl_2 << endl;
   }
  data_in.close();
  data_out.close();
}
=======
#include<iostream>
#include<fstream>
using namespace std;

int main(){
   
  ifstream fin("daten.txt");
  ofstream fout("datensumme.txt");
  int a=0;
  int b=0;

   
  while(!fin.eof())
    { fin>>a;
      fin>>b;   
    
      if (fin.eof()) {
       break;
      }
      cout<<a+b<<endl;
      fout<<a+b<<endl;
      }
  
  fin.close();
  fout.close();
  
}




>>>>>>> origin/master
