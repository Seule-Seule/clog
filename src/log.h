
#ifndef _LOG_H_
#define _LOG_H_

/*
#define NO_LOG_LEVEL			0
#define DEBUG_LEVEL			1
#define INFO_LEVEL			2
#define WARNING_LEVEL		3
#define ERROR_LEVEL			4;
*/

/************************************************************************/
/*
const char *file���ļ�����
int line���ļ��к�
int level�����󼶱�
		0 -- û����־
		1 -- debug����
		2 -- info����
		3 -- warning����
		4 -- err����
int status��������
const char *fmt���ɱ����
*/
/************************************************************************/

/*ʵ��ʹ�õ�Level*/
extern int  LogLevel[5];
void LR_LOG(const char* _log_file_name, const char* file, int line, int level, int status, const char* fmt, ...);

#endif
