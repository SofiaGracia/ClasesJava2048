
#ifndef CONEXIÓN_H
#define CONEXIÓN_H

#include <string>
#include <vector>



/// 
/// class Conexión

class Conexión
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Conexión();

  /// 
  /// Empty Destructor
  virtual ~Conexión();



  /// 
  void Establecer_Conexión()
  {
  }


  /// 
  void Cerrar_Conexión()
  {
  }

private:
  // Private attributes  


  bool Estado_Conexión;
  int Identificador;

  // Public attribute accessor methods  



  /// 
  /// Set the value of Estado_Conexión
  /// @param value the new value of Estado_Conexión
  void setEstado_Conexión(bool value)
  {
    Estado_Conexión = value;
  }

  /// 
  /// Get the value of Estado_Conexión
  /// @return the value of Estado_Conexión
  bool getEstado_Conexión()
  {
    return Estado_Conexión;
  }

  /// 
  /// Set the value of Identificador
  /// @param value the new value of Identificador
  void setIdentificador(int value)
  {
    Identificador = value;
  }

  /// 
  /// Get the value of Identificador
  /// @return the value of Identificador
  int getIdentificador()
  {
    return Identificador;
  }

  void initAttributes();

};

#endif // CONEXIÓN_H
