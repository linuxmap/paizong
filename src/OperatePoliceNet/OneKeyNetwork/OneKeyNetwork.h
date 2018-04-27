#ifdef ONEKEYNETWORK_EXPORTS
#define ONEKEYNETWORK_API __declspec(dllexport)
#else
#define ONEKEYNETWORK_API __declspec(dllimport)
#endif

#ifndef __ONEKEY_NETWORK_H__
#define __ONEKEY_NETWORK_H__

#ifdef __cplusplus
extern "C"
{
#endif
	/********************************************************/
	//�ص�����ԭ��������
	//������bSuccess:�Ƿ�ִ�гɹ�
	//		strErrMsg:���ִ��ʧ�ܣ������ַ�����������ԭ��
	/********************************************************/
	typedef void ( *PCALLBACKFUNC)( BOOL bSuccess,LPCTSTR strErrMsg );

	/********************************************************/
	//ִ��һ������������
	//������bOnline:�Ƿ�����   TRUE������  FALSE������
	//		pFunction���ص���������������ɻص��������ء�
	//���أ�û�����壬���ú�ֱ�ӷ���0��
	/********************************************************/
	ONEKEYNETWORK_API int  fnOneKeyNetwork( BOOL bOnline,PCALLBACKFUNC pFunction = NULL );	
	
	/********************************************************/
	//�ص�����ԭ��������
	//������bConnect: ��Ӫ�����磨4G��3G���Ƿ������� TRUE���������� FALSE������Ͽ�
	/********************************************************/
	typedef void ( *PNETWORKCALLBACKFUNC)( BOOL bConnect );
	/********************************************************/
	//������Ӫ�����緢���仯����Ϣ�ص�
	//������pFunction: �ص�����
	/********************************************************/
	ONEKEYNETWORK_API int  fnSetNetworkStatusCallback( PNETWORKCALLBACKFUNC pFunction );

	//ִ��һ��VPN������
	//������bOnline:�Ƿ�����   TRUE������  FALSE������
	//		pFunction���ص���������������ɻص��������ء�
	//���أ�û�����壬���ú�ֱ�ӷ���0��
	/********************************************************/
	ONEKEYNETWORK_API int  fnOneKeyVpn( BOOL bOnline,PCALLBACKFUNC pFunction = NULL );	
	
	// ����Ƿ�������Ӫ������  
	ONEKEYNETWORK_API BOOL fnIsNetworkAlive( void );	
	
	// �Ƿ�����VPN���磬 Ŀǰ׼ȷ�ȵ�
	ONEKEYNETWORK_API BOOL fnIsVpnAlive( void );
	// ������VPN���ۺϣ� Ŀǰ׼ȷ�ȵ�
	ONEKEYNETWORK_API BOOL fnIsNetworkVpnAlive( void );

	// �Ƿ������Ѿ�����
	ONEKEYNETWORK_API BOOL fnIsOneKeyPswExist( void );
	// ɾ������
	ONEKEYNETWORK_API BOOL fnDeleteOneKeyPsw( void );
	// �Ƿ��Զ���������
	ONEKEYNETWORK_API BOOL	fnIsPswAutoInput( void );
	//�����Զ���������
	ONEKEYNETWORK_API BOOL  fnSetOneKeyAutoInput( BOOL bAutoInput );
	//��������
	ONEKEYNETWORK_API BOOL  fnSetOneKeyPsw( LPCTSTR strPsw );
	//ȡ����
	ONEKEYNETWORK_API LPCTSTR fnGetOneKeyPsw( void );


#ifdef __cplusplus
};
#endif

#endif