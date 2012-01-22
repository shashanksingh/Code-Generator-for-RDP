/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_GET_COMPRESSION_Reply.cpp
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

#include "FSCTL_GET_COMPRESSION_Reply.h"

FSCTL_GET_COMPRESSION_Reply::FSCTL_GET_COMPRESSION_Reply() 
{
}

FSCTL_GET_COMPRESSION_Reply::~FSCTL_GET_COMPRESSION_Reply() 
{
}


quint16 FSCTL_GET_COMPRESSION_Reply:: getCompressionState()
{
	return m_CompressionState;
}

void FSCTL_GET_COMPRESSION_Reply:: setCompressionState(const quint16 & value)
{
	m_CompressionState = value;
}
void FSCTL_GET_COMPRESSION_Reply::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_GET_COMPRESSION_Reply::getBytes() 
{
}

