#pragma once
//--------------------------------
// �d���N���X�i���N���X�j
// �N���X��    Fairy
//------------------------------
class Fairy {
public:
	Fairy();
	/*���z�����遨���Ԑ��i�|�����t�B�Y���j*/
	virtual ~Fairy();
	virtual void intro();
};

//--------------------------
// ���̗d��(�h���N���X�j
//------------------------
class Light:public Fairy
{
public:
	Light();
	~Light();
	void intro();
};
//---------------------------
// �ł̗d��(�h���N���X�j
//-------------------------
class Darkness :public Fairy
{
public:
	Darkness();
	
	~Darkness();
	void intro();
	//------------------------------------------
};
//------------------------
// ���̗d��(�h���N���X�j
//-----------------------
class Fire :public Fairy
{
public:
	Fire();
	~Fire();
	void intro();
};
/*�؂̗d��*/
class Tree :public Fairy
{
public:
	Tree();
	~Tree();
	void intro();
};

