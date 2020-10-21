#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado
{

private:
  int projetos;

public:
  void setProjetos(int projetos)
  {
    this->projetos = projetos;
  }

  int getProjetos() const
  {
    return this->projetos;
  }
};
