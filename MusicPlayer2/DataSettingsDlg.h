#pragma once
#include"Common.h"

// CDataSettingsDlg �Ի���

class CDataSettingsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDataSettingsDlg)

public:
	CDataSettingsDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDataSettingsDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DATA_SETTINGS_DIALOG };
#endif

private:
	size_t m_data_size;		//�����ļ��Ĵ�С

	void ShowDataSizeInfo();

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCleanDataFileButton();
};