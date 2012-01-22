/*
 * =====================================================================================
 *
 *       Filename:  FSCTL_READ_FILE_USN_DATA_Reply.cpp
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

#include "FSCTL_READ_FILE_USN_DATA_Reply.h"

FSCTL_READ_FILE_USN_DATA_Reply::FSCTL_READ_FILE_USN_DATA_Reply() 
{
}

FSCTL_READ_FILE_USN_DATA_Reply::~FSCTL_READ_FILE_USN_DATA_Reply() 
{
}


quint32 FSCTL_READ_FILE_USN_DATA_Reply:: getRecordLength()
{
	return m_RecordLength;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setRecordLength(const quint32 & value)
{
	m_RecordLength = value;
}

quint16 FSCTL_READ_FILE_USN_DATA_Reply:: getMajorVersion()
{
	return m_MajorVersion;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setMajorVersion(const quint16 & value)
{
	m_MajorVersion = value;
}

quint16 FSCTL_READ_FILE_USN_DATA_Reply:: getMinorVersion()
{
	return m_MinorVersion;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setMinorVersion(const quint16 & value)
{
	m_MinorVersion = value;
}

quint64 FSCTL_READ_FILE_USN_DATA_Reply:: getFileReferenceNumber()
{
	return m_FileReferenceNumber;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setFileReferenceNumber(const quint64 & value)
{
	m_FileReferenceNumber = value;
}

quint64 FSCTL_READ_FILE_USN_DATA_Reply:: getParentFileReferenceNumber()
{
	return m_ParentFileReferenceNumber;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setParentFileReferenceNumber(const quint64 & value)
{
	m_ParentFileReferenceNumber = value;
}

qint64 FSCTL_READ_FILE_USN_DATA_Reply:: getUsn()
{
	return m_Usn;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setUsn(const qint64 & value)
{
	m_Usn = value;
}

quint64 FSCTL_READ_FILE_USN_DATA_Reply:: getTimeStamp()
{
	return m_TimeStamp;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setTimeStamp(const quint64 & value)
{
	m_TimeStamp = value;
}

quint32 FSCTL_READ_FILE_USN_DATA_Reply:: getReason()
{
	return m_Reason;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setReason(const quint32 & value)
{
	m_Reason = value;
}

quint32 FSCTL_READ_FILE_USN_DATA_Reply:: getSourceInfo()
{
	return m_SourceInfo;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setSourceInfo(const quint32 & value)
{
	m_SourceInfo = value;
}

quint32 FSCTL_READ_FILE_USN_DATA_Reply:: getSecurityId()
{
	return m_SecurityId;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setSecurityId(const quint32 & value)
{
	m_SecurityId = value;
}

quint32 FSCTL_READ_FILE_USN_DATA_Reply:: getFileAttributes()
{
	return m_FileAttributes;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setFileAttributes(const quint32 & value)
{
	m_FileAttributes = value;
}

quint16 FSCTL_READ_FILE_USN_DATA_Reply:: getFileNameLength()
{
	return m_FileNameLength;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setFileNameLength(const quint16 & value)
{
	m_FileNameLength = value;
}

quint16 FSCTL_READ_FILE_USN_DATA_Reply:: getFileNameOffset()
{
	return m_FileNameOffset;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setFileNameOffset(const quint16 & value)
{
	m_FileNameOffset = value;
}

QByteArray FSCTL_READ_FILE_USN_DATA_Reply:: getFileName()
{
	return m_FileName;
}

void FSCTL_READ_FILE_USN_DATA_Reply:: setFileName(const QByteArray & value)
{
	m_FileName = value;
}
void FSCTL_READ_FILE_USN_DATA_Reply::parse(const QByteArray & packet) 
{
}

QByteArray FSCTL_READ_FILE_USN_DATA_Reply::getBytes() 
{
}

