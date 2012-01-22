/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_QUERY_ALLOCATED_RANGES_Reply.cpp
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

#include "FSCTL_QUERY_ALLOCATED_RANGES_Reply.h"

FSCTL_QUERY_ALLOCATED_RANGES_Reply::FSCTL_QUERY_ALLOCATED_RANGES_Reply() 
{
}

FSCTL_QUERY_ALLOCATED_RANGES_Reply::~FSCTL_QUERY_ALLOCATED_RANGES_Reply() 
{
}


qint64 FSCTL_QUERY_ALLOCATED_RANGES_Reply:: getFileOffset()
{
	return m_FileOffset;
}

void FSCTL_QUERY_ALLOCATED_RANGES_Reply:: setFileOffset(const qint64 & value)
{
	m_FileOffset = value;
}

qint64 FSCTL_QUERY_ALLOCATED_RANGES_Reply:: getLength()
{
	return m_Length;
}

void FSCTL_QUERY_ALLOCATED_RANGES_Reply:: setLength(const qint64 & value)
{
	m_Length = value;
}
void FSCTL_QUERY_ALLOCATED_RANGES_Reply::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_QUERY_ALLOCATED_RANGES_Reply::getBytes() 
{
}

