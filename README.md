#Web Accessibility of The Eyes

## Description

Ask a user for a color, then present five contrasting colors based on the input in order to be readable/discernible for those with color blindness-related issues.

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Julian Wise

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Program asks user for color value and file name in which input will be stored,
User enters color value and file name,
User-provided color value is saved to named file,
Program provides five color values contrasting from stored color value by comparing hexadecimal values and accepting only those that meet set parameters regarding accessibility standards for color blindness.

```

## C++ Guide

### Variables and Data Types

Interger variable starting with 0x that will store value of color user enters,
String variable to store inputed file destination name,
Array in which to store ranges regarding hexadecimal values within the color spectrum,
Array to store five output color values in order to write them to the file name provided by user,

### Console Input and Output

"Enter color value"
User enters color value
"Enter file name to save color value"
User enters file name
Console outputs five color values

### Decisions

Read in a hexadecimal value and convert it into RGB format. Use another calculation to convert RGB values to relative luminance. Use ((L1 + 0.05) / (L2 + 0.05)) to generate five additional color values that meet accessibility standards regarding contrast.

### Iteration

For five iterations of a loop, output color value in array

### File Input and Output

!!!Replace with a summary and examples of how input and/or output of files have been used effectively and appropriately!!!

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
