/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_RETRIEVAL_POINTERS_Reply.cpp
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

#include "FSCTL_GET_RETRIEVAL_POINTERS_Reply.h"

FSCTL_GET_RETRIEVAL_POINTERS_Reply::FSCTL_GET_RETRIEVAL_POINTERS_Reply() 
{
}

FSCTL_GET_RETRIEVAL_POINTERS_Reply::~FSCTL_GET_RETRIEVAL_POINTERS_Reply() 
{
}


qint64 FSCTL_GET_RETRIEVAL_POINTERS_Reply:: getNextVcn()
{
	return m_NextVcn;
}

void FSCTL_GET_RETRIEVAL_POINTERS_Reply:: setNextVcn(const qint64 & value)
{
	m_NextVcn = value;
}

qint64 FSCTL_GET_RETRIEVAL_POINTERS_Reply:: getLcn()
{
	return m_Lcn;
}

void FSCTL_GET_RETRIEVAL_POINTERS_Reply:: setLcn(const qint64 & value)
{
	m_Lcn = value;
}

quint32 FSCTL_GET_RETRIEVAL_POINTERS_Reply:: getPathNameLength()
{
	return m_PathNameLength;
}

void FSCTL_GET_RETRIEVAL_POINTERS_Reply:: setPathNameLength(const quint32 & value)
{
	m_PathNameLength = value;
}

QByteArray FSCTL_GET_RETRIEVAL_POINTERS_Reply:: getPathName()
{
	return m_PathName;
}

void FSCTL_GET_RETRIEVAL_POINTERS_Reply:: setPathName(const QByteArray & value)
{
	m_PathName = value;
}
void FSCTL_GET_RETRIEVAL_POINTERS_Reply::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_GET_RETRIEVAL_POINTERS_Reply::getBytes() 
{
}

