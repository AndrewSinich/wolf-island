#pragma once
#include "Action.h"
#include <sstream>
#include <iostream>
using namespace std;

void run() {
	
	Action action;
	while (action.ending() != 1) {
		action.do_action();
		action.map.counting();
		char a[20][20]; // ������ �������
		for (int x = 0; x < 20; ++x)
			for (int y = 0; y < 20; ++y)
			{
				a[x][y] = '.';
				//���������� ��������� � ��������:
				if (action.bunny_here_2(x, y)) {
					a[x][y] = 'B';
					std::ostringstream count_buns;
					count_buns << action.map.return_count_bunnies(x, y);
				}
				if (action.wolf_here_2(x, y)) {
					a[x][y] = 'W';
				}
				if (action.wolfess_here_2(x, y)) {
					a[x][y] = 'V';
				}
			}
		for (int x = 0; x < 20; ++x)
		{
			for (int y = 0; y < 20; ++y)
			{
				cout << a[x][y] << ' '; // ����� 
			}
			cout << "\n"; 
		}
		cout << "\n";
		cout << "\n";

		//if (action.ending())
			//system("Pause");;
	}
};
