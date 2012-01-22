/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_COMPRESSION_Request.cpp
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

#include "FSCTL_SET_COMPRESSION_Request.h"

FSCTL_SET_COMPRESSION_Request::FSCTL_SET_COMPRESSION_Request() 
{
}

FSCTL_SET_COMPRESSION_Request::~FSCTL_SET_COMPRESSION_Request() 
{
}


quint16 FSCTL_SET_COMPRESSION_Request:: getCompressionState()
{
	return m_CompressionState;
}

void FSCTL_SET_COMPRESSION_Request:: setCompressionState(const quint16 & value)
{
	m_CompressionState = value;
}
void FSCTL_SET_COMPRESSION_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_SET_COMPRESSION_Request::getBytes() 
{
}

