<<<<<<< HEAD
  #include <iostream>
  #include <fstream>
  #include <cmath>
  using namespace std;
  
  int main() {

    ifstream datensumme_1_in("datensumme.txt");
    ifstream datensumme_2_in("datensumme.txt");
    ofstream daten_1_out("mittelwerte.txt");
    ofstream daten_2_out("varianzen.txt");
    
    const int N = 9;
    int nr_1 = 0;
    int nr_2 = 0;
    double summ_1 = 0;
    double summ_2 = 0;
    int x = 9;
    
      while (!datensumme_1_in.eof()){        
        for (int i = 0 ; i < 9 ; i++ ){
        datensumme_1_in >> nr_1;
        summ_1 = summ_1 + nr_1;
        }
          if (datensumme_1_in.eof()){
          break;
          }
        double mean_1 = summ_1 / N;
        daten_1_out << mean_1 << endl;
        summ_1 = 0;
        
        while(!datensumme_2_in.eof()){
          for (int j = 0 ; j < x ; j++ ){
          datensumme_2_in >> nr_2;
          summ_2 += pow(( nr_2 - mean_1),2);
          }
            if (datensumme_2_in.eof()){
            break;
            }
          double V = (double(summ_2) / N);
          daten_2_out << V << endl;
          summ_2 = 0;
          } 
        }
    datensumme_1_in.close();
    datensumme_2_in.close();
    daten_1_out.close();
    daten_2_out.close();

  ifstream daten_3_out("mittelwerte.txt");
    
  double nr_3 = 0;
  double summ_3 = 0;
  int M = 0;
    
    while (!daten_3_out.eof()){
      if (daten_3_out.eof()){
      break;
      }
    daten_3_out >> nr_3;
    summ_3 = summ_3 + nr_3;
    M = M + 1;
      }
    double mean_3 = double(summ_3) / M;
    cout << mean_3 << endl;
  daten_3_out.close();
    
  ifstream daten_4_out("varianzen.txt");
    
  double summ_4 = 0;
  double nr_4 = 0;
    while (!daten_4_out.eof()){
      if (daten_4_out.eof()){
      break;
      }
    daten_4_out >> nr_4;
    summ_4 = summ_4 + nr_4;
      }
    double mean_4 = double(summ_4) / M;
    cout << mean_4 << endl;
  daten_4_out.close();
    return 0;
}


 
=======
#include<iostream>
#include<fstream>
#include<iterator>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
  ifstream fin("datensumme.txt");
  ifstream fin_1("mittelwerte.txt"); 
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
  int M=0;
  double V=0;
  double V_=0;
  double sigma=0;
  double a=0;
  double sum_1=0;
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
      
		if (fin.eof()) {
			break;
     }
    cout << fixed << setprecision(2);
    //cout<<"a9"<<a9<<endl;
    //cout <<"variance is "<< V / N << endl;
    fout<<sum/9<<endl;
    fout_1<<V/N<<endl;
    }
  fin.close();
  
  while (!fin_1.eof()) {
  fin_1>>a;
   sum_1+=a;
    M++;
    V_+=(a - sum_1 / M) * (a - sum_1 / M);
  if (fin_1.eof()){
    break;
  }
     

  cout<<"mean for mittel  "<<sum_1/26<<endl;
 
  cout<<"variance for varianzen   "<<V_/26<<endl;
  }
  fout.close();
  fout_1.close();
	//system("pause");
	//return 0;
}



























>>>>>>> origin/master
