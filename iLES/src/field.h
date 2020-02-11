#ifndef FIELD_H
#define FIELD_H

#include "string"
#include "fstream"

class field 
{
public:
  field();
  field(int Nx,int Ny);
  ~field();
  double operator()(int i,int j);
  void print(std::string filename);
private:
  int Nx,Ny;
  double* f;
};

#endif