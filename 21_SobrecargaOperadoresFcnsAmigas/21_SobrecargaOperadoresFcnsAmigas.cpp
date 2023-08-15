#include <iostream>

class Euros
{
private:
	int m_euros{};

public:
	Euros(int euros) : m_euros{ euros } {}

	friend Euros operator+(const Euros& e1, const Euros& e2);
	int getEuros() const { return m_euros; }
};

Euros operator+(const Euros& e1, const Euros& e2)
{
	return Euros{ e1.m_euros + e2.m_euros };
}

int main()
{
	Euros cuenta1{ 2 };
	Euros cuenta2{ 2 };
	Euros sumaEuros{ cuenta1 + cuenta2 };
	std::cout << sumaEuros.getEuros() << std::endl;
	return 0;
}