#pragma once

#ifndef _INCOMING_VO_
#define _INCOMING_VO_

#include "../../GlobalInclude.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ����һ�����ϼ��鵥�б���ʾVO
 */
class IncomingTableJsonVO : public oatpp::DTO
{
	DTO_INIT(, DTO);

};

#include OATPP_CODEGEN_END(DTO)
#endif // !_INCOMING_VO_