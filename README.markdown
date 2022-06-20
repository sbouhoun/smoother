Analog input smoothing library for Arduino
==========================================
Copyright 2022 Salah Bouhoun <salah.bouhoun@gmail.com> 
Provide a simple interface to smooth the analog input reading on Arduino

Installation
------------
Download the directory "smoother" and move it into the "libraries"
directory inside your sketchbook directory, then restart the Arduino
IDE. You will then see it listed under File->Examples->smoother.

Usage
-----
The library is instantiated as an object with a method provided compute and
get the average value for a series of measurement. Include it in your sketch 
and then create an object, specifying the number of reading used to calculate
the avearge. It is preferable to use a power of 2 to ease computing:

    #include <smooth.h>
    #define nbReadings
    smooth analogSmooth(nbReadings);
    
    average = analogSmooth.compute(analogRead(A0));

You can then call compute on that object within your program to get the avearge
each time. In this example we created an object called "analogSmooth", but it could have been
called whatever you like. Then we pass analog measurement to the smoother using compute to get the average.
