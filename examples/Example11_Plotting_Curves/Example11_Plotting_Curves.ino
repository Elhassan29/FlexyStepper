
//      ******************************************************************
//      *                                                                *
//      *         An example for using the "CNC V3 Shield" board         *
//      *                                                                *
//      *            S. Reifel & Co.                6/24/2018            *
//      *                                                                *
//      ******************************************************************


// Available on Amazon at very low cost is a stepper driver board shield for 
// the Arduino Uno. It is called the "CNC V3 Shield".  It supports up to 
// 4 steppers.  This example shows how to use it.
//  
//
// Documentation at:
//         https://github.com/Stan-Reifel/FlexyStepper
//
//
// Note: FlexyStepper's companion library that supports faster step rates can 
// be found here:
//         https://github.com/Stan-Reifel/SpeedyStepper
//
//
// For all driver boards, it is VERY important that you set the motor 
// current before running the example.  This is typically done by adjusting
// a potentiometer on the board.  Read the driver board's documentation to 
// learn how.

// ***********************************************************************

#include <FlexyStepper.h>


//
// pin assignments
//
const int LED_PIN = 13;
const int MOTOR_STEP_PIN = 3;
const int MOTOR_DIRECTION_PIN = 4;
const int STOP_BUTTON_PIN = 9;


//
// create the stepper motor object
//
FlexyStepper stepper;



void setup() 
{
  //
  // setup the LED pin, stop button pin and enable print statements
  //
  pinMode(LED_PIN, OUTPUT);   
  pinMode(STOP_BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);


  //
  // connect and configure the stepper motor to its IO pins
  //
  stepper.connectToPins(MOTOR_STEP_PIN, MOTOR_DIRECTION_PIN);

  //
  // delay Before Start
  //
  delay(2000);
  Serial.print("FinalSpeed");
  Serial.print(" CurrentSpeed ");
  Serial.println("CurrentPosition");
}




void loop() 
{
  //
  // set the speed and acceleration rates for the stepper motor
  //
  stepper.setSpeedInStepsPerSecond(150);
  stepper.setAccelerationInStepsPerSecondPerSecond(50);


  //
  // set the motor's current positon to 0 and turn off the LED
  //
  stepper.setCurrentPositionInSteps(0);
  digitalWrite(LED_PIN, LOW);
  bool stopFlag = false;


  //
  // setup the motor so that it will rotate 2000 steps, Note: this 
  // command does not start moving yet
  //
  stepper.setTargetPositionInSteps(500);
  

  //
  // now execute the move, looping until the motor has finished
  //
  while(!stepper.motionComplete())
  {
    //
    // Note: The code added to this loop must execute VERY fast.  
    // Perhaps no longer than 0.05 milliseconds.
    //
    
    //
    // process motor steps
    //
    stepper.processMovement();

    //
    // Plotting Speed Curve
    //
    Serial.print(stepper.getFinalSpeedInSteps());
    Serial.print(" ");
    Serial.print(stepper.getCurrentSpeedInSteps());
    Serial.print(" ");
    Serial.println(stepper.getCurrentPositionInSteps());
    
  }

 delay(2000);

  stepper.setSpeedInStepsPerSecond(140);
  stepper.setAccelerationInStepsPerSecondPerSecond(75);
  stepper.setInitialSpeedInStepsPerSecond(100);
  stepper.setFinalSpeedInStepsPerSecond(60);
  stepper.setTargetPositionInSteps(0);
  while(!stepper.motionComplete())
  {
    //
    // Note: The code added to this loop must execute VERY fast.  
    // Perhaps no longer than 0.05 milliseconds.
    //
    
    //
    // process motor steps
    //
    stepper.processMovement();

    //
    // Plotting Speed Curve
    //
    Serial.print(stepper.getFinalSpeedInSteps());
    Serial.print(" ");
    Serial.print(stepper.getCurrentSpeedInSteps());
    Serial.print(" ");
    Serial.println(stepper.getCurrentPositionInSteps());
    
  }
  //
  // Reseting Initial and Final Speed
  // 
  stepper.setInitialSpeedInStepsPerSecond(0);
  stepper.setFinalSpeedInStepsPerSecond(0);
  
  //
  // delay before starting again
  //
  delay(4000);
}
