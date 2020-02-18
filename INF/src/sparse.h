#ndef SPARSE_H
#define SPARSE_H

#include <iostream>
using namespace std;

class pentadiagonal 
{
public:
  pentadiagonal();
  pentadiagonal(int n);
  ~pentadiagonal();
  void setP(int l);
  void setN(int l);
  void setE(int l);
  void setS(int l);
  void setW(int l);
private:
  int N;
  double* P,N,E,S,W;
};

#endif