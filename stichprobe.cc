#include<iostream>
#include<fstream>
#include<iterator>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
  ifstream fin("datensumme.txt");   
  double a = 0;
	double sum = 0;
	double N = 0;
	double V = 0;
	double sigma = 0;
	while (!fin.eof()) {
		fin >> a;
		sum += a;
		N++;
		V += (a - sum / N) * (a - sum / N);
		sigma = sqrt(V);
		if (fin. eof()) {
			break;
		}
	}
	cout << fixed << setprecision(2);
	cout <<"Mean is " << sum / N << endl;// when put it in, it will add the number on the endline again....why?
	cout <<"variance is "<< V / N << endl;//How to open the file second time?
	cout << "standard deviation is "<<sigma << endl;
	fin.close();
	
}



























