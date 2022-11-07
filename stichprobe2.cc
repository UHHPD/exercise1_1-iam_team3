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
    
      while (!datensumme_1_in.eof()){        
        for (int i = 1 ; i < 10 ; i++ ){
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
          for (int j = 1 ; j < 10 ; j++ ){
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
  const int M = 26;
    
    while (!daten_3_out.eof()){
      daten_3_out >> nr_3;
      if (daten_3_out.eof()){
      break;
      }
    summ_3 = summ_3 + nr_3;
      }
    double mean_3 = double(summ_3) / M;
    cout << mean_3 << endl;
  daten_3_out.close();
    
  ifstream daten_4_out("varianzen.txt");
    
  double summ_4 = 0;
  double nr_4 = 0;
    while (!daten_4_out.eof()){
       daten_4_out >> nr_4;
      if (daten_4_out.eof()){
      break;
      }
    summ_4 = summ_4 + nr_4;
      }
    double mean_4 = double(summ_4) / M;
    cout << mean_4 << endl;
  daten_4_out.close();
    return 0;
}
