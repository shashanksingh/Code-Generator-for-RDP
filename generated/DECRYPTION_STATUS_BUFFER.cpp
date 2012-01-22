/*
 * =====================================================================================
 *
 *       Filename:  DECRYPTION_STATUS_BUFFER.cpp
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

#include "DECRYPTION_STATUS_BUFFER.h"

DECRYPTION_STATUS_BUFFER::DECRYPTION_STATUS_BUFFER() 
{
}

DECRYPTION_STATUS_BUFFER::~DECRYPTION_STATUS_BUFFER() 
{
}


quint8 DECRYPTION_STATUS_BUFFER:: getNoEncryptedStreams()
{
	return m_NoEncryptedStreams;
}

void DECRYPTION_STATUS_BUFFER:: setNoEncryptedStreams(const quint8 & value)
{
	m_NoEncryptedStreams = value;
}
void DECRYPTION_STATUS_BUFFER::parse(const QByteArray & packet) 
{
}

QByteArray DECRYPTION_STATUS_BUFFER::getBytes() 
{
}

