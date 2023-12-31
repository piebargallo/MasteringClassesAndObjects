module;

#include <cstddef>
import <stdexcept>;
import <utility>;
import <format>;

export module spreadsheet;

export import spreadsheet_cell;

export class Spreadsheet
{
public:
	Spreadsheet(size_t width = 100, size_t height = 100);
	Spreadsheet(const Spreadsheet& src);
	~Spreadsheet();

	Spreadsheet& operator=(const Spreadsheet& rhs);

	void setCellAt(size_t x, size_t y, const SpreadsheetCell& cell);
	SpreadsheetCell& getCellAt(size_t x, size_t y);

	void swap(Spreadsheet& other) noexcept;

private:
	void verifyCoordinate(size_t x, size_t y) const;

	size_t m_width{ 0 };
	size_t m_height{ 0 };
	SpreadsheetCell** m_cells{ nullptr };
};

export void swap(Spreadsheet& first, Spreadsheet& second) noexcept;
