#include <iostream>
#include <string>
#include <chrono>
#include <cmath>
#include "utils.h"
using namespace std;

int main()
{
  // Start Simulation Timer
  auto start = chrono::high_resolution_clock::now();
  
  // Read User Inputs
  user_input usr_in;
  
  // Geometry Parameters
  double H = 0.5;
  
  // Flow Parameters
  double Re = usr_in.Re;
  
  // Simulation Parameters
  double stop_time = usr_in.stop_time;
  double print_interval = usr_in.print_interval;
  double dt = usr_in.time_step;
  int N = usr_in.grid_size;
  
  // Calculate Grid Spacing
  int Nx = N;
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
  auto runtime = chrono::duration_cast<chrono::milliseconds>(stop-start);
  
  // Display Simulation Results
  cout << "\nSimulation complete\n\n";
  output_runtime(runtime.count());    
  cout << endl << endl; 
  
  return 0;
}