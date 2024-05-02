
#ifndef TABLERO_H
#define TABLERO_H

#include <string>


/// 
/// class Tablero

class Tablero
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Tablero();

  /// 
  /// Empty Destructor
  virtual ~Tablero();



  /// 
  /// @param  Filas 
  /// @param  Columnas 
  /// @param  Cantidad_casillas 
  void Crear_matriz(int Filas, int Columnas, int Cantidad_casillas)
  {
  }

private:
  // Private attributes  


  Casilla Casilla;

  // Public attribute accessor methods  



  /// 
  /// Set the value of Casilla
  /// @param value the new value of Casilla
  void setCasilla(Casilla value)
  {
    Casilla = value;
  }

  /// 
  /// Get the value of Casilla
  /// @return the value of Casilla
  Casilla getCasilla()
  {
    return Casilla;
  }

  void initAttributes();

};

#endif // TABLERO_H
