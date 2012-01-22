/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_ZERO_DATA_Request.cpp
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

#include "FSCTL_SET_ZERO_DATA_Request.h"

FSCTL_SET_ZERO_DATA_Request::FSCTL_SET_ZERO_DATA_Request() 
{
}

FSCTL_SET_ZERO_DATA_Request::~FSCTL_SET_ZERO_DATA_Request() 
{
}


qint64 FSCTL_SET_ZERO_DATA_Request:: getFileOffset()
{
	return m_FileOffset;
}

void FSCTL_SET_ZERO_DATA_Request:: setFileOffset(const qint64 & value)
{
	m_FileOffset = value;
}

qint64 FSCTL_SET_ZERO_DATA_Request:: getBeyondFinalZero()
{
	return m_BeyondFinalZero;
}

void FSCTL_SET_ZERO_DATA_Request:: setBeyondFinalZero(const qint64 & value)
{
	m_BeyondFinalZero = value;
}
void FSCTL_SET_ZERO_DATA_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_SET_ZERO_DATA_Request::getBytes() 
{
}

