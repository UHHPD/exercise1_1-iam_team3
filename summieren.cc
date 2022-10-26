#include<iostream>
#include<fstream>
using namespace std;

int main(){

  int num1=0;
  int num2=0;
  ifstream data_in("daten.txt");
  ofstream data_out("datensumme.txt");
  while(!data_in.eof())
    {
      data_in>>num1;
      data_in>>num2;
      cout<<num1+num2<<endl;
      data_out<<num1+num2<<endl;
        }
  data_in.close();
  data_out.close();
}



/*int main(){
  int num1 = 0;
  int num2 = 1;
  while(!data_in eof()){
    std::ifstream fin("daten.txt")
    fin>>num1;
    fin>>num2;
    fin.close();
    
     int sum = num1 +num2 ;
std::ofstream fout("summieren.txt");
    fout<<sum<<std::endl;
    fout.close();
    }
}*/

/*Input and output (terminal):
int zahl ;
std :: cin >> zahl ;
std :: cout << zahl << std :: endl ;
Output (file):
# include <fstream >
...
std :: ofstream fout (" ausgabe . txt ");
fout << zahl << std :: endl ;
fout . close ();
Input (file):
# include <fstream >
...
std :: ifstream fin (" eingabe . txt ");
int zahl
fin >> zahl ;
fin . close ();
 */
