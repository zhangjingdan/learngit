#pragma once

#include"stdafx.h"

class ChessBoard
{
public:
	ChessBoard(void);
	~ChessBoard(void);
	void InitBoard(CRect rect,int b_Row,int b_Cols,CDC* PDC);
	void DrawBoard(CDC* pDc);
private:
	RECT b_rect;
	int b_Rows;
	int b_Cols;
	CDC* m_pDc;
};

