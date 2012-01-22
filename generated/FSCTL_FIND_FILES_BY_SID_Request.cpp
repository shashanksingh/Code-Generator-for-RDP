/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_FIND_FILES_BY_SID_Request.cpp
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

#include "FSCTL_FIND_FILES_BY_SID_Request.h"

FSCTL_FIND_FILES_BY_SID_Request::FSCTL_FIND_FILES_BY_SID_Request() 
{
}

FSCTL_FIND_FILES_BY_SID_Request::~FSCTL_FIND_FILES_BY_SID_Request() 
{
}


quint32 FSCTL_FIND_FILES_BY_SID_Request:: getRestart()
{
	return m_Restart;
}

void FSCTL_FIND_FILES_BY_SID_Request:: setRestart(const quint32 & value)
{
	m_Restart = value;
}

QByteArray FSCTL_FIND_FILES_BY_SID_Request:: getsID()
{
	return m_sID;
}

void FSCTL_FIND_FILES_BY_SID_Request:: setsID(const QByteArray & value)
{
	m_sID = value;
}
void FSCTL_FIND_FILES_BY_SID_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_FIND_FILES_BY_SID_Request::getBytes() 
{
}

