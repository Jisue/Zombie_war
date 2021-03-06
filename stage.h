#pragma once
#define GBOARD_WIDTH 35
#define GBOARD_HEIGHT 22

// 1 : ��
// 2 : ��ȭ�Ǳ� �� ��
// 3 : ���̷���
// 4 : ��ȭ�� ��

// 7 : ������
// 8 : ��Ż
// 9 : �������� �����

int stagemap[6][GBOARD_HEIGHT][GBOARD_WIDTH] =
{
	
	
	// STAGE 1
	{
		{ 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,3,2,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,2,3,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,3,2,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,2,3,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,3,3,3,3,3,3,0,0,0,3,3,3,0,0,0,3,3,3,3,3,3,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,0,0,0,3,2,3,3,3,3,3,2,3,3,3,3,3,2,3,0,0,0,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,0,0,0,3,3,3,3,2,3,3,3,3,3,2,3,3,3,3,0,0,0,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,0,0,0,0,0,0,3,3,6,2,2,2,3,3,3,0,0,0,0,0,0,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,0,0,0,0,0,0,3,2,3,2,2,2,3,2,3,0,0,0,0,0,0,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,0,0,0,3,3,3,3,3,3,2,2,2,3,3,3,3,3,3,0,0,0,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,0,0,0,3,2,3,3,2,6,3,3,3,3,2,3,3,2,3,0,0,0,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,3,3,3,3,3,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,3,2,2,3,0,0,0,0,0,3,3,3,0,0,0,0,0,3,2,2,3,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,3,2,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,2,3,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9 },
{ 9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9 },
	},


   {
	   { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,0,3,3,3,0,0,0,0,0,0,0,0,3,3,3,0,1,0,3,3,3,3,3,3,0,0,0,0,0,0,3,3,3,1 },
{ 1,3,3,2,3,0,0,0,0,0,0,0,0,3,2,3,3,1,0,3,2,2,2,2,3,0,3,3,3,3,0,3,2,3,1 },
{ 1,3,2,2,3,0,0,0,0,3,3,3,0,3,2,2,3,1,0,3,2,2,2,2,3,0,3,2,2,3,0,3,3,3,1 },
{ 1,3,3,3,3,3,0,0,3,3,2,3,3,3,3,3,3,1,0,3,3,3,3,3,3,0,3,2,2,3,0,0,0,0,1 },
{ 1,0,3,2,2,3,0,3,3,2,3,3,3,2,2,3,0,1,0,0,0,0,0,0,0,0,3,2,2,3,0,3,3,3,1 },
{ 1,0,3,2,2,3,3,3,2,3,3,0,3,2,2,3,0,1,0,0,3,3,3,3,3,0,3,2,2,3,0,3,2,3,1 },
{ 1,3,3,3,3,3,3,2,3,3,0,0,0,3,3,3,3,1,0,0,3,2,2,2,3,0,3,2,2,3,0,3,2,3,1 },
{ 1,3,2,2,3,0,3,3,3,0,0,0,0,3,2,2,3,1,3,3,3,2,3,3,3,0,3,2,2,3,0,3,3,3,1 },
{ 1,3,3,2,3,0,0,0,0,0,0,0,0,3,2,3,3,1,3,2,2,2,3,0,0,0,3,3,3,3,0,0,0,0,1 },
{ 1,0,3,3,3,0,0,0,0,0,0,0,0,3,3,3,0,1,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,0,3,3,3,3,3,0,0,0,0,0,0,3,3,3,0,1,0,0,0,0,3,3,3,0,0,3,3,3,0,0,0,0,1 },
{ 1,0,3,2,2,2,3,0,0,0,0,3,3,3,2,3,0,1,0,0,0,0,3,2,3,0,0,3,2,3,0,0,0,0,1 },
{ 1,0,3,6,3,2,3,0,0,0,0,3,2,3,2,3,0,1,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,1 },
{ 1,0,3,2,2,2,3,0,0,0,0,3,2,3,2,3,0,1,3,2,2,2,2,2,3,2,2,3,2,2,2,2,2,3,1 },
{ 1,0,3,3,3,3,3,3,3,3,3,3,2,3,3,3,0,1,3,3,3,3,3,3,3,2,2,3,3,3,3,3,3,3,1 },
{ 1,0,0,0,0,3,2,2,2,2,3,3,2,3,2,3,0,1,3,2,2,2,2,2,3,2,2,3,2,2,2,2,2,3,1 },
{ 1,0,0,0,3,3,3,3,3,3,3,3,2,3,2,3,0,1,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,3,1 },
{ 1,1,1,0,3,2,2,2,3,2,2,3,3,3,2,3,0,1,0,0,0,0,3,2,3,0,0,3,2,3,0,0,0,0,1 },
{ 1,0,1,0,3,3,3,3,3,3,3,3,0,3,3,3,0,1,0,0,0,0,3,3,3,0,0,3,3,3,0,0,0,0,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
   },

   
   // STAGE 3
   {
	   { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,0,1,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,1 },
{ 1,3,2,2,2,3,2,2,2,3,0,3,2,2,2,3,0,1,0,0,0,0,0,3,2,2,2,3,2,2,2,2,2,3,1 },
{ 1,3,3,3,2,3,2,8,2,3,0,3,3,3,2,3,0,1,0,0,0,0,0,3,2,2,2,3,2,8,3,3,2,3,1 },
{ 1,3,2,2,2,3,3,3,2,3,0,0,0,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,3,2,3,1 },
{ 1,3,3,3,3,3,3,3,3,3,3,0,0,3,3,3,2,2,2,3,3,2,2,2,3,0,3,3,3,3,3,3,3,3,1 },
{ 1,0,3,2,2,2,3,2,2,2,3,0,0,0,0,3,2,3,2,3,3,3,3,2,3,0,3,2,2,3,0,0,0,0,1 },
{ 1,0,3,2,3,2,3,2,3,3,3,0,0,3,3,3,3,3,3,3,3,3,3,3,3,0,3,2,2,3,0,0,0,0,1 },
{ 1,0,3,2,3,3,3,2,2,3,0,0,0,3,2,2,2,3,2,2,2,3,0,0,0,0,3,3,3,3,0,0,0,0,1 },
{ 1,0,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,3,2,2,2,3,3,3,3,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,3,2,2,3,0,0,0,3,2,2,3,2,2,2,3,2,2,2,3,2,2,3,0,0,0,0,0,0,0,0,0,1 },
{ 1,1,1,3,2,2,3,1,1,1,3,2,3,3,3,3,3,3,3,3,3,3,3,2,3,1,1,0,1,1,0,1,1,1,1 },
{ 1,0,0,3,2,2,3,0,0,0,3,2,2,3,2,2,2,3,2,2,2,3,2,2,3,0,0,0,3,3,3,3,0,0,1 },
{ 1,3,3,3,2,2,3,3,3,3,3,3,3,3,2,2,2,3,2,2,2,3,3,3,3,3,3,3,3,2,2,3,0,0,1 },
{ 1,3,2,3,2,2,3,3,2,2,2,3,0,3,2,2,2,3,2,2,2,3,0,0,3,2,2,3,3,2,2,3,0,0,1 },
{ 1,3,3,3,2,2,3,3,2,3,2,3,0,3,3,3,3,3,3,3,3,3,0,0,3,2,2,3,3,3,3,3,3,3,1 },
{ 1,3,3,3,3,3,3,3,2,3,3,3,0,0,0,3,2,8,2,3,0,0,0,0,3,3,3,3,0,0,0,3,2,3,1 },
{ 1,3,2,2,2,3,0,3,3,3,3,3,0,0,0,3,2,2,2,3,3,3,3,0,0,0,0,3,3,3,3,3,3,8,1 },
{ 1,3,8,3,2,3,3,3,2,3,2,3,0,0,0,3,3,3,3,3,2,2,3,0,0,0,0,3,2,2,3,1,1,1,1 },
{ 1,1,1,3,2,3,3,2,2,2,2,3,0,0,0,0,0,1,0,3,2,2,3,0,0,0,0,3,2,2,3,1,10,10,1 },
{ 1,0,1,3,3,3,3,3,3,3,3,3,0,0,0,0,0,1,0,3,3,3,3,0,0,0,0,3,3,3,3,1,10,8,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
   }
};

// {y1,y2,x1,x2}
int block[5][30][4] =
{
	

	// STAGE 1
	{
		{ 7,10,4,7 },
{ 7,10,14,17 },

{ 10,12,7,9 },
{ 10,12,12,14 },

{ 13,15,8,10 },
{ 13,15,10,12 },
{ 13,15,12,14 },

{ 16,18,7,9 },
{ 15,19,9,13 },
{ 16,18,13,15 },

{ 19,21,8,10 },
{ 19,21,10,12 },
{ 19,21 ,12,14 },

{ 22,24,7,9 },
{ 22,24,12,14 },

{ 24,27,4,7 },
{ 24,27,14,17 }
	},



	// STAGE 2
   {
	   { 1,4,1,4 },
{ 2,5,4,7 },
{ 1,4,7,10 },

{ 6,11,3,8 },

{ 13,16,1,4 },
{ 12,15,4,7 },
{ 13,16,7,10 },


//��Ż�̵�
{ 18,24,12,16 },
{ 18,24,16,20 },
{ 24,27,14,18 },
{ 27,33,12,16 },
{ 27,33,16,20 },

//�ι�°ĭ ��ȭ ��ǥ
{ 19,24,1,4 },
{ 18,24,6,10 },
{ 26,29,2,9 },
{ 31,33,1,3 },
{ 31,33,5,8 },

//3��°

{18,24,12,16},
{27,33,16,20},
{18,24,12,16},
{27,33,16,20},
{24,27,14,18},

//4��°ĭ

{2,6,12,16},
{5,10,16,18},
{4,8,18,20},
{8,11,18,20},
{11,13,13,19},
{13,15,12,16},
{13,15,16,20}



   },

   

   // STAGE 3
   {
	   { 1,5,1,5 },
{ 5,9,1,5 },
{ 2,6,5,9 },
{ 6,10,5,9 },
{ 3,6,9,16 },
{ 1,3,13,15 },
{ 1,5,16,20 },
{ 7,11,13,17 },
{ 6,11,17,20 },
{ 11,15,1,5 },
{ 10,13,9,13 },
{ 13,17,7,11 },
{ 13,17,11,15 },
{ 17,21,7,11 },
{ 17,21,11,15 },


{ 15,19,15,18 },
{ 15,19,4,7 },
{ 20,24,4,7 },
{ 21,24,9,13 },

{ 19,22,17,20 },
{ 23,27,1,4 },

{ 27,33,1,5 },
{ 26,29,5,8 },
{ 24,27,13,16 },
{ 27,30,17,20 },
{ 31,33,15,17 },
{ 28,31,12,15 }
   }
};