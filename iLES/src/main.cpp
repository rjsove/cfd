#include <iostream>
#include <string>
#include <chrono>
#include <cmath>
using namespace std;

int main(int argc,char** argv)
{
  // Start Simulation Timer
  auto start = chrono::high_resolution_clock::now();
  
  // Get Project Directory
  string dir;    
  if (argc == 2)
    dir = string(argv[1]);
  else
    dir = "";
  
  // Read User Inputs
  // Geometry Parameters
  double H = 0.5;
  
  // Flow Parameters
  double Re = 1e6;
  
  // Simulation Parameters
  double stop_time = 1;
  double print_interval = 0.1;
  double dt = 0.1;
  int Nx = 50;
  int Ny = round(Nx*H);
  double dx = 1.0/Nx;
  double dy = H/Ny;
  
  // Display Runtime Info
  cout << "\n\nCFD -- Implicit Large Eddy Simulation\n\n";

  // Initialize Variables
  cout << "Maximum Courant Number: " << dt/dx << endl;
  cout << "Kolmogorov Scale: " << pow(Re,-3.0/4) << endl << endl;
  cout << "Initailizing CFD grid with dx = " << dx << " and dy = " << dy << endl;
  
  // Time Stepping
  double t = 0; 
  int print_count = 0;
  cout << "Starting time loop (dt = " << dt << ")" << endl;
  cout << "Total simulation time: " << stop_time << endl << endl;
  for (int n = 0; t < stop_time; n++) 
  {
    // Calculate Time
    t = n*dt;
    cout << " t = " << t << "\r" << flush;
    
    // Output Solution
    if (t == 0 || t/print_count >= print_interval)
    {
      // output solution
      cout << "writing solution at t = " << t << endl;
      print_count++;  
    }
    
    // Velocity Prediction
    
    // Pressure Correction
    
    // Velocity Correction
  }
  
  // Stop Simulation Timer
  auto stop = chrono::high_resolution_clock::now(); 
  auto runtime = chrono::duration_cast<chrono::seconds>(stop-start);
  
  // Display Simulation Results
  cout << "\nSimulation complete\n\nruntime: " << runtime.count() << " seconds";
  cout << endl << endl; 
  
  return 0;
}