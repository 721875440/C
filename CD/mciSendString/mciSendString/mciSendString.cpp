#include <windows.h>
#pragma comment(lib, "winmm.lib")//���ؿ�

int main(){

	mciSendString("set cdaudio door open",NULL,0,0);//��ͨ���õ�������

	mciSendStringW(L"set cdaudio door open",NULL,0,0);//���ַ����õ�������

	return 0;
}