
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
>   void setInitialSpeedInStepsPerSecond(float InitialSpeedInStepsPerSecond);

to Set Desired Initial Speed in Steps/Seconds
>	void setFinalSpeedInStepsPerSecond(float FinalSpeedInStepsPerSecond);

to Set Desired Final Speed in Steps/Seconds
>	void setInitialSpeedInRevolutionsPerSecond(float InitialSpeedInRevolutionsPerSecond);

to Set Desired Initial Speed in Revolutions/Seconds
>	void setFinalSpeedInRevolutionsPerSecond(float FinalSpeedInRevolutionsPerSecond);

to Set Desired Final Speed in Revolutions/Seconds
>	void setInitialSpeedInMillimetersPerSecond(float InitialSpeedInMillimetersPerSecond);
>
to Set Desired Initial Speed in Millimeters/Seconds
>	void setFinalSpeedInMillimetersPerSecond(float FinalSpeedInMillimetersPerSecond);

to Set Desired Final Speed in Millimeters/Seconds
> getFinalSpeedInSteps();

Return (float) Final Speed in Steps/Second
## How to use:
Just Initialize your Initial and Final Speed Anytime

## License:
Copyright (c) 2018 S. Reifel & Co.   -   Licensed under the MIT license.
