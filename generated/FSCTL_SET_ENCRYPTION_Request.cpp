/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_ENCRYPTION_Request.cpp
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

#include "FSCTL_SET_ENCRYPTION_Request.h"

FSCTL_SET_ENCRYPTION_Request::FSCTL_SET_ENCRYPTION_Request() 
{
}

FSCTL_SET_ENCRYPTION_Request::~FSCTL_SET_ENCRYPTION_Request() 
{
}


quint32 FSCTL_SET_ENCRYPTION_Request:: getEncryptionOperation()
{
	return m_EncryptionOperation;
}

void FSCTL_SET_ENCRYPTION_Request:: setEncryptionOperation(const quint32 & value)
{
	m_EncryptionOperation = value;
}

quint8 FSCTL_SET_ENCRYPTION_Request:: getPrivate()
{
	return m_Private;
}

void FSCTL_SET_ENCRYPTION_Request:: setPrivate(const quint8 & value)
{
	m_Private = value;
}

QByteArray FSCTL_SET_ENCRYPTION_Request:: getPadding()
{
	return m_Padding;
}

void FSCTL_SET_ENCRYPTION_Request:: setPadding(const QByteArray & value)
{
	m_Padding = value;
}
void FSCTL_SET_ENCRYPTION_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_SET_ENCRYPTION_Request::getBytes() 
{
}

