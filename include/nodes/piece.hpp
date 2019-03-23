/**
 * Defines the pieces meant to be used on the board.
 */

#ifndef PIECE_HPP
#define PIECE_HPP

#include <FenixEngine/FenixEngine.h>

#define PIECE_SIZE	Size(100, 100)

typedef enum {
	BLACK,
	BLUE,
	GREEN,
	PURPLE,
	RED,
	YELLOW,
	SELECTED,
	NONE,
	NUMBER_PIECE_TYPES
} PieceType;

class PieceTexture {
public:
	PieceType type;
	Graphic * graphic;

	PieceTexture();
	PieceTexture(PieceType, Graphic *);
};

class Piece : public Node {
protected:
	PieceTexture pieceTexture;
public:
	Piece(const PieceTexture&);
	Piece(PieceType);
	Piece(PieceType, const Point&, const Size&);
};

void initPieceTextures(SDL_Renderer *);
Piece * getRandomPieceType();
#endif
