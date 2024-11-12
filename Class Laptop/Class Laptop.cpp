#include <iostream>
using namespace std;
class CPU
{
	string model;
	double Gghz;
public:
	CPU() = default;
	CPU(const char* mod, double ghz)
	{
		model.append(mod);
		Gghz = ghz;
	}
	void Print()
	{
		cout << "Model CPU -> " << model << "\t " << Gghz << endl;
	}
};

class SSD
{
	string model;
	double val;
public:
	SSD() = default;
	SSD(const char* mod, double v)
	{
		model.append(mod);
		val = v;
	}
	void Print()
	{
		cout << "Model SSD -> " << model << "\t " << val << endl;
	}
};

class RAM
{
	string model;
	double ram;
public:
	RAM() = default;
	RAM(const char* mod, double r)
	{
		model.append(mod);
		ram = r;
	}
	void Print()
	{
		cout << "Model RAM -> " << model << "\t " << ram << endl;
	}
};

class GPU
{
	string model;
	double bam;
public:
	GPU() = default;
	GPU(const char* mod, double b)
	{
		model.append(mod);
		bam = b;
	}
	void Print()
	{
		cout << "Model GPU -> " << model << "\t " << bam << endl;
	}
};

class Mouse
{
	string model;
	double name;
public:
	Mouse() = default;
	Mouse(const char* mod, double m)
	{
		model.append(mod);
		name = m;
	}
	void Print()
	{
		cout << "Model Mouse -> " << model << "\t " << name << endl;
	}
};

class Laptop
{
	CPU spu;
	SSD ssd;
	RAM ram;
	GPU gpu;
};

int main()
{

}