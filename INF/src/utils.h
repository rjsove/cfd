#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class user_input
{
public:
  user_input();
  double Re;
  double time_step;
  double stop_time;
  double print_interval;
  int grid_size;
};

void output_runtime(long runtime);

#endif