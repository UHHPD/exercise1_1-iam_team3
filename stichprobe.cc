#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
  ifstream datensumme_in("datensumme.txt");
  int nr = 0;
  int summ = 0;
  int N = 0;
    while (!datensumme_in.eof()){
      datensumme_in >> nr;
       if (datensumme_in.eof()){
        break;
      }
      summ = summ + nr;
      N = (N + 1);
      }
    double mean = double(summ) / N;
    cout << mean << endl;
  datensumme_in.close();
  
  ifstream datensumme_1_in("datensumme.txt");
  double summ_2 = 0;
  nr = 0;
    while (!datensumme_1_in.eof()){
       datensumme_1_in >> nr;
       if (datensumme_1_in.eof()){
        break;
      }
    summ_2 += pow((nr-mean),2);
  }    
  double V = (double(summ_2)/N);
  double sigma = sqrt(V);
  cout << V << endl;
  cout << sigma << endl;
  datensumme_1_in.close();
}
