#include "Case.h"
class Grid
{
public:
	vector<Case> grid;
	int iGridSize;

	Grid();

	void Affichage();

	int Position(int x, int y);
};