#include "DxLib.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    //�E�C���h�E���[�h�ɕύX
    ChangeWindowMode(TRUE);
    if (DxLib_Init() == -1)  // �c�w���C�u��������������
    {
        return -1;   // �G���[���N�����璼���ɏI��
    }

    
    DrawCircle(110, 205, 50, GetColor(0, 255, 0));
    DrawCircle(530, 175, 50, GetColor(0, 0, 255));
    DrawLine(50, 260, 590, 220, GetColor(255, 0, 0));
    DrawTriangle(320, 240, 270, 290, 370, 290, GetColor(255, 0, 255), TRUE);
    DrawBox(270, 290, 370, 350, GetColor(255, 255, 0), TRUE);

    //�A���`�G�C���A�X��
    //DrawCircleAA(110, 205, 50, 40, GetColor(0, 255, 0));
    //DrawCircleAA(530, 175, 50, 40, GetColor(0, 0, 255));
    //DrawLineAA(50, 260, 590, 220, GetColor(255, 0, 0));
    //DrawTriangleAA(320, 240, 270, 290, 370, 290, GetColor(255, 0, 255), TRUE);
    //DrawBoxAA(270, 290, 370, 350, GetColor(255, 255, 0), TRUE);

    WaitKey();    // �L�[���͑҂�

    DxLib_End();    // �c�w���C�u�����g�p�̏I������

    return 0;    // �\�t�g�̏I�� 
}