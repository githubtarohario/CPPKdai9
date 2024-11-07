#pragma once
//--------------------------------
// 妖精クラス（基底クラス）
// クラス名    Fairy
//------------------------------
class Fairy {
public:
	Fairy();
	/*仮想化する→多態性（ポリモフィズム）*/
	virtual ~Fairy();
	virtual void intro();
};

//--------------------------
// 光の妖精(派生クラス）
//------------------------
class Light:public Fairy
{
public:
	Light();
	~Light();
	void intro();
};
//---------------------------
// 闇の妖精(派生クラス）
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
// 炎の妖精(派生クラス）
//-----------------------
class Fire :public Fairy
{
public:
	Fire();
	~Fire();
	void intro();
};
/*木の妖精*/
class Tree :public Fairy
{
public:
	Tree();
	~Tree();
	void intro();
};

