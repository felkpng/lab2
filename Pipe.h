#pragma once
#include <string>

class Pipe {
public:
	Pipe();
	Pipe(std::string name, float length, int diameter, bool repair);
	void show();
	void fill();

	std::string getName() const { return name; }
	float getLength() const { return length; }
	int getDiameter() const { return diameter; }
	bool isRepair() const { return repair; }

	void setName(std::string n) { name = n; }
	void setLength(float l) { length = l; }
	void setDiameter(int d) { diameter = d; }
	void setRepair(bool r) { repair = r; }
private:
	std::string name;
	float length;
	int diameter;
	bool repair;
};
