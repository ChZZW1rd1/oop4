#pragma once

using namespace std;

static class DoubleValidator {
public:
	static bool IsValuePositive(double value) {
		if (value > 0) {
			return true;
		}
		return false;
	}
	static bool IsValueInRange(double value, double min, double max) {
		if (value > min && value < max) {
			return true;
		}
		return false;
	}
	static void AssertPositiveValue(double value) {
		if (!IsValuePositive(value)) {
			throw exception("Invalid value");
		}
	}
	static void AssertValueInRange(double value, double min, double max) {
		if (!IsValueInRange(value, min, max)) {
			throw exception("Value is not in range");
		}
	}

	static void CheckValues(double min, double max) {
		if (min > max) {
			throw exception("Minimal value is bigger then maximum");
		}
	}
};