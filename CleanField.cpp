#include "DrawField.h";
void cleanField()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			field[i][j] = ' ';
}