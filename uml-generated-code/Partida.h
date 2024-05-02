
#ifndef PARTIDA_H
#define PARTIDA_H

#include <string>


/// 
/// class Partida

class Partida
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Partida();

  /// 
  /// Empty Destructor
  virtual ~Partida();



  /// 
  void Iniciar_Partida()
  {
  }


  /// 
  void Finalizar_Partida()
  {
  }


  /// 
  /// @param  Puntuación 
  void Actualizar_Puntuación(int Puntuación)
  {
  }


  /// 
  /// @param  Puntuación 
  void Actualizar_Mejor_Puntuación(int Puntuación)
  {
  }

private:
  // Private attributes  


  Jugador Jugador;
  int Identificador;
  Tablero Tablero;

  // Public attribute accessor methods  



  /// 
  /// Set the value of Jugador
  /// @param value the new value of Jugador
  void setJugador(Jugador value)
  {
    Jugador = value;
  }

  /// 
  /// Get the value of Jugador
  /// @return the value of Jugador
  Jugador getJugador()
  {
    return Jugador;
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

  /// 
  /// Set the value of Tablero
  /// @param value the new value of Tablero
  void setTablero(Tablero value)
  {
    Tablero = value;
  }

  /// 
  /// Get the value of Tablero
  /// @return the value of Tablero
  Tablero getTablero()
  {
    return Tablero;
  }

  void initAttributes();

};

#endif // PARTIDA_H
