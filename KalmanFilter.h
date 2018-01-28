//
// Created by Mats on 28-1-2018.
//

#ifndef KALMANFILTER_KALMAN_H
#define KALMANFILTER_KALMAN_H

class KalmanFilter {
private:
	double processNoise;
	double measurementNoise;
	double estimate;
	double estimationError;
	double kalmanGain;

public:
	KalmanFilter(double processNoise, double measurementNoise, double estimationError, double estimate);
	double filter(double measurement);
	double getProcessNoise();
	double getMeasurementNoise();
	double getEstimatedError();

};

#endif //KALMANFILTER_KALMAN_H
