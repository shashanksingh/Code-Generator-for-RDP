/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SET_OBJECT_ID_EXTENDED_Request.cpp
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

#include "FSCTL_SET_OBJECT_ID_EXTENDED_Request.h"

FSCTL_SET_OBJECT_ID_EXTENDED_Request::FSCTL_SET_OBJECT_ID_EXTENDED_Request() 
{
}

FSCTL_SET_OBJECT_ID_EXTENDED_Request::~FSCTL_SET_OBJECT_ID_EXTENDED_Request() 
{
}


QByteArray FSCTL_SET_OBJECT_ID_EXTENDED_Request:: getExtendedInfo()
{
	return m_ExtendedInfo;
}

void FSCTL_SET_OBJECT_ID_EXTENDED_Request:: setExtendedInfo(const QByteArray & value)
{
	m_ExtendedInfo = value;
}
void FSCTL_SET_OBJECT_ID_EXTENDED_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_SET_OBJECT_ID_EXTENDED_Request::getBytes() 
{
}

