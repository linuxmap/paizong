
#ifndef _PLATE_OCR_H____
#define _PLATE_OCR_H____

#ifdef __cplusplus
extern "C"
{
#endif

	//************************************
	// Method:    HyInitPlateOCR
	// Returns:   int   ����0Ϊ��ʼ���ɹ�, ��0Ϊʧ��,ͨ��ԭ����ģ��license����
	// Qualifier: ��ʼ������ʶ��ģ��,������ֻ����ʹ��ǰ����һ��.
	// Parameter: void
	//************************************
	int					HyInitPlateOCR( void ); 
		//************************************
	// Method:    HyInitPlateOCROEM
	// Returns:   int   ����0Ϊ��ʼ���ɹ�, ��0Ϊʧ��, ��Ϊ���OEM��Ȩ����Ҫ����ָ������Ȩ���롣
	// Qualifier: ��ʼ������ʶ��ģ��,������ֻ����ʹ��ǰ����һ��.
	// Parameter: const char* szLicense  ��Ȩ����   64�ֽ�
	//************************************
	int					HyInitPlateOCROEM( const char* szLicense ); 
		//************************************
	// Method:    HyGetPlateOcrLicenseVersion
	// Returns:   �������Ȩ��Ϣ
	// Qualifier: ��ȡ�������Ȩ��Ϣ
	// Parameter: void
	//************************************
	const char*			HyGetPlateOcrLicenseVersion( void );
	//************************************
	// Method:    HyUninitPlateOCR
	// Returns:   int  ����0Ϊ�ɹ�.��0Ϊʧ��,
	// Qualifier: ж�س���ʶ��ģ��, ����ʹ�ó���ʶ��ʱ����.
	// Parameter: void
	//************************************
	int 				HyUninitPlateOCR( void );
	//************************************
	// Method:    HySetProvinceOrder
	// Returns:  int  ����0Ϊ�ɹ�,����-1Ϊʧ��.
	// Qualifier: ��������ʡ��(��Ҫ����ʡ��ʶ����ʱ)
	// Parameter: char * szProvince ʡ���ַ���,��: �����㾩�� ��������8��ʡ��,    
	//************************************
	int					HySetProvinceOrder( char* szProvince );
	//************************************
	// Method:    HyGetPlateNoStringFromBmp
	// Returns:   char*  ʶ��ʧ��,����NULL,�ɹ��򷵻س��ƺ��ַ���
	// Qualifier:  ��BMPͼ���������ʶ�����ִ�
	// Parameter: void * pImageBuf		ͼ���������׵�ַ
	// Parameter: int nBufSize			ͼ����������С
	//************************************
	char*				HyGetPlateNoStringFromBmp( void* pImageBuf,int nBufSize );		
	//************************************
	// Method:    HyGetPlateNoStringFromJpg
	// Returns:   char*  ʶ��ʧ��,����NULL,�ɹ��򷵻س��ƺ��ַ���
	// Qualifier: ��ͼ���ļ���ʶ�����ִ�
	// Parameter: char * szPathFileName		ͼƬ���ļ�·��(������JPG��BMPͼƬ)
	//************************************
	char*				HyGetPlateNoStringFromFile( char* szPathFileName );	

	//************************************
	// Method:    HyGetPlateColor
	// Returns:   PLATEOCRDLL_API char*   �ɹ������س�����ɫ�ַ���  ʧ�ܣ�NULL
	// Qualifier:    ��ȡ������ɫ
	// Parameter: void
	//************************************
	char*				HyGetPlateColor( void );
	//************************************
	// Method:    HySavePlateImageToFile
	// Returns:   PLATEOCRDLL_API int   �ɹ���0  ʧ�ܣ�-1
	// Qualifier:     ��ȡ���Ƶ�ͼƬ����ʶ��ͼƬ�н�ȡ�ĳ���ͼ��,�����JPG��ʽ
	// Parameter: char * szPathFileName    ͼƬ�ı���·��
	//************************************
	int					HySavePlateImageToFile( char* szPathFileName );
	//************************************
	// Method:    HyGetPlateImageMem
	// Returns:   PLATEOCRDLL_API int  �ɹ���0  ʧ�ܣ�-1
	// Qualifier:    ��ȡ����ͼƬBMP��ʽ���ݣ�����BITMAPFILEINFO�ļ�ͷ������ֱ��д��ͼƬ�ļ�����
				// �˺���ʹ��ʱ�����ȸ�pImage����NULL������pSize���ص�ֵ�����ڴ���ٴε��á�
	// Parameter: void * pImage      ��������� ��̬�ڴ��׵�ַ 
	// Parameter: int * pSize       ���봫��������  ��̬�ڴ��С������ָ��
	//************************************
	int					HyGetPlateImageMem( void* pImage,int* pSize );
#ifdef __cplusplus
};
#endif
#endif
