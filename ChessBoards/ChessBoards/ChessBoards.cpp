/*
Name: Jared Summers
Program: Chess Board
Desc: Prints out a chess board
*/


#include "stdafx.h"
#include <iostream>
using namespace std;

const int INT_ROWS = 8;
const int INT_COLUMNS = 8;

void printBoard(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << " ";
			cout << arySeats[intRow][intColumn];
		}
		cout << endl;
	}
}

int clearBoard(char aryBoard[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {

			aryBoard[intRow][intColumn] = '*';
		}
	}
	return 0;
}

void fillBoardp(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'p';
}

void fillBoardP(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'P';
}

void fillBoardK(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'K';
}

void fillBoardk(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'k';
}

void fillBoardQ(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'Q';
}

void fillBoardq(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'q';
}

void fillBoardR(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'R';
}

void fillBoardr(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'r';
}

void fillBoardB(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'B';
}

void fillBoardb(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'b';
}

void fillBoardN(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'N';
}

void fillBoardn(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'n';
}

int main()
{
	char aryBoard[INT_ROWS][INT_COLUMNS];
	
	clearBoard(aryBoard, INT_ROWS);
	fillBoardp(aryBoard, INT_ROWS, 1, 0);
	fillBoardp(aryBoard, INT_ROWS, 1, 1);
	fillBoardp(aryBoard, INT_ROWS, 1, 2);
	fillBoardp(aryBoard, INT_ROWS, 1, 3);
	fillBoardp(aryBoard, INT_ROWS, 1, 4);
	fillBoardp(aryBoard, INT_ROWS, 1, 5);
	fillBoardp(aryBoard, INT_ROWS, 1, 6);
	fillBoardp(aryBoard, INT_ROWS, 1, 7);

	fillBoardP(aryBoard, INT_ROWS, 6, 7);
	fillBoardP(aryBoard, INT_ROWS, 6, 6);
	fillBoardP(aryBoard, INT_ROWS, 6, 5);
	fillBoardP(aryBoard, INT_ROWS, 6, 4);
	fillBoardP(aryBoard, INT_ROWS, 6, 3);
	fillBoardP(aryBoard, INT_ROWS, 6, 2);
	fillBoardP(aryBoard, INT_ROWS, 6, 1);
	fillBoardP(aryBoard, INT_ROWS, 6, 0);

	fillBoardk(aryBoard, INT_ROWS, 0, 4);
	fillBoardK(aryBoard, INT_ROWS, 7, 4);

	fillBoardq(aryBoard, INT_ROWS, 0, 3);
	fillBoardQ(aryBoard, INT_ROWS, 7, 3);

	fillBoardr(aryBoard, INT_ROWS, 0, 0);
	fillBoardr(aryBoard, INT_ROWS, 0, 7);
	fillBoardR(aryBoard, INT_ROWS, 7, 0);
	fillBoardR(aryBoard, INT_ROWS, 7, 7);

	fillBoardb(aryBoard, INT_ROWS, 0, 2);
	fillBoardb(aryBoard, INT_ROWS, 0, 5);
	fillBoardB(aryBoard, INT_ROWS, 7, 2);
	fillBoardB(aryBoard, INT_ROWS, 7, 5);

	fillBoardn(aryBoard, INT_ROWS, 0, 1);
	fillBoardn(aryBoard, INT_ROWS, 0, 6);
	fillBoardN(aryBoard, INT_ROWS, 7, 1);
	fillBoardN(aryBoard, INT_ROWS, 7, 6);

	printBoard(aryBoard, INT_ROWS);

	return 0;
}