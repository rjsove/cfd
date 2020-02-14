#include "utils.h"

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