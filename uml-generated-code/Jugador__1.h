
#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include <vector>



/// 
/// class Jugador

class Jugador
{
public:
  // Constructors/Destructors  



  /// 
  /// Empty Constructor
  Jugador();

  /// 
  /// Empty Destructor
  virtual ~Jugador();



  /// 
  /// @param  Casillas_vacias 
  void Mover_casilla(int Casillas_vacias)
  {
  }


  /// 
  /// @param  respuesta 
  /// @param  cantidad_movimientos_ant 
  void Recuperar_movimiento_anterior(bool respuesta, int cantidad_movimientos_ant)
  {
  }


  /// 
  /// @param  respuesta 
  void Reiniciar_partida(bool respuesta)
  {
  }


  /// 
  /// @param  casillas_vacias 
  void Finalizar_partida(int casillas_vacias)
  {
  }


  /// 
  void Valorar()
  {
  }


  /// 
  /// @param  Conexión 
  void Compartir(bool Conexión)
  {
  }

private:
  // Private attributes  


  std::string Nombre;
  int Puntuación;
  int Mejor_puntuación;
  int Can_movimientos_anteriores;

  // Public attribute accessor methods  



  /// 
  /// Set the value of Nombre
  /// @param value the new value of Nombre
  void setNombre(std::string value)
  {
    Nombre = value;
  }

  /// 
  /// Get the value of Nombre
  /// @return the value of Nombre
  std::string getNombre()
  {
    return Nombre;
  }

  /// 
  /// Set the value of Puntuación
  /// @param value the new value of Puntuación
  void setPuntuación(int value)
  {
    Puntuación = value;
  }

  /// 
  /// Get the value of Puntuación
  /// @return the value of Puntuación
  int getPuntuación()
  {
    return Puntuación;
  }

  /// 
  /// Set the value of Mejor_puntuación
  /// @param value the new value of Mejor_puntuación
  void setMejor_puntuación(int value)
  {
    Mejor_puntuación = value;
  }

  /// 
  /// Get the value of Mejor_puntuación
  /// @return the value of Mejor_puntuación
  int getMejor_puntuación()
  {
    return Mejor_puntuación;
  }

  /// 
  /// Set the value of Can_movimientos_anteriores
  /// @param value the new value of Can_movimientos_anteriores
  void setCan_movimientos_anteriores(int value)
  {
    Can_movimientos_anteriores = value;
  }

  /// 
  /// Get the value of Can_movimientos_anteriores
  /// @return the value of Can_movimientos_anteriores
  int getCan_movimientos_anteriores()
  {
    return Can_movimientos_anteriores;
  }

  void initAttributes();

};

#endif // JUGADOR_H
