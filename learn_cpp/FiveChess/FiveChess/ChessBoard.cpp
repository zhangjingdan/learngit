#include "StdAfx.h"
#include "ChessBoard.h"


ChessBoard::ChessBoard(void)
{
}


ChessBoard::~ChessBoard(void)
{
}
void ChessBoard ::InitBoard(CRect rect,int Rows,int Cols,CDC* PDC)
{
	
	b_Rows = Rows;
	b_Cols = Cols;

	b_rect.bottom = rect.bottom;
	b_rect.left = rect.left;
	b_rect.right = rect.right;
	b_rect.top = rect.top;



	PDC->FillSolidRect(&b_rect,RGB(255,215,160));

}
void ChessBoard::DrawBoard(CDC* pDc)
{
	m_pDc = pDc;
	if(!m_pDc)
	{
		return;
	}

	int b_top = b_rect.top;
	int b_left = b_rect.left;
	int dis = (b_top - b_rect.left)/b_Rows ;
	
	for(int i =0; i <= b_Rows; i++)
	{
		m_pDc->MoveTo(b_rect.left,b_top);
		m_pDc->LineTo(b_rect.right-1,b_top);
		b_top -= dis;	
	}

	for(int i=0;i <= b_Cols;i++)
	{
		m_pDc->MoveTo(b_left,b_rect.bottom);
		m_pDc->LineTo(b_left-1,b_rect.top);
		b_left += dis;
	}
	
}
