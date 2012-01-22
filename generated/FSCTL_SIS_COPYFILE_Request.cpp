/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_SIS_COPYFILE_Request.cpp
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

#include "FSCTL_SIS_COPYFILE_Request.h"

FSCTL_SIS_COPYFILE_Request::FSCTL_SIS_COPYFILE_Request() 
{
}

FSCTL_SIS_COPYFILE_Request::~FSCTL_SIS_COPYFILE_Request() 
{
}


quint32 FSCTL_SIS_COPYFILE_Request:: getSourceFileNameLength()
{
	return m_SourceFileNameLength;
}

void FSCTL_SIS_COPYFILE_Request:: setSourceFileNameLength(const quint32 & value)
{
	m_SourceFileNameLength = value;
}

quint32 FSCTL_SIS_COPYFILE_Request:: getDestinationFileNameLength()
{
	return m_DestinationFileNameLength;
}

void FSCTL_SIS_COPYFILE_Request:: setDestinationFileNameLength(const quint32 & value)
{
	m_DestinationFileNameLength = value;
}

quint32 FSCTL_SIS_COPYFILE_Request:: getFlags()
{
	return m_Flags;
}

void FSCTL_SIS_COPYFILE_Request:: setFlags(const quint32 & value)
{
	m_Flags = value;
}

QByteArray FSCTL_SIS_COPYFILE_Request:: getSourceFileName()
{
	return m_SourceFileName;
}

void FSCTL_SIS_COPYFILE_Request:: setSourceFileName(const QByteArray & value)
{
	m_SourceFileName = value;
}

QByteArray FSCTL_SIS_COPYFILE_Request:: getDestinationFileName()
{
	return m_DestinationFileName;
}

void FSCTL_SIS_COPYFILE_Request:: setDestinationFileName(const QByteArray & value)
{
	m_DestinationFileName = value;
}
void FSCTL_SIS_COPYFILE_Request::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_SIS_COPYFILE_Request::getBytes() 
{
}

