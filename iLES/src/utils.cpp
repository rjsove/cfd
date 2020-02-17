#include "utils.h"

user_input::user_input()
{
  string temp;
  
  // Physical Parameters
  ifstream phy_file;
  phy_file.open("physical");
  while (!phy_file.eof())
  {
    phy_file >> temp;
    if (temp.compare("Re") == 0)
      phy_file >> Re;
  }
  phy_file.close();
  
  // Numerical Parameters
  ifstream num_file;
  num_file.open("numerical");
  while (!num_file.eof())
  {
    num_file >> temp;
    if (temp.compare("time_step") == 0)
      num_file >> time_step;
    if (temp.compare("stop_time") == 0)
      num_file >> stop_time;
    if (temp.compare("print_interval") == 0)
      num_file >> print_interval;
    if (temp.compare("grid_size") == 0)
      num_file >> grid_size;
  }
  num_file.close(); 
}

void output_runtime(long runtime)
{
  long remainder = runtime;
  
  // Calculate Milliseconds
  int ms = remainder%1000;
  remainder = remainder/1000;
  
  // Calculate Seconds
  int s = remainder%60;
  remainder = remainder/60;
  
  // Calculate Minutes
  int mins = remainder%60;
  remainder = remainder/60;
  
  // Calculate Hours and Days
  int hrs = remainder%24;
  int days = remainder/24;
  
  // Output Runtime
  cout << "runtime: ";  
  if (days != 0)
  {
    if (days == 1)
      cout << "1 day ";
    else
      cout << days << " days "; 
  }
  if (hrs != 0)
  {
    if (hrs == 1)
      cout << "1 hour ";
    else
      cout << hrs << " hours ";
  }
  if (mins != 0)
  {
    if (mins == 1)
      cout << "1 minute ";
    else
      cout << mins << " minutes ";
  }
  if (s != 0)
  {
    if (s == 1)
      cout << "1 second ";
    else
      cout << s << " seconds ";
  }
  if (days == 0 && hrs == 0 && mins == 0 && s == 0)
  {
    if (ms == 1)
      cout << "1 millisecond";
    else
      cout << ms << " milliseconds";
  }
}