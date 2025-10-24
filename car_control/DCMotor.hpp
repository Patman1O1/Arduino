#ifndef DC_MOTOR_HPP
#define DC_MOTOR_HPP

#include <cstddef>
#include <cstdint>

#include "AnalogPin.hpp"


namespace arduino {
	class DCMotor {
	private:
		AnalogPin analogPin;

	public:
		/* ----------------------------------------------Constructors----------------------------------------------- */
		DCMotor(void) noexcept;

		DCMotor(const AnalogPin& analogPin) noexcept;

		DCMotor(AnalogPin&& analogPin) noexcept;

		DCMotor(const DCMotor&) noexcept = default;

		DCMotor(DCMotor&&) noexcept = default;

		/* -----------------------------------------------Destructor------------------------------------------------ */
		~DCMotor() noexcept = default;

		/* ------------------------------------------Overloaded Operators------------------------------------------- */
		DCMotor& operator=(const DCMotor&) noexcept = default;

		DCMotor& operator=(DCMotor&&) noexcept = default;

		/* ------------------------------------------------Methods-------------------------------------------------- */
		[[nodiscard]] std::uint32_t getRPM(void) const noexcept;

	};

} // namespace arduino

#endif // DC_MOTOR_HPP

