#ifndef EMPREGADO_H
#define EMPREGADO_H

#define JORNADA_DE_TRABALHO 8

#include <iostream>
#include <string>

class Empregado
{

public:
  std::string nome;
  double salarioHora;

  double pagamentoMes(double horasTrabalhadas)
  {
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > JORNADA_DE_TRABALHO)
    {
      return (horasTrabalhadas + (horasTrabalhadas - JORNADA_DE_TRABALHO)) * salarioHora;
    }
    return horasTrabalhadas;
  }
};

#endif