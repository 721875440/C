#include <windows.h>

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "advapi32.lib")



int main (){

	
	HANDLE hToken; 
	TOKEN_PRIVILEGES tkp; 

	// 获取此过程的令牌。 

	if (!OpenProcessToken(GetCurrentProcess(), 
		TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken)) 
		return( FALSE ); 

	//得到的LUID关闭特权。


	LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, 
		&tkp.Privileges[0].Luid); 

	tkp.PrivilegeCount = 1;  //设置的一个特权  
	tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED; 

	// 获取此过程的关机特权。

	AdjustTokenPrivileges(hToken, FALSE, &tkp, 0, 
		(PTOKEN_PRIVILEGES)NULL, 0); 

	if (GetLastError() != ERROR_SUCCESS) 
		return FALSE; 

	// Shut down the system and force all applications to close. 

/*	if (!ExitWindowsEx(EWX_SHUTDOWN | EWX_FORCE, 
		SHTDN_REASON_MAJOR_OPERATINGSYSTEM |
		SHTDN_REASON_MINOR_UPGRADE |
		SHTDN_REASON_FLAG_PLANNED)) 
		*/







	return 0;
}





