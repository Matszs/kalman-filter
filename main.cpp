#include <iostream>
#include <random>
#include "KalmanFilter.h"

#define MIN_RAND_MEASUREMENT 100
#define MAX_RAND_MEASUREMENT 300

int main() {

	KalmanFilter kalmanFilter(1, 1, 100, 1); // default values

	for(int i = 0; i < 100; i++) {
		double value = (MAX_RAND_MEASUREMENT - MIN_RAND_MEASUREMENT) * ( (double)rand() / (double)RAND_MAX ) + MAX_RAND_MEASUREMENT;
		double filtered = kalmanFilter.filter(value);

		std::cout << "value added: " << value << ", new value: " << filtered << std::endl;
	}

	std::cout << "Estimated error: " << kalmanFilter.getEstimatedError() << std::endl;

	return 0;
}