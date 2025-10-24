#ifndef DC_MOTOR_HPP
#define DC_MOTOR_HPP

#include <cstddef>

#include "AnalogPin.hpp"


namespace arduino {
	class DCMotor {
	private:
		AnalogPin analogPin;

	public:
		DCMotor(void) noexcept;

		DCMotor(const AnalogPin& analogPin) noexcept;

		DCMotor(AnalogPin&& analogPin) noexcept;

		DCMotor(const DCMotor&) noexcept = default;

		DCMotor(DCMotor&&) noexcept = default;

		~DCMotor() noexcept = default;

		DCMotor& operator=(const DCMotor&) noexcept = default;

		DCMotor& operator=(DCMotor&&) noexcept = default;

		[[nodiscard]] std::uint32_t getRPM(void) const noexcept;

	};

} // namespace arduino

#endif // DC_MOTOR_HPP

