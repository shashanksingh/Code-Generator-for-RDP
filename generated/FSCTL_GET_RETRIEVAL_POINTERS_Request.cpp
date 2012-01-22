/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_RETRIEVAL_POINTERS_Request.cpp
 *
 *        Version:  1.0
 *        Created:  25/06/2011 06:54:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:
 *        Company:  Devon IT
 *
 * =====================================================================================
 */

#include "FSCTL_GET_RETRIEVAL_POINTERS_Request.h"

FSCTL_GET_RETRIEVAL_POINTERS_Request::FSCTL_GET_RETRIEVAL_POINTERS_Request() 
{
}

FSCTL_GET_RETRIEVAL_POINTERS_Request::~FSCTL_GET_RETRIEVAL_POINTERS_Request() 
{
}


qint64 FSCTL_GET_RETRIEVAL_POINTERS_Request:: getStartingVcn()
{
	return m_StartingVcn;
}

void FSCTL_GET_RETRIEVAL_POINTERS_Request:: setStartingVcn(const qint64 & value)
{
	m_StartingVcn = value;
}
void FSCTL_GET_RETRIEVAL_POINTERS_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_GET_RETRIEVAL_POINTERS_Request::getBytes() 
{
}

