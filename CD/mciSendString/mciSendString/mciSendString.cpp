#include <windows.h>
#pragma comment(lib, "winmm.lib")//加载库

int main(){

	mciSendString("set cdaudio door open",NULL,0,0);//普通调用弹出光驱

	mciSendStringW(L"set cdaudio door open",NULL,0,0);//宽字符调用弹出光驱

	return 0;
}