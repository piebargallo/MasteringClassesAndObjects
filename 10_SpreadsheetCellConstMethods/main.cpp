import spreadsheet_cell;
#include <iostream>

using namespace std;

int main()
{
	SpreadsheetCell myCell{ 5 };
	cout << myCell.getValue() << endl; // OK
	myCell.setString("6");             // OK

	const SpreadsheetCell& myCellConstRef{ myCell };
	cout << myCellConstRef.getValue() << endl; // OK
	return 0;
}