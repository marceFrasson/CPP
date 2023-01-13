This text was written as part of a learning project to understand fixed-point numbers and provides an overview about the subject and its uses.

# Fixed-point numbers


Fixed-point numbers are a representation of a number composed of an integer portion that comes before the decimal point (radix point), and a fractional portion that comes after. Raw bits represent the integer portion of a fixed-point number, while fractional bits represent the fractional portion.

The representation of a regular integer number in fixed-point format considers its bit size, its fractional bits, and the number itself. For example, an 8-bit fixed-point number with 3 fractional bits. Taking the number 7, its fixed-point representation would be 56.0.

7 << 3 = 111 << 3 = 111000 = 56

This means the number is represented as 7.000, but the raw bits would be 56, not 7. All fixed-point numbers have a decimal point, so even in the case of an integer, there is the ".0" at the end of the number.

The equation to convert an integer to a fixed-point is as follows:

rawBits = intNumber << fractionalBits

And to convert a fixed-point to an integer:

intNumber = rawBits >> fractionalBits

When dealing with floating-points, the process is slightly different. When converting a float to a fixed-point, you are effectively moving the decimal point to a fixed location in the number. We multiply the float by (1 << fractionalBits), this value has a 1 in the bit position of the decimal point and 0 in all other bits. By doing so, the decimal point shifts to the right by the number of fractional bits.

For example, take the float number 0.5 with the same 3 fractional bits. Its fixed-point representation would be 4.0.

(1 << 3) = 2^3 = 1000 = 8 * 0.5 = 4

The equation to convert a floating-point to a fixed-point is as follows:

rawBits = (int) floatNumber * (1 << fractionalBits)

And to convert a fixed-point to a float:

floatNumber = (float) rawBits / (1 << fractionalBits)

Fixed-point numbers are widely used in many different applications where memory and processing are limited, such as graphics and video processing, control systems, digital signal processing, and audio processing.