//
// Created by Mats on 28-1-2018.
//

#include "KalmanFilter.h"

KalmanFilter::KalmanFilter(double processNoise, double measurementNoise, double estimationError, double estimate) {
	this->processNoise = processNoise;
	this->measurementNoise = measurementNoise;
	this->estimationError = estimationError;
	this->estimate = estimate;
}

double KalmanFilter::filter(double measurement) {
	this->estimationError = this->estimationError + this->processNoise;

	this->kalmanGain = this->estimationError / (this->estimationError + this->measurementNoise);
	this->estimate = this->estimate + this->kalmanGain * (measurement - this->estimate);
	this->estimationError = (1 - this->kalmanGain) * this->estimationError;

	return this->estimate;
}

double KalmanFilter::getProcessNoise() {
	return this->processNoise;
}

double KalmanFilter::getMeasurementNoise() {
	return this->measurementNoise;
}

double KalmanFilter::getEstimatedError() {
	return this->estimationError;
}