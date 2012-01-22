/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_PIPE_WAIT_Request.cpp
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

#include "FSCTL_PIPE_WAIT_Request.h"

FSCTL_PIPE_WAIT_Request::FSCTL_PIPE_WAIT_Request() 
{
}

FSCTL_PIPE_WAIT_Request::~FSCTL_PIPE_WAIT_Request() 
{
}


qint64 FSCTL_PIPE_WAIT_Request:: getTimeout()
{
	return m_Timeout;
}

void FSCTL_PIPE_WAIT_Request:: setTimeout(const qint64 & value)
{
	m_Timeout = value;
}

quint32 FSCTL_PIPE_WAIT_Request:: getNameLength()
{
	return m_NameLength;
}

void FSCTL_PIPE_WAIT_Request:: setNameLength(const quint32 & value)
{
	m_NameLength = value;
}

quint8 FSCTL_PIPE_WAIT_Request:: getTimeoutSpecified()
{
	return m_TimeoutSpecified;
}

void FSCTL_PIPE_WAIT_Request:: setTimeoutSpecified(const quint8 & value)
{
	m_TimeoutSpecified = value;
}

quint8 FSCTL_PIPE_WAIT_Request:: getPadding()
{
	return m_Padding;
}

void FSCTL_PIPE_WAIT_Request:: setPadding(const quint8 & value)
{
	m_Padding = value;
}

QByteArray FSCTL_PIPE_WAIT_Request:: getName()
{
	return m_Name;
}

void FSCTL_PIPE_WAIT_Request:: setName(const QByteArray & value)
{
	m_Name = value;
}
void FSCTL_PIPE_WAIT_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_PIPE_WAIT_Request::getBytes() 
{
}

