#pragma once
#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

extern int n, m;//������ �����
extern string dir;//RIGHT LEFT UP DOWN
extern double speed;//�������� ����
extern vector<pair<int, int>> snake;//������ ��� ������� �������� ���������� ������ ����� ������
extern int applex, appley;//��������� ���������� ������

void newapple();