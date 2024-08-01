#pragma once

#ifndef _INCOMING_DTO_
#define _INCOMING_DTO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ���ϼ��鵥�б�
 */
class IncomingTableDTO : public oatpp::DTO
{
	DTO_INIT(IncomingTableDTO, DTO);
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
	// ��������
	API_DTO_FIELD_DEFAULT(Float64, recvNum, ZH_WORDS_GETTER("incoming.fields.rcvnum"));
	// �������
	API_DTO_FIELD_DEFAULT(Int32, inspectNum, ZH_WORDS_GETTER("incoming.fields.ispnum"));
	// ���ϸ�����
	API_DTO_FIELD_DEFAULT(Int32, unqualifiedNum, ZH_WORDS_GETTER("incoming.fields.unqnum"));
	// �����
	API_DTO_FIELD_DEFAULT(String, checkResult, ZH_WORDS_GETTER("incoming.fields.spresult"));
	// ��������
	API_DTO_FIELD_DEFAULT(String, reciveDate, ZH_WORDS_GETTER("incoming.fields.indate"));

};

/**
*���ϼ��鵥����
*/
class IncomingDetailDTO : public IncomingTableDTO
{
	DTO_INIT(IncomingDetailDTO, DTO);

};

/**
 * ��ҳ�������
 */
class IncomingPageDTO : public PageDTO<IncomingDTO::Wrapper>
{
	DTO_INIT(IncomingPageDTO, PageDTO<IncomingDTO::Wrapper>);
};

#include OATPP_CODEGEN_END(DTO)
#endif // !_INCOMING_DTO_