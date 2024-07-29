#include <iostream>
#include "solar_direction.h"

int main(void){

  double zenith, azim;
  AndoLab::solar_direction(35.6895, 139.6917, 198, 3.0, &zenith, &azim);
                  
  std::cout << zenith << " , " << azim << std::endl;
}
