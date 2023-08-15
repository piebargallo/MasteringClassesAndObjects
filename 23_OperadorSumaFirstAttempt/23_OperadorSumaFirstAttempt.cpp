#include <iostream>

class Euros
{
private:
	int m_euros{};

public:
	Euros(int euros) : m_euros{ euros } {}

	Euros add(const Euros& euros) const;
	int getEuros() const { return m_euros; }
};

Euros Euros::add(const Euros& euros) const
{
	return Euros{ getEuros() + euros.getEuros()};
}

int main()
{
	Euros euros1{ 2 }, euros2{ 2 };
	Euros sumaEuros{ euros1.add(euros2) };
	auto sum{ sumaEuros.add(euros2) };
	std::cout << sumaEuros.getEuros() << std::endl;
	return 0;
}