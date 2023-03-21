#include <iostream>
#include<algorithm>
using namespace std;

//빈 그림판이 될 친구
string display[397][397];


void drawSquare(int len, int row, int col) // 사각형 하나 만드는 친구
{

	for (int i = 0; i < len; i++)
	{
		if (i == 0 || i == len - 1) //  i = 0 윗변,  i= len -1 아랫변
									// -------------------
		{
			for (int j = 0; j < len; j++)
			{
				display[row + i][col + j] = "*";
			}
		}
								    // -------------------
		else // 옆변
		{
			display[row+i][col] = "*"; // 왼쪽 변 
											//	|          | //
											//	|          | //
											//  |          | //
											//	|          | //
			display[row + i][col + len - 1] = "*"; // 오른쪽 변
 		}
	}
	
}

void RF(int n, int row, int col) // 사각형 몇 개 그릴지 계속 불러주는 친구
{
	drawSquare(1 + 4*(n - 1), row, col);
	if (n == 1)
	{
		return;
	}
	RF(n - 1, row + 2, col + 2);
}

int main() 
{
	int n;
	cin >> n;
	// 한변 max 길이 설정
	int len = 1 + 4 * (n - 1);
	// 빈 그림판 만들기
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			display[i][j] = " ";
		}
	}
	////////
	
	// 내용물(재귀 사각형들) 그리기
	RF(n, 0, 0);

	///그린 거 출력
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			cout << display[i][j];
		}
		cout << '\n';
	}

}