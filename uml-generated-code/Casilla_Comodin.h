
#ifndef CASILLA_COMODIN_H
#define CASILLA_COMODIN_H

#include "Casilla.h"

#include <string>


/// 
/// class Casilla_Comodin

class Casilla_Comodin : public Casilla
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Casilla_Comodin();

  /// 
  /// Empty Destructor
  virtual ~Casilla_Comodin();



  /// 
  /// @param  Valor 
  void Triplicar_Valor(int Valor)
  {
  }


  /// 
  void Desaparecer()
  {
  }

private:
  // Private attributes  


  int Valor;
  std::string Color;

  // Public attribute accessor methods  



  /// 
  /// Set the value of Valor
  /// @param value the new value of Valor
  void setValor(int value)
  {
    Valor = value;
  }

  /// 
  /// Get the value of Valor
  /// @return the value of Valor
  int getValor()
  {
    return Valor;
  }

  /// 
  /// Set the value of Color
  /// @param value the new value of Color
  void setColor(std::string value)
  {
    Color = value;
  }

  /// 
  /// Get the value of Color
  /// @return the value of Color
  std::string getColor()
  {
    return Color;
  }

  void initAttributes();

};

#endif // CASILLA_COMODIN_H
