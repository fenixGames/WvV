/**
 * Creation of the board and checkers.
 */
#ifndef BOARD_HPP
#define BOARD_HPP
#include <list>

#include <FenixEngine/FenixEngine.h>
#include <nodes/piece.hpp>

class Board : public Node {
private:
	std::list<Piece *> create_row(int);
protected:
	std::list<std::list<Piece *> *> pieces;
public:
	Board(int, int, const Point&, const Size&);
};
#endif
