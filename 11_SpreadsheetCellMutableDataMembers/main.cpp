import spreadsheet_cell;
#include <iostream>

using namespace std;

int main()
{
	SpreadsheetCell myCell{ 5 };
	cout << myCell.getValue() << endl;
}