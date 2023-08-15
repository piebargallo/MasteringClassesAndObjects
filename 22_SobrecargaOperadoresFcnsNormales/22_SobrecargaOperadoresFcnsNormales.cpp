#include <iostream>

class Euros
{
private:
	int m_euros{};

public:
	Euros(int euros) : m_euros{ euros } {}

	int getEuros() const { return m_euros; }
};

Euros operator+ (const Euros& e1, const Euros& e2)
{
	return Euros{ e1.getEuros() + e2.getEuros() };
}

int main()
{
	Euros euros1{ 2 };
	Euros euros2{ 2 };
	Euros sumaEuros{ euros1 + euros2 };
	std::cout << sumaEuros.getEuros() << std::endl;
	return 0;
}