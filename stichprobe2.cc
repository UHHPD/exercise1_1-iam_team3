#include<iostream>
#include<fstream>
#include<iterator>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
  ifstream fin("datensumme.txt");
  ofstream fout("mittelwerte.txt");
  ofstream fout_1("varianzen.txt");

  double a1 = 0;
	double a2 = 0;
	double a3 = 0;
	double a4 = 0;
	double a5 = 0;
  double a6 = 0;
	double a7 = 0;  	
  double a8 = 0;
  double a9 = 0;
  double sum=0;
  int N=0;
  double V=0;
  double sigma=0;
	while (!fin.eof()) {
		fin >> a1;
    fin >> a2;
    fin >> a3;
    fin >> a4;
    fin >> a5;
    fin >> a6;
    fin >> a7;
    fin >> a8;
    fin >> a9;
		sum =a1+a2+a3+a4+a5+a6+a7+a8+a9;
		N=N+9;
    V += (sum - sum / 9) * (sum - sum / 9);
		sigma = sqrt(V);
		if (fin. eof()) {
			break;
     }
    cout << fixed << setprecision(2);
    cout<<"mean is"<<sum/9<<endl;
    cout <<"variance is "<< V / N << endl;
    fout<<sum/9<<endl;
    fout_1<<V/N<<endl;
    }
 
  
	ifstream fin_1("mittelwerte.txt"); 
  double a=0;
  double sum_1=0;
  while (!fin_1.eof()){
    fin_1>>a;
   
    sum_1+=a;
    N++;
   if (fin. eof()) {
			break;
     }

 cout<<a<<endl;
 cout<<"mean for mittel"<<sum_1/N<<endl;
  }
  fin.close();
  fout.close();
  fout_1.close();
	//system("pause");
	//return 0;
}



























