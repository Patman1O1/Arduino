#include "DCMotor.hpp"


namespace arduino {

  /* --------------------------------------------------Constructors----------------------------------------------- */
  DCMotor::DCMotor(void) noexcept {}

  DCMotor::DCMotor(const AnalogPin& analogPin) noexcept : analogPin(analogPin) {}

  DCMotor::DCMotor(AnalogPin&& analogPin) noexcept : analogPin(analogPin) {}

  /* ----------------------------------------------Overloaded Operators------------------------------------------- */
  
  /* ----------------------------------------------------Setters-------------------------------------------------- */
  void DCMotor::setAnalogPin(const AnalogPin& analogPin) noexcept {this->analogPin = analogPin; }

  void DCMotor::setAnalogPin(AnalogPin&& analogPin) noexcept { this->analogPin = analogPin; }

  /* ----------------------------------------------------Methods-------------------------------------------------- */
  

} // namespace arduino
