#include <iostream>
#include <vector>
#include "./monomers.h"

int main()
{
  const uint32_t nMonomers(100000001);
  std::cout << "Starting a monomer simulation with " << nMonomers << " number of monomers." << std::endl; 
  std::vector<monomer> (nMonomers, monomer());
  
  
    return 0;
}
