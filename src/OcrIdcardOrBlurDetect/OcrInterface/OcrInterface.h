
#ifdef OCRINTERFACE_EXPORTS
#define OCRINTERFACE_API __declspec(dllexport)
#else
#define OCRINTERFACE_API __declspec(dllimport)
#endif

#ifndef __OCR_INTERFACE_H__
#define __OCR_INTERFACE_H__

typedef enum _en_section
{
	SEC_NAME     = 0,/* ����*/
	SEC_SEX      = 1,/* �Ա�*/
	SEC_FOLK     = 2,/* ����*/
	SEC_BIRTHDAY = 3,/* ��������*/
	SEC_ADDRESS  = 4,/* ��ַ*/
	SEC_NUM      = 5,/* ����*/
	SEC_ISSUE    = 6,/* ǩ������*/
	SEC_PERIOD   = 7/* ��Ч����*/
}EnOcrSection;

#ifdef __cplusplus
extern "C"
{
#endif

	//************************************
	// Method:    HyInitOcr
	// Returns:   int   ����0Ϊ�ɹ�; ����-1:�������   ����-2: �����ʼ��ʧ��
	// Qualifier: OCRģ���ʼ��
	// Parameter: void
	//************************************
	OCRINTERFACE_API int			HyInitOcr( void );
	//************************************
	// Method:    HyInitOcrVolumeLicense
	// Returns:   int   ����0Ϊ�ɹ�; ����-1:�������   ����-2: �����ʼ��ʧ��
	// Qualifier: ���OEM��Ȩ�桡OCRģ���ʼ��
	// Parameter: const char* szLicense   //��Ȩ���롡����//64�ֽ�����
	//************************************
	OCRINTERFACE_API int			HyInitOcrOEM( const char* szLicense );
		//************************************
	// Method:    HyGetOcrLicenseVersion
	// Returns:   �������Ȩ��Ϣ
	// Qualifier: ��ȡ�������Ȩ��Ϣ
	// Parameter: void
	//************************************
	OCRINTERFACE_API const char*	HyGetOcrLicenseVersion( void );
	//************************************
	// Method:    HyUnInitOcr
	// Returns:   int ����0Ϊ�ɹ�; ���ط�0Ϊʧ��
	// Qualifier: OCRģ���ж�� �������ڴ�ռ� 
	// Parameter: void
	//************************************
	OCRINTERFACE_API int			HyUnInitOcr( void );	
	//************************************
	// Method:    HyOcr
	// Returns:   int   int ����0Ϊ�ɹ�; ���ط�0Ϊʧ��
	// Qualifier:  ���ڴ���bmpͼƬ���ݽ���ʶ��
	// Parameter: void * pImage   ͼƬ�����׵�ַ
	// Parameter: int nBufSize   ��������Ĵ�С
	//************************************
	OCRINTERFACE_API int			HyOcrImageMem( void* pImage,int nBufSize);
	//************************************
	// Method:    HyOcr
	// Returns:   int		����0Ϊ�ɹ�; ���ط�0Ϊʧ��
	// Qualifier:	��ͼƬ�ļ�����ʶ��
	// Parameter: char * szFilePathName   ͼƬ�ļ���·��
	//************************************
	OCRINTERFACE_API int			HyOcrImageFile( char* szFilePathName );
	//************************************
	// Method:    HyGetAllOcrStr
	// Returns:   char*  ��ͼƬʶ��õ����ַ���
	// Qualifier:  �����ͼƬʶ����������ַ���
	// Parameter: void
	//************************************
	OCRINTERFACE_API char*			HyGetAllOcrStr( void );
	//************************************
	// Method:    HyGetOcrSectionStr
	// Returns:   char*	   ��ͼƬʶ��õ��� ָ��������ַ���
	// Qualifier:	���ʶ��ͼƬ�� ָ��������ַ���
	// Parameter: EnOcrSection enSection   ���֤����ö�ٱ���
	//************************************
	OCRINTERFACE_API char*			HyGetOcrSectionStr( EnOcrSection enSection );
	//************************************
	// Method:    HyGetOcrHeadImage
	// Returns:   int   ����0Ϊ�ɹ�; ���ط�0Ϊʧ��
	// Qualifier: ��ȡʶ��ͼƬ�е���ͷ��,���浽�ļ���
	// Parameter: char * szSaveFileName    ����ı���·��
	//************************************
	OCRINTERFACE_API int			HyGetOcrHeadImage( char* szSaveFileName );

	
#ifdef __cplusplus
};
#endif

#endif