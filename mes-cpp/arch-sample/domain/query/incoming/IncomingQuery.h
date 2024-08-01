#pragma once

#ifndef _INCOMING_QUERY_
#define _INCOMING_QUERY_

#include "../../GlobalInclude.h"


#include OATPP_CODEGEN_BEGIN(DTO)

/**
* ���ϼ����ѯ��������
*/
class IncomingQuery : public oatpp::DTO
{
	DTO_INIT(IncomingQuery, DTO);
	// ���ϼ��鵥���
	API_DTO_FIELD_DEFAULT(String, incomingCode, ZH_WORDS_GETTER("incoming.fields.incode"));
	// ���ϼ��鵥����
	API_DTO_FIELD_DEFAULT(String, vendorCode, ZH_WORDS_GETTER("incoming.fields.vcode"));
	// ��Ӧ�̼��
	API_DTO_FIELD_DEFAULT(String, vendorName, ZH_WORDS_GETTER("incoming.fields.vname"));
	// ��Ӧ�����κ�
	API_DTO_FIELD_DEFAULT(String, vendorBatch, ZH_WORDS_GETTER("incoming.fields.vbatch"));
	// ��Ʒ���ϱ���
	API_DTO_FIELD_DEFAULT(String, itemCode, ZH_WORDS_GETTER("incoming.fields.itcode"));
	// ��Ʒ��������
	API_DTO_FIELD_DEFAULT(String, itemName, ZH_WORDS_GETTER("incoming.fields.itname"));
	// �����
	API_DTO_FIELD_DEFAULT(String, checkResult, ZH_WORDS_GETTER("incoming.fields.spresult"));
	// ��������
	API_DTO_FIELD_DEFAULT(String, reciveDate, ZH_WORDS_GETTER("incoming.fields.indate"));
	// �������
	API_DTO_FIELD_DEFAULT(String, inspectDate, ZH_WORDS_GETTER("incoming.fields.spdate"));
	// �����Ա
	API_DTO_FIELD_DEFAULT(String, inspector, ZH_WORDS_GETTER("incoming.fields.spector"));
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_INCOMING_QUERY_