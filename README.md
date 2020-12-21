# Modified - FlexyStepper - Arduino Library

This library is used to control one or more stepper motors.  The motors are accelerated and decelerated as they travel to their destination.  The library has been optimized for flexible control where speeds and positions can be changed while in-motion.
Modifiactions:
-  Initial Speed [the Motor Starts from a pre-Defined speed]
-  Final Speed [the Motor Ends at a Pre-Defined Speed]

Which Allowing you more Advanced Control in your Various Applications

### Tested on Arduino Uno/Mega/Due

## Documentation:
For documentation and a hookup guide, go to:

​    https://github.com/Stan-Reifel/FlexyStepper

# New Functions:
>  void setInitialSpeedInStepsPerSecond(float InitialSpeedInStepsPerSecond);
	void setFinalSpeedInStepsPerSecond(float FinalSpeedInStepsPerSecond);
	
>	void setInitialSpeedInRevolutionsPerSecond(float InitialSpeedInRevolutionsPerSecond);
	void setFinalSpeedInRevolutionsPerSecond(float FinalSpeedInRevolutionsPerSecond);

>	void setInitialSpeedInMillimetersPerSecond(float InitialSpeedInMillimetersPerSecond);
	void setFinalSpeedInMillimetersPerSecond(float FinalSpeedInMillimetersPerSecond);

## How to use:
Just Initialize your Initial and Final Speed Anytime

## License:
Copyright (c) 2018 S. Reifel & Co.   -   Licensed under the MIT license.
