
#ifdef PCINFO_EXPORTS
#define PCINFO_API __declspec(dllexport)
#else
#define PCINFO_API __declspec(dllimport)
#endif

#ifndef __HYLINK_PCINFO_H__
#define __HYLINK_PCINFO_H__

#ifdef __cplusplus
extern "C"
{
#endif

	//************************************
	// Method:    IsHylinkProduct			�Ƿ����ں��ڿƲ�Ʒ
	// Returns:   int						����0: Ϊ���ڿ�X3ϵ��ƽ��; ����1:Ϊ���ڿ�����ϵ�в�Ʒ; ����-1:������˾��Ʒ
	// Parameter: void						�޲���
	//************************************
	PCINFO_API int IsHylinkProduct( void );

	//************************************
	// Method:    GetHylinkDeviceId
	// Returns:   PCINFO_API char*			ansi�ַ���,�ɹ������ַ���, ʧ�ܻ�Ǻ��ڿƲ�Ʒ���򷵻�ERROR�ַ���
	// Parameter: void
	//************************************
	PCINFO_API char* GetHylinkDeviceId( void );

#ifdef __cplusplus
}
#endif

#endif

