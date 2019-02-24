#include "..\include\board.hpp"

std::list<Piece*> Board::create_row(int ncols)
{
	std::list<Piece*> row;

	for (int idx = 0; idx < ncols; idx++)
		row.push_back();
}

Board::Board(int ncols, int nrows, const Point &position, const Size &size) :
	Node(position, size){
	for (int idx = 0; idx < nrows; idx++)
		this->pieces.push_back(this->create_row(ncols));
}
