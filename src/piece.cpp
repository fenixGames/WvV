#include <time.h>
#include <vector>
#include <string>

#include <piece.hpp>
#include <graphics/sprite.hpp>

static std::vector<PieceTexture *> pieceTextures;

static std::vector<std::string> texturePaths = {
	"resources/black.png",
	"resources/blue.png",
	"resources/green.png",
	"resources/purple.png",
	"resources/red.png",
	"resources/yellow.png",
	"resources/selection.png"
};

static PieceType pieceTypes[] = {
		BLACK, BLUE, GREEN, PURPLE, RED, YELLOW, SELECTED
};

void
initPieceTextures(SDL_Renderer * renderer) {
	

	if (pieceTextures.size() != NUMBER_PIECE_TYPES)
		pieceTextures.resize(NUMBER_PIECE_TYPES);

	for (int type = 0; type < sizeof(pieceTypes) / sizeof(PieceType); type++) {
		pieceTextures[type] = new PieceTexture(
			pieceTypes[type],
			new Sprite(texturePaths[type], Color(0xFFFFFF), renderer)
		);
	}

	srand(time(NULL));
}

Piece::Piece(const PieceTexture& text) : Piece(text.type) {
}

Piece::Piece(PieceType type) : Piece(type, Point(0.0, 0.0), Size(0, 0)) {
}

Piece::Piece(PieceType type, const Point& position, const Size& size) :
	Node(position, size) {
	this->pieceTexture.type = type;
	
	for (int idx = 0; idx < pieceTextures.size(); idx++)
		if (pieceTextures[idx]->type == type)
			this->pieceTexture.graphic = pieceTextures[idx]->graphic;
}

PieceTexture::PieceTexture() : PieceTexture(NONE, NULL) {
}

PieceTexture::PieceTexture(PieceType type, Graphic * graphic) {
	this->type = type;
	this->graphic = graphic;
}

Piece *
getRandomPieceType() {
	int idx = rand() % NUMBER_PIECE_TYPES;

	return new Piece(pieceTypes[idx], Point(), PIECE_SIZE);
}