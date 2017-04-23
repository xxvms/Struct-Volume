// Struct-Volume.cpp : Defines the entry point for the console application.
//

#include <iostream>

struct Distance
{
	float feet;
	float inches;

};
struct Volume
{
	Distance width;
	Distance height;
	Distance depth;
};

float area(float, float, float, float, float, float);

int main()
{
	Volume v1;

	std::cout << "Please provide how deep is room" << std::endl;
	std::cout << "Feet: ";
	std::cin >> v1.depth.feet;
	std::cout << "Inches: ";
	std::cin >> v1.depth.inches;
	std::cout << std::endl;

	std::cout << "Please provide how wide is room" << std::endl;
	std::cout << "Feet: ";
	std::cin >> v1.width.feet;
	std::cout << "Inches: ";
	std::cin >> v1.width.inches;
	std::cout << std::endl;

	std::cout << "Please provide how high is room" << std::endl;
	std::cout << "Feet: ";
	std::cin >> v1.height.feet;
	std::cout << "Inches: ";
	std::cin >> v1.height.inches;
	std::cout << std::endl;

	float depth_Feet = v1.depth.feet;
	float depthInch = v1.depth.inches;
	
	float widthFeet = v1.width.feet;
	float widthInch = v1.width.inches;

	float heightFeet = v1.height.feet;
	float heightInches = v1.height.inches;

	float cubic = area(float depth_Feet, float depthInches, float widthFeet, float widthInches, float heightFeet, float heightInches);

	std::cout << "Qubic area of the room is: " << cubic << std::endl;

    return 0;
}
float area(float depthFeet_, float depthInches_, float widthFeet_, float widthInches_, float heightFeet_, float heightInches_)
{
	float cubicD = depthFeet_ + depthInches_ / 12;
	float cubicW = widthFeet_ + widthInches_ / 12;
	float cubicH = heightFeet_ + heightInches_ / 12;

	float cubic_ = cubicD * cubicW * cubicH;

	return cubic_;
}
