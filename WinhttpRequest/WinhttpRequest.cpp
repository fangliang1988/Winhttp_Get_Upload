// WinhttpRequest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "../src/HttpTransByGet.h"
#include "../src/HttpUploadFiles.h"

#define SERVERURL L"http://192.168.191.1:8000/upload/"

int _tmain(int argc, _TCHAR* argv[])
{
	{
		CHttpTransByGet get;
		VecStParam vecParam;
		StParam st;
		st.wstrKey = L"KeyGet";
		st.wstrValue = L"ValueGet";
		vecParam.push_back(st);
		get.TransDataToServer(SERVERURL, 0, vecParam);
	}
	
	{
		CHttpUploadFiles upload;
		VecStParam vecParam;
		StParam st;
		st.wstrKey = L"KeyUpload";
		st.wstrValue = L"ValueUpload";
		vecParam.push_back(st);
		upload.TransDataToServer(SERVERURL, vecParam, L"C:/out_ff1", L"FileName" );
	}
	
	return 0;
}

