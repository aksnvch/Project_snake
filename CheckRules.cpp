#include "CheckRules.h";
bool snakeIsAlive()//�������� �� ��������� �� ������ ���� � ����
{
	for (int i = 0; i < snake.size(); i++)
	{
		if (i != 0)
			if (snake[i].first == snake[0].first && snake[i].second == snake[0].second)
				return false;
	}
	return true;
}