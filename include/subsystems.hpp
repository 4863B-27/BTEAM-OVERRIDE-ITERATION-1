#pragma once

#include "main.h"

//#include "EZ-TEMPLATE/api.hpp"
//#include "EZ-TEMPLATE/piston.hpp"
//#include "api.h"
//#include "pros/api.h"

extern Drive chassis;

//inline pros::Motor clawlift(14);
//inline pros::Motor clawturn(15);
inline pros::Motor clawturn(15, pros::v5::MotorGears::green);
inline pros::Motor clawlift(14, pros::v5::MotorGears::green);
inline ez::Piston matchload('C', false);
inline ez::Piston doi('A', false);
inline ez::Piston doinker('B', false);
inline pros::MotorGroup lift({-13, 17});



/*inline ez::Piston matchload('C');
inline ez::Piston doi('C');
inline ez::Piston doinker('C');*/
// Your motors, sensors, etc. should go here.  Below are examples
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');