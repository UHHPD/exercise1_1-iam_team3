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




