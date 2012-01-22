/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_QUERY_ALLOCATED_RANGES_Request.cpp
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

#include "FSCTL_QUERY_ALLOCATED_RANGES_Request.h"

FSCTL_QUERY_ALLOCATED_RANGES_Request::FSCTL_QUERY_ALLOCATED_RANGES_Request() 
{
}

FSCTL_QUERY_ALLOCATED_RANGES_Request::~FSCTL_QUERY_ALLOCATED_RANGES_Request() 
{
}


qint64 FSCTL_QUERY_ALLOCATED_RANGES_Request:: getFileOffset()
{
	return m_FileOffset;
}

void FSCTL_QUERY_ALLOCATED_RANGES_Request:: setFileOffset(const qint64 & value)
{
	m_FileOffset = value;
}

qint64 FSCTL_QUERY_ALLOCATED_RANGES_Request:: getLength()
{
	return m_Length;
}

void FSCTL_QUERY_ALLOCATED_RANGES_Request:: setLength(const qint64 & value)
{
	m_Length = value;
}
void FSCTL_QUERY_ALLOCATED_RANGES_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_QUERY_ALLOCATED_RANGES_Request::getBytes() 
{
}

