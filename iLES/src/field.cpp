#include "field.h"
using namespace std;

// Default Constructor
field::field()
{
}

// Constructor
field::field(int nx,int ny)
{
  this->Nx = nx;
  this->Ny = ny;
  f = new double(Nx*Ny);
  for (int k = 0; k < Nx*Ny; k++)
  {
    f[k] = 0;
  }
}

// Destructor
field::~field()
{
}

double field::operator()(int i,int j)
{
  return f[i+Nx*j];
}

void field::print(std::string filename)
{
  ofstream file;
  file.open(filename);
  for (int i = 0; i < Nx; i++)
  {
    for (int j = 0; j < Ny; j++)
    {
      file << f[i+Nx*j] << " ";
    }
    file << endl;
  }
}