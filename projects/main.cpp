#include <iostream>
#include <vector>

class monomer 
{
public:
  monomer():FreeR(0),N(1),P1(0),P2(0){};
private:
  uint8_t FreeR;
  uint8_t N;
  uint32_t P1;
  uint32_t P2;
};

int main()
{
  const uint32_t nMonomers(100000001);
  std::cout << "Starting a monomer simulation with " << nMonomers << " number of monomers." << std::endl; 
  std::vector<monomer> (nMonomers, monomer());
  
  
    return 0;
}
