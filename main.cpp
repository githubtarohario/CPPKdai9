//******************************************************************************
//
//
//		CPPKad09C1�u�|�����[�t�B�Y���v
//		CPPKad09C2�u���z�f�X�g���N�^�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Fairy.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	//Light* pLight;
	//Darkness* pDarkness;
	//Fire* pFire;

	/*���Ԑ��i�|�����t�B�Y���j*/
	Fairy* p=nullptr;//���������Ă���
	cout << "�d�����������Ď��ȏЉ���܂��I" << endl;
	while (1) {
		cout << "�N���������܂����H�i0�F���̗d���A1�F�ł̗d���A2�F���̗d���A3:�؂̗d��-1�F��߂�j";
		int		fairy;
		cin >> fairy;
		if (fairy < 0) break;//-1�����͂ŏI��
		cout << endl;
		//switch (fairy) {
		//default:
		//case 0:		// ���̗d��
		//	pLight = new Light;
		//	pLight->intro();
		//	delete pLight;
		//	break;
		//case 1:		// �ł̗d��
		//	pDarkness = new Darkness;
		//	pDarkness->intro();
		//	delete pDarkness;
		//	break;
		//case 2:		// ���̗d��
		//	pFire = new Fire;
		//	pFire->intro();
		//	delete pFire;
		//	break;
		//}
		/*�ύX����*/
		switch (fairy) {
		case 0://��
			p = new Light;
			break;//��
		case 1:
			p = new Darkness;
			break;
		case 2://��
			p = new Fire;
			break;
		case 3://��
			p = new Tree;
		}
		p->intro();
		cout << endl;
	}
	//�I�u�W�F�N�g�폜
	delete p;//�f�X�g���N�^�[���Ă�

	return 0;
}

//******************************************************************************
