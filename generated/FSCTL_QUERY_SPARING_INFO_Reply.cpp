/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_QUERY_SPARING_INFO_Reply.cpp
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

#include "FSCTL_QUERY_SPARING_INFO_Reply.h"

FSCTL_QUERY_SPARING_INFO_Reply::FSCTL_QUERY_SPARING_INFO_Reply() 
{
}

FSCTL_QUERY_SPARING_INFO_Reply::~FSCTL_QUERY_SPARING_INFO_Reply() 
{
}


quint32 FSCTL_QUERY_SPARING_INFO_Reply:: getSparingUnitBytes()
{
	return m_SparingUnitBytes;
}

void FSCTL_QUERY_SPARING_INFO_Reply:: setSparingUnitBytes(const quint32 & value)
{
	m_SparingUnitBytes = value;
}

quint8 FSCTL_QUERY_SPARING_INFO_Reply:: getSoftwareSparing()
{
	return m_SoftwareSparing;
}

void FSCTL_QUERY_SPARING_INFO_Reply:: setSoftwareSparing(const quint8 & value)
{
	m_SoftwareSparing = value;
}

QByteArray FSCTL_QUERY_SPARING_INFO_Reply:: getReserved()
{
	return m_Reserved;
}

void FSCTL_QUERY_SPARING_INFO_Reply:: setReserved(const QByteArray & value)
{
	m_Reserved = value;
}

quint32 FSCTL_QUERY_SPARING_INFO_Reply:: getTotalSpareBlocks()
{
	return m_TotalSpareBlocks;
}

void FSCTL_QUERY_SPARING_INFO_Reply:: setTotalSpareBlocks(const quint32 & value)
{
	m_TotalSpareBlocks = value;
}

quint32 FSCTL_QUERY_SPARING_INFO_Reply:: getFreeSpareBlocks()
{
	return m_FreeSpareBlocks;
}

void FSCTL_QUERY_SPARING_INFO_Reply:: setFreeSpareBlocks(const quint32 & value)
{
	m_FreeSpareBlocks = value;
}
void FSCTL_QUERY_SPARING_INFO_Reply::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_QUERY_SPARING_INFO_Reply::getBytes() 
{
}

