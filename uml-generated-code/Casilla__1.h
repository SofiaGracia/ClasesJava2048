
#ifndef CASILLA_H
#define CASILLA_H

#include <string>


/// 
/// class Casilla

class Casilla
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Casilla();

  /// 
  /// Empty Destructor
  virtual ~Casilla();



  /// 
  /// @param  Valor 
  void Aumentar_Valor(int Valor)
  {
  }


  /// 
  /// @param  Mismapuntuación 
  void Desaparecer(bool Mismapuntuación)
  {
  }

private:
  // Private attributes  


  int Valor;
  bool Color;

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
  void setColor(bool value)
  {
    Color = value;
  }

  /// 
  /// Get the value of Color
  /// @return the value of Color
  bool getColor()
  {
    return Color;
  }

  void initAttributes();

};

#endif // CASILLA_H
