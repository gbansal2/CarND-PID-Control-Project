#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double iKp, double iKi, double iKd) {
    Kp = iKp;
    Kd = iKd;
    Ki = iKi;

    tot_error = 0.0;
}


void PID::UpdateError(double cte) {
}

void PID::TotalError(double cte) {
    tot_error += cte*cte;
}

void PID::posUpdate(double incr) {
    Kp += incr;
    Ki += incr;
    Kd += incr;
}

void PID::negUpdate(double incr) {
    Kp -= incr;
    Ki -= incr;
    Kd -= incr;
}
void PID::updateParams(double factor) {
    Kp *= factor;
    Ki *= factor;
    Kd *= factor;
}
