#pragma once
#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

extern int n, m;//������ �����
extern char field[19][19];//������ �������� ��� ���������
extern string dir;//RIGHT LEFT UP DOWN
extern double speed;//�������� ����
extern vector<pair<int, int>> snake;//������ ��� ������� �������� ���������� ������ ����� ������
extern int applex, appley;//��������� ���������� �����

void cleanField();
void drawApple();
void drawSnake();
void drawBorder();
void drawField();